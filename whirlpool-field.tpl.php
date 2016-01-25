<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * Available variables:
 * - $title: The title of this group of rows. May be empty.
 * - $options['type'] will either be ul or ol.
 *
 * @ingroup views_templates
 */
?>
<div id="wrapper">
  <div id="vortex">
    <?php foreach ($items as $id => $row):
    ?>
    <div><?php print $row; ?></div>
  <?php endforeach; ?>
</div>
</div>
