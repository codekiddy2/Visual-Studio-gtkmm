
/* Generated data (by glib-mkenums) */

/*
 * Copyright © 2011  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Google Author(s): Behdad Esfahbod
 */

#include "hb-private.hh"

/* g++ didn't like older gtype.h gcc-only code path. */
#include <glib.h>
#if !GLIB_CHECK_VERSION(2,29,16)
#undef __GNUC__
#undef __GNUC_MINOR__
#define __GNUC__ 2
#define __GNUC_MINOR__ 6
#endif

#include "hb-gobject.h"

/* enumerations from "hb-blob.h" */
GType
hb_gobject_memory_mode_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_MEMORY_MODE_DUPLICATE, "HB_MEMORY_MODE_DUPLICATE", "duplicate" },
        { HB_MEMORY_MODE_READONLY, "HB_MEMORY_MODE_READONLY", "readonly" },
        { HB_MEMORY_MODE_WRITABLE, "HB_MEMORY_MODE_WRITABLE", "writable" },
        { HB_MEMORY_MODE_READONLY_MAY_MAKE_WRITABLE, "HB_MEMORY_MODE_READONLY_MAY_MAKE_WRITABLE", "readonly-may-make-writable" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_memory_mode_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

/* enumerations from "hb-buffer.h" */
GType
hb_gobject_buffer_content_type_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_BUFFER_CONTENT_TYPE_INVALID, "HB_BUFFER_CONTENT_TYPE_INVALID", "invalid" },
        { HB_BUFFER_CONTENT_TYPE_UNICODE, "HB_BUFFER_CONTENT_TYPE_UNICODE", "unicode" },
        { HB_BUFFER_CONTENT_TYPE_GLYPHS, "HB_BUFFER_CONTENT_TYPE_GLYPHS", "glyphs" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_buffer_content_type_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

GType
hb_gobject_buffer_flags_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GFlagsValue values[] = {
        { HB_BUFFER_FLAG_DEFAULT, "HB_BUFFER_FLAG_DEFAULT", "default" },
        { HB_BUFFER_FLAG_BOT, "HB_BUFFER_FLAG_BOT", "bot" },
        { HB_BUFFER_FLAG_EOT, "HB_BUFFER_FLAG_EOT", "eot" },
        { HB_BUFFER_FLAG_PRESERVE_DEFAULT_IGNORABLES, "HB_BUFFER_FLAG_PRESERVE_DEFAULT_IGNORABLES", "preserve-default-ignorables" },
        { 0, NULL, NULL }
      };
      GType id =
        g_flags_register_static (g_intern_static_string ("hb_buffer_flags_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

GType
hb_gobject_buffer_cluster_level_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_BUFFER_CLUSTER_LEVEL_MONOTONE_GRAPHEMES, "HB_BUFFER_CLUSTER_LEVEL_MONOTONE_GRAPHEMES", "monotone-graphemes" },
        { HB_BUFFER_CLUSTER_LEVEL_MONOTONE_CHARACTERS, "HB_BUFFER_CLUSTER_LEVEL_MONOTONE_CHARACTERS", "monotone-characters" },
        { HB_BUFFER_CLUSTER_LEVEL_CHARACTERS, "HB_BUFFER_CLUSTER_LEVEL_CHARACTERS", "characters" },
        { HB_BUFFER_CLUSTER_LEVEL_DEFAULT, "HB_BUFFER_CLUSTER_LEVEL_DEFAULT", "default" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_buffer_cluster_level_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

GType
hb_gobject_buffer_serialize_flags_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GFlagsValue values[] = {
        { HB_BUFFER_SERIALIZE_FLAG_DEFAULT, "HB_BUFFER_SERIALIZE_FLAG_DEFAULT", "default" },
        { HB_BUFFER_SERIALIZE_FLAG_NO_CLUSTERS, "HB_BUFFER_SERIALIZE_FLAG_NO_CLUSTERS", "no-clusters" },
        { HB_BUFFER_SERIALIZE_FLAG_NO_POSITIONS, "HB_BUFFER_SERIALIZE_FLAG_NO_POSITIONS", "no-positions" },
        { HB_BUFFER_SERIALIZE_FLAG_NO_GLYPH_NAMES, "HB_BUFFER_SERIALIZE_FLAG_NO_GLYPH_NAMES", "no-glyph-names" },
        { HB_BUFFER_SERIALIZE_FLAG_GLYPH_EXTENTS, "HB_BUFFER_SERIALIZE_FLAG_GLYPH_EXTENTS", "glyph-extents" },
        { 0, NULL, NULL }
      };
      GType id =
        g_flags_register_static (g_intern_static_string ("hb_buffer_serialize_flags_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

GType
hb_gobject_buffer_serialize_format_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_BUFFER_SERIALIZE_FORMAT_TEXT, "HB_BUFFER_SERIALIZE_FORMAT_TEXT", "text" },
        { HB_BUFFER_SERIALIZE_FORMAT_JSON, "HB_BUFFER_SERIALIZE_FORMAT_JSON", "json" },
        { HB_BUFFER_SERIALIZE_FORMAT_INVALID, "HB_BUFFER_SERIALIZE_FORMAT_INVALID", "invalid" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_buffer_serialize_format_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

/* enumerations from "hb-common.h" */
GType
hb_gobject_direction_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_DIRECTION_INVALID, "HB_DIRECTION_INVALID", "invalid" },
        { HB_DIRECTION_LTR, "HB_DIRECTION_LTR", "ltr" },
        { HB_DIRECTION_RTL, "HB_DIRECTION_RTL", "rtl" },
        { HB_DIRECTION_TTB, "HB_DIRECTION_TTB", "ttb" },
        { HB_DIRECTION_BTT, "HB_DIRECTION_BTT", "btt" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_direction_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

GType
hb_gobject_script_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_SCRIPT_COMMON, "HB_SCRIPT_COMMON", "common" },
        { HB_SCRIPT_INHERITED, "HB_SCRIPT_INHERITED", "inherited" },
        { HB_SCRIPT_UNKNOWN, "HB_SCRIPT_UNKNOWN", "unknown" },
        { HB_SCRIPT_ARABIC, "HB_SCRIPT_ARABIC", "arabic" },
        { HB_SCRIPT_ARMENIAN, "HB_SCRIPT_ARMENIAN", "armenian" },
        { HB_SCRIPT_BENGALI, "HB_SCRIPT_BENGALI", "bengali" },
        { HB_SCRIPT_CYRILLIC, "HB_SCRIPT_CYRILLIC", "cyrillic" },
        { HB_SCRIPT_DEVANAGARI, "HB_SCRIPT_DEVANAGARI", "devanagari" },
        { HB_SCRIPT_GEORGIAN, "HB_SCRIPT_GEORGIAN", "georgian" },
        { HB_SCRIPT_GREEK, "HB_SCRIPT_GREEK", "greek" },
        { HB_SCRIPT_GUJARATI, "HB_SCRIPT_GUJARATI", "gujarati" },
        { HB_SCRIPT_GURMUKHI, "HB_SCRIPT_GURMUKHI", "gurmukhi" },
        { HB_SCRIPT_HANGUL, "HB_SCRIPT_HANGUL", "hangul" },
        { HB_SCRIPT_HAN, "HB_SCRIPT_HAN", "han" },
        { HB_SCRIPT_HEBREW, "HB_SCRIPT_HEBREW", "hebrew" },
        { HB_SCRIPT_HIRAGANA, "HB_SCRIPT_HIRAGANA", "hiragana" },
        { HB_SCRIPT_KANNADA, "HB_SCRIPT_KANNADA", "kannada" },
        { HB_SCRIPT_KATAKANA, "HB_SCRIPT_KATAKANA", "katakana" },
        { HB_SCRIPT_LAO, "HB_SCRIPT_LAO", "lao" },
        { HB_SCRIPT_LATIN, "HB_SCRIPT_LATIN", "latin" },
        { HB_SCRIPT_MALAYALAM, "HB_SCRIPT_MALAYALAM", "malayalam" },
        { HB_SCRIPT_ORIYA, "HB_SCRIPT_ORIYA", "oriya" },
        { HB_SCRIPT_TAMIL, "HB_SCRIPT_TAMIL", "tamil" },
        { HB_SCRIPT_TELUGU, "HB_SCRIPT_TELUGU", "telugu" },
        { HB_SCRIPT_THAI, "HB_SCRIPT_THAI", "thai" },
        { HB_SCRIPT_TIBETAN, "HB_SCRIPT_TIBETAN", "tibetan" },
        { HB_SCRIPT_BOPOMOFO, "HB_SCRIPT_BOPOMOFO", "bopomofo" },
        { HB_SCRIPT_BRAILLE, "HB_SCRIPT_BRAILLE", "braille" },
        { HB_SCRIPT_CANADIAN_SYLLABICS, "HB_SCRIPT_CANADIAN_SYLLABICS", "canadian-syllabics" },
        { HB_SCRIPT_CHEROKEE, "HB_SCRIPT_CHEROKEE", "cherokee" },
        { HB_SCRIPT_ETHIOPIC, "HB_SCRIPT_ETHIOPIC", "ethiopic" },
        { HB_SCRIPT_KHMER, "HB_SCRIPT_KHMER", "khmer" },
        { HB_SCRIPT_MONGOLIAN, "HB_SCRIPT_MONGOLIAN", "mongolian" },
        { HB_SCRIPT_MYANMAR, "HB_SCRIPT_MYANMAR", "myanmar" },
        { HB_SCRIPT_OGHAM, "HB_SCRIPT_OGHAM", "ogham" },
        { HB_SCRIPT_RUNIC, "HB_SCRIPT_RUNIC", "runic" },
        { HB_SCRIPT_SINHALA, "HB_SCRIPT_SINHALA", "sinhala" },
        { HB_SCRIPT_SYRIAC, "HB_SCRIPT_SYRIAC", "syriac" },
        { HB_SCRIPT_THAANA, "HB_SCRIPT_THAANA", "thaana" },
        { HB_SCRIPT_YI, "HB_SCRIPT_YI", "yi" },
        { HB_SCRIPT_DESERET, "HB_SCRIPT_DESERET", "deseret" },
        { HB_SCRIPT_GOTHIC, "HB_SCRIPT_GOTHIC", "gothic" },
        { HB_SCRIPT_OLD_ITALIC, "HB_SCRIPT_OLD_ITALIC", "old-italic" },
        { HB_SCRIPT_BUHID, "HB_SCRIPT_BUHID", "buhid" },
        { HB_SCRIPT_HANUNOO, "HB_SCRIPT_HANUNOO", "hanunoo" },
        { HB_SCRIPT_TAGALOG, "HB_SCRIPT_TAGALOG", "tagalog" },
        { HB_SCRIPT_TAGBANWA, "HB_SCRIPT_TAGBANWA", "tagbanwa" },
        { HB_SCRIPT_CYPRIOT, "HB_SCRIPT_CYPRIOT", "cypriot" },
        { HB_SCRIPT_LIMBU, "HB_SCRIPT_LIMBU", "limbu" },
        { HB_SCRIPT_LINEAR_B, "HB_SCRIPT_LINEAR_B", "linear-b" },
        { HB_SCRIPT_OSMANYA, "HB_SCRIPT_OSMANYA", "osmanya" },
        { HB_SCRIPT_SHAVIAN, "HB_SCRIPT_SHAVIAN", "shavian" },
        { HB_SCRIPT_TAI_LE, "HB_SCRIPT_TAI_LE", "tai-le" },
        { HB_SCRIPT_UGARITIC, "HB_SCRIPT_UGARITIC", "ugaritic" },
        { HB_SCRIPT_BUGINESE, "HB_SCRIPT_BUGINESE", "buginese" },
        { HB_SCRIPT_COPTIC, "HB_SCRIPT_COPTIC", "coptic" },
        { HB_SCRIPT_GLAGOLITIC, "HB_SCRIPT_GLAGOLITIC", "glagolitic" },
        { HB_SCRIPT_KHAROSHTHI, "HB_SCRIPT_KHAROSHTHI", "kharoshthi" },
        { HB_SCRIPT_NEW_TAI_LUE, "HB_SCRIPT_NEW_TAI_LUE", "new-tai-lue" },
        { HB_SCRIPT_OLD_PERSIAN, "HB_SCRIPT_OLD_PERSIAN", "old-persian" },
        { HB_SCRIPT_SYLOTI_NAGRI, "HB_SCRIPT_SYLOTI_NAGRI", "syloti-nagri" },
        { HB_SCRIPT_TIFINAGH, "HB_SCRIPT_TIFINAGH", "tifinagh" },
        { HB_SCRIPT_BALINESE, "HB_SCRIPT_BALINESE", "balinese" },
        { HB_SCRIPT_CUNEIFORM, "HB_SCRIPT_CUNEIFORM", "cuneiform" },
        { HB_SCRIPT_NKO, "HB_SCRIPT_NKO", "nko" },
        { HB_SCRIPT_PHAGS_PA, "HB_SCRIPT_PHAGS_PA", "phags-pa" },
        { HB_SCRIPT_PHOENICIAN, "HB_SCRIPT_PHOENICIAN", "phoenician" },
        { HB_SCRIPT_CARIAN, "HB_SCRIPT_CARIAN", "carian" },
        { HB_SCRIPT_CHAM, "HB_SCRIPT_CHAM", "cham" },
        { HB_SCRIPT_KAYAH_LI, "HB_SCRIPT_KAYAH_LI", "kayah-li" },
        { HB_SCRIPT_LEPCHA, "HB_SCRIPT_LEPCHA", "lepcha" },
        { HB_SCRIPT_LYCIAN, "HB_SCRIPT_LYCIAN", "lycian" },
        { HB_SCRIPT_LYDIAN, "HB_SCRIPT_LYDIAN", "lydian" },
        { HB_SCRIPT_OL_CHIKI, "HB_SCRIPT_OL_CHIKI", "ol-chiki" },
        { HB_SCRIPT_REJANG, "HB_SCRIPT_REJANG", "rejang" },
        { HB_SCRIPT_SAURASHTRA, "HB_SCRIPT_SAURASHTRA", "saurashtra" },
        { HB_SCRIPT_SUNDANESE, "HB_SCRIPT_SUNDANESE", "sundanese" },
        { HB_SCRIPT_VAI, "HB_SCRIPT_VAI", "vai" },
        { HB_SCRIPT_AVESTAN, "HB_SCRIPT_AVESTAN", "avestan" },
        { HB_SCRIPT_BAMUM, "HB_SCRIPT_BAMUM", "bamum" },
        { HB_SCRIPT_EGYPTIAN_HIEROGLYPHS, "HB_SCRIPT_EGYPTIAN_HIEROGLYPHS", "egyptian-hieroglyphs" },
        { HB_SCRIPT_IMPERIAL_ARAMAIC, "HB_SCRIPT_IMPERIAL_ARAMAIC", "imperial-aramaic" },
        { HB_SCRIPT_INSCRIPTIONAL_PAHLAVI, "HB_SCRIPT_INSCRIPTIONAL_PAHLAVI", "inscriptional-pahlavi" },
        { HB_SCRIPT_INSCRIPTIONAL_PARTHIAN, "HB_SCRIPT_INSCRIPTIONAL_PARTHIAN", "inscriptional-parthian" },
        { HB_SCRIPT_JAVANESE, "HB_SCRIPT_JAVANESE", "javanese" },
        { HB_SCRIPT_KAITHI, "HB_SCRIPT_KAITHI", "kaithi" },
        { HB_SCRIPT_LISU, "HB_SCRIPT_LISU", "lisu" },
        { HB_SCRIPT_MEETEI_MAYEK, "HB_SCRIPT_MEETEI_MAYEK", "meetei-mayek" },
        { HB_SCRIPT_OLD_SOUTH_ARABIAN, "HB_SCRIPT_OLD_SOUTH_ARABIAN", "old-south-arabian" },
        { HB_SCRIPT_OLD_TURKIC, "HB_SCRIPT_OLD_TURKIC", "old-turkic" },
        { HB_SCRIPT_SAMARITAN, "HB_SCRIPT_SAMARITAN", "samaritan" },
        { HB_SCRIPT_TAI_THAM, "HB_SCRIPT_TAI_THAM", "tai-tham" },
        { HB_SCRIPT_TAI_VIET, "HB_SCRIPT_TAI_VIET", "tai-viet" },
        { HB_SCRIPT_BATAK, "HB_SCRIPT_BATAK", "batak" },
        { HB_SCRIPT_BRAHMI, "HB_SCRIPT_BRAHMI", "brahmi" },
        { HB_SCRIPT_MANDAIC, "HB_SCRIPT_MANDAIC", "mandaic" },
        { HB_SCRIPT_CHAKMA, "HB_SCRIPT_CHAKMA", "chakma" },
        { HB_SCRIPT_MEROITIC_CURSIVE, "HB_SCRIPT_MEROITIC_CURSIVE", "meroitic-cursive" },
        { HB_SCRIPT_MEROITIC_HIEROGLYPHS, "HB_SCRIPT_MEROITIC_HIEROGLYPHS", "meroitic-hieroglyphs" },
        { HB_SCRIPT_MIAO, "HB_SCRIPT_MIAO", "miao" },
        { HB_SCRIPT_SHARADA, "HB_SCRIPT_SHARADA", "sharada" },
        { HB_SCRIPT_SORA_SOMPENG, "HB_SCRIPT_SORA_SOMPENG", "sora-sompeng" },
        { HB_SCRIPT_TAKRI, "HB_SCRIPT_TAKRI", "takri" },
        { HB_SCRIPT_BASSA_VAH, "HB_SCRIPT_BASSA_VAH", "bassa-vah" },
        { HB_SCRIPT_CAUCASIAN_ALBANIAN, "HB_SCRIPT_CAUCASIAN_ALBANIAN", "caucasian-albanian" },
        { HB_SCRIPT_DUPLOYAN, "HB_SCRIPT_DUPLOYAN", "duployan" },
        { HB_SCRIPT_ELBASAN, "HB_SCRIPT_ELBASAN", "elbasan" },
        { HB_SCRIPT_GRANTHA, "HB_SCRIPT_GRANTHA", "grantha" },
        { HB_SCRIPT_KHOJKI, "HB_SCRIPT_KHOJKI", "khojki" },
        { HB_SCRIPT_KHUDAWADI, "HB_SCRIPT_KHUDAWADI", "khudawadi" },
        { HB_SCRIPT_LINEAR_A, "HB_SCRIPT_LINEAR_A", "linear-a" },
        { HB_SCRIPT_MAHAJANI, "HB_SCRIPT_MAHAJANI", "mahajani" },
        { HB_SCRIPT_MANICHAEAN, "HB_SCRIPT_MANICHAEAN", "manichaean" },
        { HB_SCRIPT_MENDE_KIKAKUI, "HB_SCRIPT_MENDE_KIKAKUI", "mende-kikakui" },
        { HB_SCRIPT_MODI, "HB_SCRIPT_MODI", "modi" },
        { HB_SCRIPT_MRO, "HB_SCRIPT_MRO", "mro" },
        { HB_SCRIPT_NABATAEAN, "HB_SCRIPT_NABATAEAN", "nabataean" },
        { HB_SCRIPT_OLD_NORTH_ARABIAN, "HB_SCRIPT_OLD_NORTH_ARABIAN", "old-north-arabian" },
        { HB_SCRIPT_OLD_PERMIC, "HB_SCRIPT_OLD_PERMIC", "old-permic" },
        { HB_SCRIPT_PAHAWH_HMONG, "HB_SCRIPT_PAHAWH_HMONG", "pahawh-hmong" },
        { HB_SCRIPT_PALMYRENE, "HB_SCRIPT_PALMYRENE", "palmyrene" },
        { HB_SCRIPT_PAU_CIN_HAU, "HB_SCRIPT_PAU_CIN_HAU", "pau-cin-hau" },
        { HB_SCRIPT_PSALTER_PAHLAVI, "HB_SCRIPT_PSALTER_PAHLAVI", "psalter-pahlavi" },
        { HB_SCRIPT_SIDDHAM, "HB_SCRIPT_SIDDHAM", "siddham" },
        { HB_SCRIPT_TIRHUTA, "HB_SCRIPT_TIRHUTA", "tirhuta" },
        { HB_SCRIPT_WARANG_CITI, "HB_SCRIPT_WARANG_CITI", "warang-citi" },
        { HB_SCRIPT_AHOM, "HB_SCRIPT_AHOM", "ahom" },
        { HB_SCRIPT_ANATOLIAN_HIEROGLYPHS, "HB_SCRIPT_ANATOLIAN_HIEROGLYPHS", "anatolian-hieroglyphs" },
        { HB_SCRIPT_HATRAN, "HB_SCRIPT_HATRAN", "hatran" },
        { HB_SCRIPT_MULTANI, "HB_SCRIPT_MULTANI", "multani" },
        { HB_SCRIPT_OLD_HUNGARIAN, "HB_SCRIPT_OLD_HUNGARIAN", "old-hungarian" },
        { HB_SCRIPT_SIGNWRITING, "HB_SCRIPT_SIGNWRITING", "signwriting" },
        { HB_SCRIPT_INVALID, "HB_SCRIPT_INVALID", "invalid" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_script_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

/* enumerations from "hb-unicode.h" */
GType
hb_gobject_unicode_general_category_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_UNICODE_GENERAL_CATEGORY_CONTROL, "HB_UNICODE_GENERAL_CATEGORY_CONTROL", "control" },
        { HB_UNICODE_GENERAL_CATEGORY_FORMAT, "HB_UNICODE_GENERAL_CATEGORY_FORMAT", "format" },
        { HB_UNICODE_GENERAL_CATEGORY_UNASSIGNED, "HB_UNICODE_GENERAL_CATEGORY_UNASSIGNED", "unassigned" },
        { HB_UNICODE_GENERAL_CATEGORY_PRIVATE_USE, "HB_UNICODE_GENERAL_CATEGORY_PRIVATE_USE", "private-use" },
        { HB_UNICODE_GENERAL_CATEGORY_SURROGATE, "HB_UNICODE_GENERAL_CATEGORY_SURROGATE", "surrogate" },
        { HB_UNICODE_GENERAL_CATEGORY_LOWERCASE_LETTER, "HB_UNICODE_GENERAL_CATEGORY_LOWERCASE_LETTER", "lowercase-letter" },
        { HB_UNICODE_GENERAL_CATEGORY_MODIFIER_LETTER, "HB_UNICODE_GENERAL_CATEGORY_MODIFIER_LETTER", "modifier-letter" },
        { HB_UNICODE_GENERAL_CATEGORY_OTHER_LETTER, "HB_UNICODE_GENERAL_CATEGORY_OTHER_LETTER", "other-letter" },
        { HB_UNICODE_GENERAL_CATEGORY_TITLECASE_LETTER, "HB_UNICODE_GENERAL_CATEGORY_TITLECASE_LETTER", "titlecase-letter" },
        { HB_UNICODE_GENERAL_CATEGORY_UPPERCASE_LETTER, "HB_UNICODE_GENERAL_CATEGORY_UPPERCASE_LETTER", "uppercase-letter" },
        { HB_UNICODE_GENERAL_CATEGORY_SPACING_MARK, "HB_UNICODE_GENERAL_CATEGORY_SPACING_MARK", "spacing-mark" },
        { HB_UNICODE_GENERAL_CATEGORY_ENCLOSING_MARK, "HB_UNICODE_GENERAL_CATEGORY_ENCLOSING_MARK", "enclosing-mark" },
        { HB_UNICODE_GENERAL_CATEGORY_NON_SPACING_MARK, "HB_UNICODE_GENERAL_CATEGORY_NON_SPACING_MARK", "non-spacing-mark" },
        { HB_UNICODE_GENERAL_CATEGORY_DECIMAL_NUMBER, "HB_UNICODE_GENERAL_CATEGORY_DECIMAL_NUMBER", "decimal-number" },
        { HB_UNICODE_GENERAL_CATEGORY_LETTER_NUMBER, "HB_UNICODE_GENERAL_CATEGORY_LETTER_NUMBER", "letter-number" },
        { HB_UNICODE_GENERAL_CATEGORY_OTHER_NUMBER, "HB_UNICODE_GENERAL_CATEGORY_OTHER_NUMBER", "other-number" },
        { HB_UNICODE_GENERAL_CATEGORY_CONNECT_PUNCTUATION, "HB_UNICODE_GENERAL_CATEGORY_CONNECT_PUNCTUATION", "connect-punctuation" },
        { HB_UNICODE_GENERAL_CATEGORY_DASH_PUNCTUATION, "HB_UNICODE_GENERAL_CATEGORY_DASH_PUNCTUATION", "dash-punctuation" },
        { HB_UNICODE_GENERAL_CATEGORY_CLOSE_PUNCTUATION, "HB_UNICODE_GENERAL_CATEGORY_CLOSE_PUNCTUATION", "close-punctuation" },
        { HB_UNICODE_GENERAL_CATEGORY_FINAL_PUNCTUATION, "HB_UNICODE_GENERAL_CATEGORY_FINAL_PUNCTUATION", "final-punctuation" },
        { HB_UNICODE_GENERAL_CATEGORY_INITIAL_PUNCTUATION, "HB_UNICODE_GENERAL_CATEGORY_INITIAL_PUNCTUATION", "initial-punctuation" },
        { HB_UNICODE_GENERAL_CATEGORY_OTHER_PUNCTUATION, "HB_UNICODE_GENERAL_CATEGORY_OTHER_PUNCTUATION", "other-punctuation" },
        { HB_UNICODE_GENERAL_CATEGORY_OPEN_PUNCTUATION, "HB_UNICODE_GENERAL_CATEGORY_OPEN_PUNCTUATION", "open-punctuation" },
        { HB_UNICODE_GENERAL_CATEGORY_CURRENCY_SYMBOL, "HB_UNICODE_GENERAL_CATEGORY_CURRENCY_SYMBOL", "currency-symbol" },
        { HB_UNICODE_GENERAL_CATEGORY_MODIFIER_SYMBOL, "HB_UNICODE_GENERAL_CATEGORY_MODIFIER_SYMBOL", "modifier-symbol" },
        { HB_UNICODE_GENERAL_CATEGORY_MATH_SYMBOL, "HB_UNICODE_GENERAL_CATEGORY_MATH_SYMBOL", "math-symbol" },
        { HB_UNICODE_GENERAL_CATEGORY_OTHER_SYMBOL, "HB_UNICODE_GENERAL_CATEGORY_OTHER_SYMBOL", "other-symbol" },
        { HB_UNICODE_GENERAL_CATEGORY_LINE_SEPARATOR, "HB_UNICODE_GENERAL_CATEGORY_LINE_SEPARATOR", "line-separator" },
        { HB_UNICODE_GENERAL_CATEGORY_PARAGRAPH_SEPARATOR, "HB_UNICODE_GENERAL_CATEGORY_PARAGRAPH_SEPARATOR", "paragraph-separator" },
        { HB_UNICODE_GENERAL_CATEGORY_SPACE_SEPARATOR, "HB_UNICODE_GENERAL_CATEGORY_SPACE_SEPARATOR", "space-separator" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_unicode_general_category_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

GType
hb_gobject_unicode_combining_class_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_UNICODE_COMBINING_CLASS_NOT_REORDERED, "HB_UNICODE_COMBINING_CLASS_NOT_REORDERED", "not-reordered" },
        { HB_UNICODE_COMBINING_CLASS_OVERLAY, "HB_UNICODE_COMBINING_CLASS_OVERLAY", "overlay" },
        { HB_UNICODE_COMBINING_CLASS_NUKTA, "HB_UNICODE_COMBINING_CLASS_NUKTA", "nukta" },
        { HB_UNICODE_COMBINING_CLASS_KANA_VOICING, "HB_UNICODE_COMBINING_CLASS_KANA_VOICING", "kana-voicing" },
        { HB_UNICODE_COMBINING_CLASS_VIRAMA, "HB_UNICODE_COMBINING_CLASS_VIRAMA", "virama" },
        { HB_UNICODE_COMBINING_CLASS_CCC10, "HB_UNICODE_COMBINING_CLASS_CCC10", "ccc10" },
        { HB_UNICODE_COMBINING_CLASS_CCC11, "HB_UNICODE_COMBINING_CLASS_CCC11", "ccc11" },
        { HB_UNICODE_COMBINING_CLASS_CCC12, "HB_UNICODE_COMBINING_CLASS_CCC12", "ccc12" },
        { HB_UNICODE_COMBINING_CLASS_CCC13, "HB_UNICODE_COMBINING_CLASS_CCC13", "ccc13" },
        { HB_UNICODE_COMBINING_CLASS_CCC14, "HB_UNICODE_COMBINING_CLASS_CCC14", "ccc14" },
        { HB_UNICODE_COMBINING_CLASS_CCC15, "HB_UNICODE_COMBINING_CLASS_CCC15", "ccc15" },
        { HB_UNICODE_COMBINING_CLASS_CCC16, "HB_UNICODE_COMBINING_CLASS_CCC16", "ccc16" },
        { HB_UNICODE_COMBINING_CLASS_CCC17, "HB_UNICODE_COMBINING_CLASS_CCC17", "ccc17" },
        { HB_UNICODE_COMBINING_CLASS_CCC18, "HB_UNICODE_COMBINING_CLASS_CCC18", "ccc18" },
        { HB_UNICODE_COMBINING_CLASS_CCC19, "HB_UNICODE_COMBINING_CLASS_CCC19", "ccc19" },
        { HB_UNICODE_COMBINING_CLASS_CCC20, "HB_UNICODE_COMBINING_CLASS_CCC20", "ccc20" },
        { HB_UNICODE_COMBINING_CLASS_CCC21, "HB_UNICODE_COMBINING_CLASS_CCC21", "ccc21" },
        { HB_UNICODE_COMBINING_CLASS_CCC22, "HB_UNICODE_COMBINING_CLASS_CCC22", "ccc22" },
        { HB_UNICODE_COMBINING_CLASS_CCC23, "HB_UNICODE_COMBINING_CLASS_CCC23", "ccc23" },
        { HB_UNICODE_COMBINING_CLASS_CCC24, "HB_UNICODE_COMBINING_CLASS_CCC24", "ccc24" },
        { HB_UNICODE_COMBINING_CLASS_CCC25, "HB_UNICODE_COMBINING_CLASS_CCC25", "ccc25" },
        { HB_UNICODE_COMBINING_CLASS_CCC26, "HB_UNICODE_COMBINING_CLASS_CCC26", "ccc26" },
        { HB_UNICODE_COMBINING_CLASS_CCC27, "HB_UNICODE_COMBINING_CLASS_CCC27", "ccc27" },
        { HB_UNICODE_COMBINING_CLASS_CCC28, "HB_UNICODE_COMBINING_CLASS_CCC28", "ccc28" },
        { HB_UNICODE_COMBINING_CLASS_CCC29, "HB_UNICODE_COMBINING_CLASS_CCC29", "ccc29" },
        { HB_UNICODE_COMBINING_CLASS_CCC30, "HB_UNICODE_COMBINING_CLASS_CCC30", "ccc30" },
        { HB_UNICODE_COMBINING_CLASS_CCC31, "HB_UNICODE_COMBINING_CLASS_CCC31", "ccc31" },
        { HB_UNICODE_COMBINING_CLASS_CCC32, "HB_UNICODE_COMBINING_CLASS_CCC32", "ccc32" },
        { HB_UNICODE_COMBINING_CLASS_CCC33, "HB_UNICODE_COMBINING_CLASS_CCC33", "ccc33" },
        { HB_UNICODE_COMBINING_CLASS_CCC34, "HB_UNICODE_COMBINING_CLASS_CCC34", "ccc34" },
        { HB_UNICODE_COMBINING_CLASS_CCC35, "HB_UNICODE_COMBINING_CLASS_CCC35", "ccc35" },
        { HB_UNICODE_COMBINING_CLASS_CCC36, "HB_UNICODE_COMBINING_CLASS_CCC36", "ccc36" },
        { HB_UNICODE_COMBINING_CLASS_CCC84, "HB_UNICODE_COMBINING_CLASS_CCC84", "ccc84" },
        { HB_UNICODE_COMBINING_CLASS_CCC91, "HB_UNICODE_COMBINING_CLASS_CCC91", "ccc91" },
        { HB_UNICODE_COMBINING_CLASS_CCC103, "HB_UNICODE_COMBINING_CLASS_CCC103", "ccc103" },
        { HB_UNICODE_COMBINING_CLASS_CCC107, "HB_UNICODE_COMBINING_CLASS_CCC107", "ccc107" },
        { HB_UNICODE_COMBINING_CLASS_CCC118, "HB_UNICODE_COMBINING_CLASS_CCC118", "ccc118" },
        { HB_UNICODE_COMBINING_CLASS_CCC122, "HB_UNICODE_COMBINING_CLASS_CCC122", "ccc122" },
        { HB_UNICODE_COMBINING_CLASS_CCC129, "HB_UNICODE_COMBINING_CLASS_CCC129", "ccc129" },
        { HB_UNICODE_COMBINING_CLASS_CCC130, "HB_UNICODE_COMBINING_CLASS_CCC130", "ccc130" },
        { HB_UNICODE_COMBINING_CLASS_CCC133, "HB_UNICODE_COMBINING_CLASS_CCC133", "ccc133" },
        { HB_UNICODE_COMBINING_CLASS_ATTACHED_BELOW_LEFT, "HB_UNICODE_COMBINING_CLASS_ATTACHED_BELOW_LEFT", "attached-below-left" },
        { HB_UNICODE_COMBINING_CLASS_ATTACHED_BELOW, "HB_UNICODE_COMBINING_CLASS_ATTACHED_BELOW", "attached-below" },
        { HB_UNICODE_COMBINING_CLASS_ATTACHED_ABOVE, "HB_UNICODE_COMBINING_CLASS_ATTACHED_ABOVE", "attached-above" },
        { HB_UNICODE_COMBINING_CLASS_ATTACHED_ABOVE_RIGHT, "HB_UNICODE_COMBINING_CLASS_ATTACHED_ABOVE_RIGHT", "attached-above-right" },
        { HB_UNICODE_COMBINING_CLASS_BELOW_LEFT, "HB_UNICODE_COMBINING_CLASS_BELOW_LEFT", "below-left" },
        { HB_UNICODE_COMBINING_CLASS_BELOW, "HB_UNICODE_COMBINING_CLASS_BELOW", "below" },
        { HB_UNICODE_COMBINING_CLASS_BELOW_RIGHT, "HB_UNICODE_COMBINING_CLASS_BELOW_RIGHT", "below-right" },
        { HB_UNICODE_COMBINING_CLASS_LEFT, "HB_UNICODE_COMBINING_CLASS_LEFT", "left" },
        { HB_UNICODE_COMBINING_CLASS_RIGHT, "HB_UNICODE_COMBINING_CLASS_RIGHT", "right" },
        { HB_UNICODE_COMBINING_CLASS_ABOVE_LEFT, "HB_UNICODE_COMBINING_CLASS_ABOVE_LEFT", "above-left" },
        { HB_UNICODE_COMBINING_CLASS_ABOVE, "HB_UNICODE_COMBINING_CLASS_ABOVE", "above" },
        { HB_UNICODE_COMBINING_CLASS_ABOVE_RIGHT, "HB_UNICODE_COMBINING_CLASS_ABOVE_RIGHT", "above-right" },
        { HB_UNICODE_COMBINING_CLASS_DOUBLE_BELOW, "HB_UNICODE_COMBINING_CLASS_DOUBLE_BELOW", "double-below" },
        { HB_UNICODE_COMBINING_CLASS_DOUBLE_ABOVE, "HB_UNICODE_COMBINING_CLASS_DOUBLE_ABOVE", "double-above" },
        { HB_UNICODE_COMBINING_CLASS_IOTA_SUBSCRIPT, "HB_UNICODE_COMBINING_CLASS_IOTA_SUBSCRIPT", "iota-subscript" },
        { HB_UNICODE_COMBINING_CLASS_INVALID, "HB_UNICODE_COMBINING_CLASS_INVALID", "invalid" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_unicode_combining_class_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}

/* enumerations from "hb-ot-layout.h" */
GType
hb_gobject_ot_layout_glyph_class_get_type (void)
{
  static gsize type_id = 0;

  if (g_once_init_enter (&type_id))
    {
      static const GEnumValue values[] = {
        { HB_OT_LAYOUT_GLYPH_CLASS_UNCLASSIFIED, "HB_OT_LAYOUT_GLYPH_CLASS_UNCLASSIFIED", "unclassified" },
        { HB_OT_LAYOUT_GLYPH_CLASS_BASE_GLYPH, "HB_OT_LAYOUT_GLYPH_CLASS_BASE_GLYPH", "base-glyph" },
        { HB_OT_LAYOUT_GLYPH_CLASS_LIGATURE, "HB_OT_LAYOUT_GLYPH_CLASS_LIGATURE", "ligature" },
        { HB_OT_LAYOUT_GLYPH_CLASS_MARK, "HB_OT_LAYOUT_GLYPH_CLASS_MARK", "mark" },
        { HB_OT_LAYOUT_GLYPH_CLASS_COMPONENT, "HB_OT_LAYOUT_GLYPH_CLASS_COMPONENT", "component" },
        { 0, NULL, NULL }
      };
      GType id =
        g_enum_register_static (g_intern_static_string ("hb_ot_layout_glyph_class_t"), values);
      g_once_init_leave (&type_id, id);
    }

  return type_id;
}


/* Generated data ends here */

