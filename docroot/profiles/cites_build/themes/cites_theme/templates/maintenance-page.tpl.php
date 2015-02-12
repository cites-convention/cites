<?php
/**
 * @file
 * Implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in page.tpl.php.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 * @see cites_theme_process_maintenance_page()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html dir="<?php print $language->dir; ?>" lang="<?php print $language->language; ?>" xml:lang="<?php print $language->language; ?>" xmlns="http://www.w3.org/1999/xhtml">
  <head>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes; ?>>
    <div id="skip-link">
      <a class="element-invisible element-focusable" href="#main-content">
        <?php print t('Skip to main content'); ?>
      </a><!-- .element-invisible .element-focusable -->
    </div><!-- .skip-link -->
    <div id="page-wrapper">
      <div id="page">
        <div id="header">
          <div class="section clearfix">
            <!-- -->
          </div><!-- .section .clearfix -->
        </div><!-- #header -->
        <div id="main-wrapper">
          <div class="clearfix" id="main">
            <div class="column" id="content">
              <div class="section">
                <a id="main-content"></a>
                <?php if ($title): ?>
                  <h1 class="title" id="page-title"><?php print $title; ?></h1>
                <?php endif; ?>
                <?php print $content; ?>
                <?php if ($messages): ?>
                  <div id="messages">
                    <div class="section clearfix">
                      <?php print $messages; ?>
                    </div><!-- .section .clearfix -->
                  </div><!-- #messages -->
                <?php endif; ?>
              </div><!-- .section -->
            </div><!-- .column #content -->
          </div><!-- .clearfix #main -->
        </div><!-- #main-wrapper -->
      </div><!-- #page -->
    </div><!-- #page-wrapper -->
  </body>
</html>
