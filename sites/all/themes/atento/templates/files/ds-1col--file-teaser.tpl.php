<?php
if ( isset($_GET['test-files']) ) {
  print_r(get_defined_vars());exit;
}
$extension = pathinfo($filename, PATHINFO_EXTENSION);
$hfilesize = atento_get_human_size($filesize);
$view = file_create_url($uri);
$file = $elements['#file'];
$uri_download = file_entity_download_uri($file);
$download = url($uri_download['path'], $uri_download['options']);
$file_thumbnail = '&nbsp;';
if ( $type == 'image' ) {
  $vars = array(
    'style_name' => 'file_preview', 
    'path' => $uri, 
    'width' => $width, 
    'height' => $height, 
  );
  $file_thumbnail = theme_image_style($vars);
  
  $vars2 = $vars;
  $vars2['style_name'] = 'full';
  $dimensions = array(
    'width' => $vars2['width'],
    'height' => $vars2['height'],
  );
  image_style_transform_dimensions($vars2['style_name'], $dimensions);
  $vars2['width'] = $dimensions['width'];
  $vars2['height'] = $dimensions['height'];
  $vars2['path'] = image_style_url($vars2['style_name'], $vars2['path']);
  $view = $vars2['path'];
  $data_size = "{$vars2['width']}x{$vars2['height']}";
} else {
  // Get Image for Extension
  $file_thumbnail = atento_get_extension_image($extension);
}
$filename_print = check_plain($filename);

if ( isset($file->description) && !empty($file->description) ) {
  $filename_print = check_markup($file->description, 'full_html');
}

?>
<div class="file-preview">
  <div class="file-inner-wrapper">
    <div class="file-thumbnail">
      <div class="file-thumbnail-inner">
        <?php print $file_thumbnail;?>
      </div>
  
      <div class="file-info">
        <div class="file-info-inner">
          <div class="data view-option">
          <?php if ( $type == 'image'): ?>
            <a class="view photoswipe" href="<?php print $vars2['path'];?>" data-size="<?php print $data_size; ?>" data-overlay-title="<?php print $filename_print;?>"><?php print t('View');?></a>
          <?php else: ?>
            <a class="view" target="_blank" href="<?php print $view;?>"><?php print t('View');?></a>
          <?php endif;?> 
          </div>
          
          <div class="data download-option">
            <a class="download file-download" target="_blank" href="<?php print $download;?>"><?php print t('Download');?></a>
          </div>
          
          <div class="data data-option">
            <span class="extension"><?php print $extension;?></span> - <span class="filesize"><?php print $hfilesize;?></span>
          </div>
        </div>
      </div>
    </div>
    <div class="file-title"><?php print $filename_print;?></div>
  </div>
</div>
