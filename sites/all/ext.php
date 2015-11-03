<?php
$raw = "jpg, gif, png, doc, docx, xls, xlsx, pdf, zip, rar, ppt, pptx, wmv, mov, mp3, rav, ae, ai, eps, indd, ai, 3gp, 3g2, asf, avi, dv, f4v, M1V, M2T, M2TS, M4V, MP4, MPEG, MPE, MPG, M2V, MTS, MXF, MJPEGs, VOB, WMV, AAC, AC3, AIFF, AIF, ASND, AVI, BWF, M4A, mp3, MPEG, MPG, MOV, MXF, WMA, WAV, AI, EPS, BMP, DIB, RLE, DPX, EPS, GIF, ICO, JPEG, PICT, PNG, PSD, PSQ, PTL, PRTL, TGA, ICB, VDA, VST, TIF, DFXP, MCC, SCC, STL, XML, AAF, AEP, AEPX, CSV, PBL, TXT, TAB, EDL, PLB, PREL, PRPROJ, PSQ, XML";
$raw = strtolower(preg_replace('/\s/', '', $raw));
$raw = explode(',', $raw);
$extensions = array();
foreach($raw as $ext) {
  $extensions[$ext] = $ext;
}
ksort($extensions);
print "\n\n" . implode(',', $extensions) . "\n\n";
exit;