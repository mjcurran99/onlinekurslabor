<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>

<a id="node-<?php echo $nm_nid; ?>"></a>
<div class="nm-stream-node-container" id="nm-stream-node-<?php echo $nm_nid; ?>">
  <div class="nm-stream-context"><?php echo $nm_context; ?></div>
  <div class="nm-stream-node">
    <div class="row-fluid">
      <div class="nm-stream-top span12">
        <div class="row-fluid">
          <div class="nm-stream-left span1"><?php echo $nm_author_pic; ?></div>
          <div class="span11">
            <div class="row-fluid">
              <div class="nm-stream-middle span5">
                <div class="nm-stream-name"><?php echo $nm_author_link; ?></div>
                <div class="nm-stream-created"><i class="icon icon-time"></i> <?php echo $nm_created; ?></div>
              </div>
              <div class="nm-stream-top-right span7">
                <div class="nm-stream-privacy">
                  <img height="20" width="20" style="opacity:0.9;" src="/<?php echo $nm_privacy['icon_path']; ?>" title="<?php echo $nm_privacy['label']; ?>" />
                </div>
                <div class="nm-stream-modified"><?php echo $nm_modified; ?></div>
                <div class="nm-stream-actions"><?php echo $nm_actions; ?></div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <div class="row-fluid">
      <div class="nm-stream-main span12">
        <div class="nm-stream-main-body"><?php echo $nm_body; ?></div>
      </div>
    </div>

    <div class="row-fluid">
      <?php if (!empty($nm_attachments)): ?>
        <div class="nm-stream-attachments offset1 span11">
          <div class="nm-stream-attachments-title"><i class="icon  icon-download"></i> Anhänge:</div>
          <div class="nm-stream-attachments-main"><?php echo $nm_attachments; ?></div>
        </div>
      <?php endif; ?>

      <?php if ($nm_num_comments == 0 && !empty($comments_form)) : ?>
        <div class="row-fluid">
          <div class="nm-stream-comments-form offset1 span11"><?php echo $comments_form; ?></div>
        </div>
      <?php endif; ?>
    </div>
  </div>
  <?php if ($nm_num_comments > 0) : ?>

    <div class="nm-stream-comments-section">
      <div class="row-fluid">
        <div class="nm-stream-comments offset1 span11">
          <div class="nm-stream-node-information"><?php echo $comments_information; ?></div>
          <div class="nm-stream-comments-form"><?php echo $comments_form; ?></div>
          <div class="nm-stream-comments-container"><?php echo $comments_container; ?></div>   
        </div>
      </div>
    </div>
  <?php endif; ?>

</div>