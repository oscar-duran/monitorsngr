<?php

/**
 * @file
 * Template to show related information to an Supplie form author.
 */
?>
<div class="container monitorsngr-pge-supplie-form-author-container">
  <div  class="field">
    <div class="field-label"><?php print $name['label']; ?></div>
    <div class="field-items">
      <div class="field-item"><?php print $name['value']; ?></div>
    </div>
  </div>
  <div  class="field">
    <div class="field-label"><?php print $position['label']; ?> </div>
    <div class="field-items">
      <div class="field-item"> <?php print $position['value']; ?></div>
    </div>
  </div>
  <div  class="field">
    <div class="field-label"> <?php print $phone['label']; ?></div>
    <div class="field-items">
      <?php foreach($phone['value'] as $phone): ?>
      <div class="field-item">
        <?php print $phone; ?>
      </div>
      <?php endforeach; ?>
    </div>
  </div>
  <div  class="field">
    <div class="field-label"> <?php print $mail['label']; ?></div>
    <div class="field-items">
      <div class="field-item"> <?php print $mail['value']; ?></div>
    </div>
  </div>
</div>
