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
if ( $type == 'image' ) {
  $vars = array(
    'style_name' => 'file_preview', 
    'path' => $uri, 
    'width' => $width, 
    'height' => $height, 
  );
  $file_thumbnail = theme_image_style($vars);
}
?>
<div class="file-inner-wrapper">
  <div class="file-thumbnail">
    <div class="file-thumbnail-inner">
      <?php print $file_thumbnail;?>
    </div>

    <div class="file-info">
      <div class="file-info-inner">
        <div class="data">
          <a class="view" target="_blank" href="<?php print $view;?>"><?php print t('View');?></a>
        </div>
        
        <div class="data">
          <a class="download" target="_blank" href="<?php print $download;?>"><?php print t('Download');?></a>
        </div>
        
        <div class="data">
          <span class="extension"><?php print $extension;?></span> - <span class="filesize"><?php print $hfilesize;?></span>
        </div>
      </div>
    </div>
  </div>
  <div class="file-title"><?php print check_plain($filename);?></div>
</div>