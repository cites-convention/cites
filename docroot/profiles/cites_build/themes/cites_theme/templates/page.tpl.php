<?php
/**
 * @file
 * CITES's theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template normally located in the
 * modules/system directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/cites_theme.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the site,
 *   if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node associated
 *   with the page, and the node ID is the second argument in the page's path
 *   (e.g. node/12345 and node/12345/revisions, but not comment/reply/12345).
 *
 * Regions:
 * - $page['header']: Items for the header region.
 * - $page['featured']: Items for the featured region.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['front']: The main content of the front page.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see cites_theme_process_page()
 * @see html.tpl.php
 */
?>
<div id="page-wrapper">
  <div id="page">
    <div id="header">
      <div class="section clearfix">
        <?php if ($secondary_menu): ?>
          <div class="navigation clearfix" id="secondary-menu">
            <?php
            // Displays the Secondary links.
            print theme('links__system_secondary_menu', array(
              'attributes' => array(
                'class' => array('links', 'inline', 'clearfix'),
                'id'    => 'secondary-menu-links'
              ),
              'heading' => array(
                'class' => array('element-invisible'),
                'level' => 'h2',
                'text'  => t('Secondary menu')
              ),
              'links' => $secondary_menu
            ));
            ?>
          </div><!-- .navigation #secondary-menu -->
        <?php endif; ?>
        <div id="banner">
          <?php if (module_exists('locale')): ?>
            <div id="language-switcher">
              <?php
              // Displays the language switcher block.
              $block = module_invoke('locale', 'block_view', 'language');
              print render($block['content']);
              ?>
            </div><!-- #language-switcher -->
          <?php endif; ?>
          <?php print render($page['header']); ?>
        </div><!-- #banner -->
        <?php if ($main_menu): ?>
          <div class="navigation" id="main-menu">
            <?php if (module_exists('search')): ?>
              <div id="search">
                <?php
                // Displays the search form block.
                $block = module_invoke('search', 'block_view');
                print render($block);
                ?>
              </div><!-- #search -->
            <?php endif; ?>
            <?php
            if (module_exists('nice_menus')) {
              // Uses the Nice menus module to display the Main
              // links.
              print theme('nice_menus_main_menu', array(
                'depth'     => -1,
                'direction' => 'down'
              ));
            } else {
              // Displays the Main links.
              print theme('links__system_main_menu', array(
                'attributes' => array(
                  'class' => array('links', 'clearfix'),
                  'id'    => 'main-menu-links'
                ),
                'heading' => array(
                  'class' => array('element-invisible'),
                  'level' => 'h2',
                  'text'  => t('Main menu')
                ),
                'links' => $main_menu
              ));
            }
            ?>
          </div><!-- .navigation #main-menu -->
        <?php endif; ?>
      </div><!-- .section .clearfix -->
    </div><!-- #header -->
    <?php if ($messages): ?>
      <div id="messages">
        <div class="section clearfix">
          <?php print $messages; ?>
        </div><!-- .section .clearfix -->
      </div><!-- #messages -->
    <?php endif; ?>
    <?php if ($page['featured']): ?>
      <div id="featured">
        <div class="section clearfix">
          <?php print render($page['featured']); ?>
        </div><!-- .section .clearfix -->
      </div><!-- #featured -->
    <?php endif; ?>
    <div class="clearfix" id="main-wrapper">
      <div class="clearfix" id="main">
        <?php if ($breadcrumb): ?>
          <div id="breadcrumb">
            <?php print $breadcrumb; ?>
          </div><!-- #breadcrumb -->
        <?php endif; ?>
        <?php if ($page['sidebar_first']): ?>
          <div class="column sidebar" id="sidebar-first">
            <div class="section">
              <?php print render($page['sidebar_first']); ?>
            </div><!-- .section -->
          </div><!-- .column .sidebar #sidebar-first -->
        <?php endif; ?>
        <div class="column" id="content">
          <div class="section">
            <?php if ($page['highlighted']): ?>
              <div id="highlighted">
                <?php print render($page['highlighted']); ?>
              </div><!-- #highlighted -->
            <?php endif; ?>
            <a id="main-content"></a>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?>
              <h1 class="title" id="page-title">
                <?php print $title; ?>
              </h1><!--  .title #page-title -->
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if ($tabs): ?>
              <div class="tabs">
                <?php print render($tabs); ?>
              </div><!-- .tabs -->
            <?php endif; ?>
            <?php print render($page['help']); ?>
            <?php if ($action_links): ?>
              <ul class="action-links">
                <?php print render($action_links); ?>
              </ul><!-- .action-links -->
            <?php endif; ?>
            <?php
            if ($is_front)
              print render($page['front']);
            else
              print render($page['content']);
            ?>
            <?php print $feed_icons; ?>
          </div><!-- .section -->
        </div><!-- .column #content -->
        <?php if ($page['sidebar_second']): ?>
          <div class="column sidebar" id="sidebar-second">
            <div class="section">
              <?php if (module_exists('on_the_web')): ?>
                <div id="social-media">
                  <?php
                  // Displays the social media icons block.
                  $block = module_invoke('on_the_web', 'block_view');
                  print render($block['content']);
                  ?>
                </div><!-- #social-media -->
              <?php endif; ?>
              <?php print render($page['sidebar_second']); ?>
            </div><!-- .section -->
          </div><!-- .column .sidebar #sidebar-second -->
        <?php endif; ?>
      </div><!-- .clearfix #main -->
    </div><!-- .clearfix #main-wrapper -->
    <div id="footer-wrapper">
      <div class="section">
        <?php if ($page['footer']): ?>
          <div class="clearfix" id="footer">
            <?php print render($page['footer']); ?>
          </div><!-- .clearfix #footer -->
        <?php endif; ?>
      </div><!-- .section -->
    </div><!-- #footer-wrapper -->
  </div><!-- #page -->
</div><!-- #page-wrapper -->
