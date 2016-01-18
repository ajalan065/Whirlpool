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
<div id="vortex">
  <div><?php foreach ($rows as $id => $row):
  ?>
  <?php print $row;?></div>
<?php endforeach;?>
</div>
