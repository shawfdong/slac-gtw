<?php
/**
 * @file
 * Template to display a column
 *
 * - $item: The item to render within a td element.
 */
$id = (isset($item['id'])) ? 'id="' . $item['id'] . '" ' : '';
$date = (isset($item['date'])) ? ' data-date="' . $item['date'] . '" ' : '';
$day = (isset($item['day_of_month'])) ? ' data-day-of-month="' . $item['day_of_month'] . '" ' : '';
$headers = (isset($item['header_id'])) ? ' headers="'. $item['header_id'] .'" ' : '';
if ($item['header_id'] == 'Saturday' || $item['header_id'] == 'Sunday') {
  $item['class'] .= ' weekend';
}

// Add the Date formatted like 'Thu Apr 16' as a data attribute on each TD.
$dt = new DateTime($item['date']);
$title = strtoupper($dt->format('D')) . $dt->format(' M j');
?>
<td <?php print $id?>data-title="<?php print $title ?>" class="<?php print $item['class'] ?>" colspan="<?php print $item['colspan'] ?>" rowspan="<?php print $item['rowspan'] ?>"<?php print $date . $headers . $day; ?>>

    <?php if (strpos($item['class'], 'no-entry') === FALSE): ?>
    <div class="inner">
      <?php print $item['entry']; ?>
    </div>
    <?php else: ?>
    <div class="inner no-events">
      <p class="mobile">No Events Scheduled for Today</p>
    </div>
    <?php endif; ?>
  </div>
</td>
