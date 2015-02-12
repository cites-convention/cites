<?php
/**
 * @file
 * CITES's theme implementation to display the simplenews block.
 *
 * Available variables:
 * - $subscribed: The current user is subscribed to the $tid newsletter.
 * - $user: The current user is authenticated.
 * - $message: The announcement message. The default value is "Stay informed on
 *   our latest news!".
 * - $form: newsletter subscription form
 *
 * @see template_preprocess_simplenews_multi_block()
 */
?>
<p><?php print l(t('Subscribe to email alerts'), 'newsletter/subscriptions'); ?></p>
