<?php
/**
 * @file
 * nm_section_content_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nm_section_content_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nm_section_content_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function nm_section_content_features_image_default_styles() {
  $styles = array();

  // Exported image style: media_12.
  $styles['media_12'] = array(
    'name' => 'media_12',
    'label' => 'media_12',
    'effects' => array(
      7 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 756,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: media_3.
  $styles['media_3'] = array(
    'name' => 'media_3',
    'label' => 'media_3',
    'effects' => array(
      8 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 189,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: media_4.
  $styles['media_4'] = array(
    'name' => 'media_4',
    'label' => 'media_4',
    'effects' => array(
      11 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 252,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: media_6.
  $styles['media_6'] = array(
    'name' => 'media_6',
    'label' => 'media_6',
    'effects' => array(
      9 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 378,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: media_600px.
  $styles['media_600px'] = array(
    'name' => 'media_600px',
    'label' => 'Media_600px',
    'effects' => array(
      14 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: media_9.
  $styles['media_9'] = array(
    'name' => 'media_9',
    'label' => 'media_9',
    'effects' => array(
      10 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 567,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function nm_section_content_features_node_info() {
  $items = array(
    'content_chapter' => array(
      'name' => t('Content - Kapitel'),
      'base' => 'node_content',
      'description' => t('Kapitel der Lehrtexte, die durch ein Gebiet zusammengefasst werden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'content_domain' => array(
      'name' => t('Content - Thema'),
      'base' => 'node_content',
      'description' => t('Das Themastellt einen themenspezifischen Container für (multimediale) Kapitel und Bibliografien dar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'content_multiple_choice' => array(
      'name' => t('Content - Multiple Choice'),
      'base' => 'node_content',
      'description' => t('Multiple Choice Fragen für Studientexte'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'content_question_and_answer' => array(
      'name' => t('Content - Frage und Antwort'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}