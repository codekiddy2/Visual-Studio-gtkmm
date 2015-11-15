/* Copyright (C) 2005 The cairomm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef __CAIROMM_ENUMS_H
#define __CAIROMM_ENUMS_H

#include <cairo.h>
#ifdef CAIRO_HAS_FT_FONT
#include <cairo-ft.h>
#endif

namespace Cairo
{

#ifndef DOXYGEN_IGNORE_THIS
//This is only used internally, but it must be in a public header because we inline some methods.
//Actually, it is used now by the UserFontFace set_*_func() slots, which are public. murrayc.
typedef cairo_status_t ErrorStatus;
#endif //DOXYGEN_IGNORE_THIS

/**
 * Cairo::Operator is used to set the compositing operator for all cairo
 * drawing operations.
 *
 * The default operator is Cairo::OPERATOR_OVER.
 *
 * The operators marked as @a unbounded modify their destination even outside
 * of the mask layer (that is, their effect is not bound by the mask layer).
 * However, their effect can still be limited by way of clipping.
 *
 * To keep things simple, the operator descriptions here document the behavior
 * for when both source and destination are either fully transparent or fully
 * opaque. The actual implementation works for translucent layers too. For a
 * more detailed explanation of the effects of each operator, including the
 * mathematical definitions, see
 * <a href="http://cairographics.org/operators/">this</a>
 *
 **/
typedef enum
{
    /**
     * Clear destination layer (bounded)
     */
    OPERATOR_CLEAR = CAIRO_OPERATOR_CLEAR,

    /**
     * Replace destination layer (bounded)
     */
    OPERATOR_SOURCE = CAIRO_OPERATOR_SOURCE,

    /**
     * Draw source layer on top of destination layer (bounded)
     */
    OPERATOR_OVER = CAIRO_OPERATOR_OVER,

    /**
     * Draw source where there was destination content (unbounded)
     */
    OPERATOR_IN = CAIRO_OPERATOR_IN,

    /**
     * Draw source where there was no destination content (unbounded)
     */
    OPERATOR_OUT = CAIRO_OPERATOR_OUT,

    /**
     * Draw source on top of destination content and only there
     */
    OPERATOR_ATOP = CAIRO_OPERATOR_ATOP,

    /**
     * Ignore the source
     */
    OPERATOR_DEST = CAIRO_OPERATOR_DEST,

    /**
     * Draw destination on top of source
     */
    OPERATOR_DEST_OVER = CAIRO_OPERATOR_DEST_OVER,

    /**
     * Leave destination only where there was source content (unbounded)
     */
    OPERATOR_DEST_IN = CAIRO_OPERATOR_DEST_IN,

    /**
     * Leave destination only where there was no source content
     */
    OPERATOR_DEST_OUT = CAIRO_OPERATOR_DEST_OUT,

    /**
     * Leave destination on top of source content and only there (unbounded)
     */
    OPERATOR_DEST_ATOP = CAIRO_OPERATOR_DEST_ATOP,

    /**
     * Source and destination are shown where there is only one of them
     */
    OPERATOR_XOR = CAIRO_OPERATOR_XOR,

    /**
     * Source and destination layers are accumulated
     */
    OPERATOR_ADD = CAIRO_OPERATOR_ADD,

    /**
     * Like over, but assuming source and dest are disjoint geometries
     */
    OPERATOR_SATURATE = CAIRO_OPERATOR_SATURATE
} Operator;


/**
 * Specifies the type of antialiasing to do when rendering text or shapes.
 *
 * The interpretation of Cairo::ANTIALIAS_DEFAULT is left entirely up to
 * the backend.
 */
typedef enum
{
    /**
     * Use the default antialiasing for the subsystem and target device
     */
    ANTIALIAS_DEFAULT = CAIRO_ANTIALIAS_DEFAULT,

    /**
     * Use bilevel alpha mask
     */
    ANTIALIAS_NONE = CAIRO_ANTIALIAS_NONE,

    /**
     * Perform single-color antialiasing (using shades of gray for black text on
     * white background, for example).
     */
    ANTIALIAS_GRAY = CAIRO_ANTIALIAS_GRAY,

    /**
     * Perform antialiasing by taing advantage of the order of subpixel elements
     * on devices such as LCD panels
     */
    ANTIALIAS_SUBPIXEL = CAIRO_ANTIALIAS_SUBPIXEL
} Antialias;

/**
 * Cairo::FillRule is used to select how paths are filled. For both fill rules,
 * whether or not a point is included in the fill is determined by taking a ray
 * from that point to infinity and looking at intersections with the path. The
 * ray can be in any direction, as long as it doesn't pass through the end
 * point of a segment or have a tricky intersection such as intersecting
 * tangent to the path. (Note that filling is not actually implemented in this
 * way. This is just a description of the rule that is applied.)
 *
 * The default fill rule is Cairo::FILL_RULE_WINDING.
 *
 * New entries may be added in future versions.
 **/
typedef enum
{
    /**
     * If the path crosses the ray from left-to-right, counts +1. If the path
     * crosses the ray from right to left, counts -1. (Left and right are
     * determined from the perspective of looking along the ray from the
     * starting point.) If the total count is non-zero, the point will be
     * filled.
     */
    FILL_RULE_WINDING = CAIRO_FILL_RULE_WINDING,

    /**
     * Counts the total number of intersections, without regard to the
     * orientation of the contour. If the total number of intersections is odd,
     * the point will be filled.
     */
    FILL_RULE_EVEN_ODD = CAIRO_FILL_RULE_EVEN_ODD
} FillRule;

/**
 * Specifies how to render the endpoints of the path when stroking.
 *
 * The default line cap style is Cairo::LINE_CAP_BUTT.
 **/
typedef enum
{
    /**
     * Start(stop) the line exactly at the start(end) point
     */
    LINE_CAP_BUTT = CAIRO_LINE_CAP_BUTT,

    /**
     * Use a round ending, the center of teh circle is teh end point
     */
    LINE_CAP_ROUND = CAIRO_LINE_CAP_ROUND,

    /**
     * Use squared ending, the center of teh square is the end point
     */
    LINE_CAP_SQUARE = CAIRO_LINE_CAP_SQUARE
} LineCap;

/**
 * Specifies how to render the junction of two lines when stroking.
 *
 * The default line join style is Cairo::LINE_JOIN_MITER.
 */
typedef enum
{
    /**
     * Use a sharp (angled) corner, see Context::set_miter_limit()
     */
    LINE_JOIN_MITER = CAIRO_LINE_JOIN_MITER,

    /**
     * Use a rounded join, the center of teh circle is the joint point
     */
    LINE_JOIN_ROUND = CAIRO_LINE_JOIN_ROUND,

    /**
     * Use cut-off join, the join is cut off at half the line width from the
     * join point
     */
    LINE_JOIN_BEVEL = CAIRO_LINE_JOIN_BEVEL
} LineJoin;

/**
 * Specifies variants of a font face based on their slant.
 */
typedef enum
{
    /**
     * Upright font style
     */
    FONT_SLANT_NORMAL = CAIRO_FONT_SLANT_NORMAL,

    /**
     * Italic font style
     */
    FONT_SLANT_ITALIC = CAIRO_FONT_SLANT_ITALIC,

    /**
     * Oblique font style
     */
    FONT_SLANT_OBLIQUE = CAIRO_FONT_SLANT_OBLIQUE
} FontSlant;

/**
 * Specifies variants of a font face based on their weight.
 */
typedef enum
{
    /**
     * Normal font weight
     */
    FONT_WEIGHT_NORMAL = CAIRO_FONT_WEIGHT_NORMAL,

    /**
     * Bold font weight
     */
    FONT_WEIGHT_BOLD = CAIRO_FONT_WEIGHT_BOLD
} FontWeight;

/**
 * Cairo::Content is used to describe the content that a surface will contain,
 * whether color information, alpha information (translucence vs. opacity), or
 * both.
 */
typedef enum
{
    /**
     * The surface will hold color content only.
     */
    CONTENT_COLOR = CAIRO_CONTENT_COLOR,

    /**
     * The surface will hold alpha content only.
     */
    CONTENT_ALPHA = CAIRO_CONTENT_ALPHA,

    /**
     * The surface will hold color and alpha content.
     */
    CONTENT_COLOR_ALPHA = CAIRO_CONTENT_COLOR_ALPHA
} Content;

/**
 * @since 1.10
 */

typedef enum
{
    /**
     *
     */
    DEVICE_TYPE_DRM = CAIRO_DEVICE_TYPE_DRM,

    /**
     *
     */
    DEVICE_TYPE_GL = CAIRO_DEVICE_TYPE_GL,

    /**
     *
     */
    DEVICE_TYPE_SCRIPT = CAIRO_DEVICE_TYPE_SCRIPT,

    /**
     *
     */
    DEVICE_TYPE_XCB = CAIRO_DEVICE_TYPE_XCB,

    /**
     *
     */
    DEVICE_TYPE_XLIB = CAIRO_DEVICE_TYPE_XLIB,

    /**
     *
     */
    DEVICE_TYPE_XML = CAIRO_DEVICE_TYPE_XML
} DeviceType;

/**
 * Cairo::Format is used to identify the memory format of
 * image data.
 *
 * New entries may be added in future versions.
 **/
typedef enum
{
    /**
     * Each pixel is a 32-bit quantity, with alpha in the upper 8 bits, then
     * red, then green, then blue. The 32-bit quantities are stored
     * native-endian. Pre-multiplied alpha is used. (That is, 50% transparent
     * red is 0x80800000,
     */
    FORMAT_ARGB32 = CAIRO_FORMAT_ARGB32,

    /**
     * Each pixel is a 32-bit quantity, with the upper 8 bits unused. Red,
     * Green, and Blue are stored in the remaining 24 bits in that order.
     */
    FORMAT_RGB24 = CAIRO_FORMAT_RGB24,

    /**
     * Each pixel is a 8-bit quantity holding an alpha value
     */
    FORMAT_A8 = CAIRO_FORMAT_A8,

    /**
     * Each pikel is a 1-bit quentity holding an alpha value. Pixels are packed
     * together into 32-bit quantities. The ordering of the bits matches the
     * endianess of the platform. On a big-endian machine, the first pixel is in
     * the uppermost bit, on a little endian machine the first pixel is in the
     * least-significant bit.
     */
    FORMAT_A1 = CAIRO_FORMAT_A1,

    /**
     * Each fixel is a 16-bit quantity with red in the upper 5 bits, then green
     * in the middle 6 bits, and blue in the lower 5 bits
     */
    FORMAT_RGB16_565 = CAIRO_FORMAT_RGB16_565
} Format;


/**
 * Cairo::Extend is used to describe how pattern color/alpha will be determined
 * for areas "outside" the pattern's natural area, (for example, outside the
 * surface bounds or outside the gradient geometry).
 *
 * Mesh patterns are not affected by the extend mode.
 *
 * The default extend mode is Cairo::EXTEND_NONE for surface patterns and
 * Cairo::EXTEND_PAD for gradient patterns.
 *
 * New entries may be added in future versions.
 **/
typedef enum
{
    /**
     * Pixels outside of the source pattern are fully transparent
     */
    EXTEND_NONE = CAIRO_EXTEND_NONE,

    /**
     * The pattern is tiled by repeating
     */
    EXTEND_REPEAT = CAIRO_EXTEND_REPEAT,

    /**
     * The pattern is tiled by reflecting at the edges (Implemented for surface
     * patterns since 1.6)
     */
    EXTEND_REFLECT = CAIRO_EXTEND_REFLECT,

    /**
     * Pixels outside of the pattern copy the closest pixel from the source
     * (Since 1.2; but only implemented for surface patterns since 1.6)
     */
    EXTEND_PAD = CAIRO_EXTEND_PAD
} Extend;

/**
 * Cairo::Filter is used to indicate what filtering should be applied when
 * reading pixel values from patterns. See Cairo::SurfacePattern::set_filter()
 * for indicating the desired filter to be used with a particular pattern.
 */
typedef enum
{
    /**
     * A high-performance filter, with quality similar to Cairo::FILTER_NEAREST
     */
    FILTER_FAST = CAIRO_FILTER_FAST,

    /**
     * A reasonable-performance filter, with quality similar to
     * Cairo::FILTER_BILINEAR
     */
    FILTER_GOOD = CAIRO_FILTER_GOOD,

    /**
     * The highest-quality available, performance may not be suitable for
     * interactive use.
     */
    FILTER_BEST = CAIRO_FILTER_BEST,

    /**
     * Nearest-neighbor filtering
     */
    FILTER_NEAREST = CAIRO_FILTER_NEAREST,

    /**
     * Linear interpolation in two dimensions
     */
    FILTER_BILINEAR = CAIRO_FILTER_BILINEAR,

    /**
     * This filter value is currently unimplemented, and should not be used in
     * current code.
     */
    FILTER_GAUSSIAN = CAIRO_FILTER_GAUSSIAN
} Filter;

/**
 * The subpixel order specifies the order of color elements within each pixel on
 * the display device when rendering with an antialiasing mode of
 * Cairo::ANTIALIAS_SUBPIXEL.
 **/
typedef enum
{
    /**
     * Use the default subpixel order for for the target device
     */
    SUBPIXEL_ORDER_DEFAULT = CAIRO_SUBPIXEL_ORDER_DEFAULT,

    /**
     * Subpixel elements are arranged horizontally with red at the left
     */
    SUBPIXEL_ORDER_RGB = CAIRO_SUBPIXEL_ORDER_RGB,

    /**
     * Subpixel elements are arranged horizontally with blue at the left
     */
    SUBPIXEL_ORDER_BGR = CAIRO_SUBPIXEL_ORDER_BGR,

    /**
     * Subpixel elements are arranged vertically with red at the top
     */
    SUBPIXEL_ORDER_VRGB = CAIRO_SUBPIXEL_ORDER_VRGB,

    /**
     * Subpixel elements are arranged vertically with blue at the top
     */
    SUBPIXEL_ORDER_VBGR = CAIRO_SUBPIXEL_ORDER_VBGR
} SubpixelOrder;


/**
 * Specifies the type of hinting to do on font outlines. Hinting is the process
 * of fitting outlines to the pixel grid in order to improve the appearance of
 * the result. Since hinting outlines involves distorting them, it also reduces
 * the faithfulness to the original outline shapes. Not all of the outline
 * hinting styles are supported by all font backends.
 *
 * New entries may be added in future versions.
 **/
typedef enum
{
    /**
     * Use the default hint style for font backend and target device
     */
    HINT_STYLE_DEFAULT = CAIRO_HINT_STYLE_DEFAULT,

    /**
     * Do not hint outlines
     */
    HINT_STYLE_NONE = CAIRO_HINT_STYLE_NONE,

    /**
     * Hint outlines slightly to improve contrast while retaining food fidelity
     * to the original shapes
     */
    HINT_STYLE_SLIGHT = CAIRO_HINT_STYLE_SLIGHT,

    /**
     * Hint outlines with medium strength giving a compromise between fidelity
     * to the original shapes and contrast
     */
    HINT_STYLE_MEDIUM = CAIRO_HINT_STYLE_MEDIUM,

    /**
     * Hint outlines to maximize contrast
     */
    HINT_STYLE_FULL = CAIRO_HINT_STYLE_FULL
} HintStyle;


/**
 * Specifies whether to hint font metrics; hinting font metrics means quantizing
 * them so that they are integer values in device space. Doing this improves the
 * consistency of letter and line spacing, however it also means that text will
 * be laid out differently at different zoom factors.
 **/
typedef enum
{
    /**
     * Hint metrics in the default manner for the font backend and target device
     */
    HINT_METRICS_DEFAULT = CAIRO_HINT_METRICS_DEFAULT,

    /**
     * Do not hint font metrics
     */
    HINT_METRICS_OFF = CAIRO_HINT_METRICS_OFF,

    /**
     * Hint font metrics
     */
    HINT_METRICS_ON = CAIRO_HINT_METRICS_ON
} HintMetrics;

/**
 * Cairo::SurfaceType is used to describe the type of a given surface. The
 * surface types are also known as "backends" or "surface backends" within
 * cairo.
 *
 * The surface type can be queried with Surface::get_type()
 *
 * The various Cairo::Surface functions can be used with surfaces of
 * any type, but some backends also provide type-specific functions
 * that must only be called with a surface of the appropriate
 * type.
 *
 * New entries may be added in future versions.
 *
 * @since 1.2
 **/
typedef enum
{
    /**
     * The surface is of type image
     */
    SURFACE_TYPE_IMAGE = CAIRO_SURFACE_TYPE_IMAGE,

    /**
     * The surface is of type pdf
     */
    SURFACE_TYPE_PDF = CAIRO_SURFACE_TYPE_PDF,

    /**
     * The surface is of type ps
     */
    SURFACE_TYPE_PS = CAIRO_SURFACE_TYPE_PS,

    /**
     * The surface is of type xlim
     */
    SURFACE_TYPE_XLIB = CAIRO_SURFACE_TYPE_XLIB,

    /**
     * The surface is of type xcb
     */
    SURFACE_TYPE_XCB = CAIRO_SURFACE_TYPE_XCB,

    /**
     * The surface is of type glitz
     */
    SURFACE_TYPE_GLITZ = CAIRO_SURFACE_TYPE_GLITZ,

    /**
     * The surface is of type quartz
     */
    SURFACE_TYPE_QUARTZ = CAIRO_SURFACE_TYPE_QUARTZ,

    /**
     * The surface is of type win32
     */
    SURFACE_TYPE_WIN32 = CAIRO_SURFACE_TYPE_WIN32,

    /**
     * The surface is of type beos
     */
    SURFACE_TYPE_BEOS = CAIRO_SURFACE_TYPE_BEOS,

    /**
     * The surface is of type directfb
     */
    SURFACE_TYPE_DIRECTFB = CAIRO_SURFACE_TYPE_DIRECTFB,

    /**
     * The surface is of type svg
     */
    SURFACE_TYPE_SVG = CAIRO_SURFACE_TYPE_SVG,

    /**
     * The surface is of type os2
     */
    SURFACE_TYPE_OS2 = CAIRO_SURFACE_TYPE_OS2,

    /**
     * The surface is a win32 printing surface
     */
    SURFACE_TYPE_WIN32_PRINTING = CAIRO_SURFACE_TYPE_WIN32_PRINTING,

    /**
     * The surface is of type quartz_image
     */
    SURFACE_TYPE_QUARTZ_IMAGE = CAIRO_SURFACE_TYPE_QUARTZ_IMAGE,

    /**
     * The surface is of type script
     * @since 1.10
     */
    SURFACE_TYPE_SCRIPT = CAIRO_SURFACE_TYPE_SCRIPT,

    /**
     * The surface is of type Qt
     * @since 1.10
     */
    SURFACE_TYPE_QT = CAIRO_SURFACE_TYPE_QT,

    /**
     * The surface is of type recording
     * @since 1.10
     */
    SURFACE_TYPE_RECORDING = CAIRO_SURFACE_TYPE_RECORDING,

    /**
     * The surface is a OpenVg surface
     * @since 1.10
     */
    SURFACE_TYPE_VG = CAIRO_SURFACE_TYPE_VG,

    /**
     * The surface is of type OpenGl
     * @since 1.10
     */
    SURFACE_TYPE_GL = CAIRO_SURFACE_TYPE_GL,

    /**
     * The surface is of type Direct Render Manager
     * @since 1.10
     */
    SURFACE_TYPE_DRM = CAIRO_SURFACE_TYPE_DRM,

    /**
     * The surface is of type script 'tee' (a multiplexing surface)
     * @since 1.10
     */
    SURFACE_TYPE_TEE = CAIRO_SURFACE_TYPE_TEE,

    /**
     * The surface is of type XML (for debugging)
     * @since 1.10
     */
    SURFACE_TYPE_XML = CAIRO_SURFACE_TYPE_XML,

    /**
     * The surface is of type Skia
     * @since 1.10
     */
    SURFACE_TYPE_SKIA = CAIRO_SURFACE_TYPE_SKIA,

    /**
     * The surface is of type The surface is a subsurface created with
     * Surface::create()
     * @since 1.10
     */
    SURFACE_TYPE_SUBSURFACE = CAIRO_SURFACE_TYPE_SUBSURFACE

} SurfaceType;


/**
 * Cairo::PatternType is used to describe the type of a given pattern.
 *
 * The pattern type can be queried with Pattern::get_type().
 *
 * New entries may be added in future versions.
 *
 * @since 1.2
 **/
typedef enum
{
    /**
     * The pattern is a solid (uniform) color. It may be opaque or translucent.
     */
    PATTERN_TYPE_SOLID = CAIRO_PATTERN_TYPE_SOLID,

    /**
     * The pattern is a based on a surface (an image)
     */
    PATTERN_TYPE_SURFACE = CAIRO_PATTERN_TYPE_SURFACE,

    /**
     * The pattern is a linear gradient.
     */
    PATTERN_TYPE_LINEAR = CAIRO_PATTERN_TYPE_LINEAR,

    /**
     * The pattern is a radial gradient.
     */
    PATTERN_TYPE_RADIAL = CAIRO_PATTERN_TYPE_RADIAL
} PatternType;


/**
 * Cairo::FontType is used to describe the type of a given font face or scaled
 * font. The font types are also known as "font backends" within cairo.
 *
 * New entries may be added in future versions.
 *
 * @since 1.2
 **/
typedef enum
{
    /**
     * The font was created using cairo's toy font api
     */
    FONT_TYPE_TOY = CAIRO_FONT_TYPE_TOY,

    /**
     * The font is of type FreeType
     */
    FONT_TYPE_FT = CAIRO_FONT_TYPE_FT,

    /**
     * The font is of type Win32
     */
    FONT_TYPE_WIN32 = CAIRO_FONT_TYPE_WIN32,

    /**
     * @deprecated Use FONT_TYPE_QUARTZ instead.
     */
    FONT_TYPE_ATSUI = CAIRO_FONT_TYPE_QUARTZ,

    /**
     * The font is of type Quartz
     * @since 1.6
     */
    FONT_TYPE_QUARTZ = CAIRO_FONT_TYPE_QUARTZ,

    /**
     * The font was created using cairo's user font api
     * @since 1.8
     */
    FONT_TYPE_USER = CAIRO_FONT_TYPE_USER
} FontType;

/** Specifies properties of a text cluster mapping.
 *
 * @since 1.8
 **/
typedef enum
{
    /**
     * The clusters in the cluster array map to glyphs in the glyph array from
     * end to start.
     */
    TEXT_CLUSTER_FLAG_BACKWARD = CAIRO_TEXT_CLUSTER_FLAG_BACKWARD
} TextClusterFlags;

//TODO: Documentation
typedef enum
{
    /**
     * Completely inside region
     */
    REGION_OVERLAP_IN = CAIRO_REGION_OVERLAP_IN,

    /**
     * Completely outside region
     */
    REGION_OVERLAP_OUT = CAIRO_REGION_OVERLAP_OUT,

    /**
     * Partly inside region
     */
    REGION_OVERLAP_PART = CAIRO_REGION_OVERLAP_PART
} RegionOverlap;

/**
 * A set of synthesis options to control how FreeType renders the glyphs for a
 * particular font face.
 *
 * FreeType provides the ability to synthesize different glyphs from a base
 * font, which is useful if you lack those glyphs from a true bold or oblique
 * font.
 *
 * Individual synthesis features of a @c FtFontFace can be set using
 * @c FtFontFace::set_synthesize(), or disabled using
 * @c FtFontFace::unset_synthesize(). The currently enabled set of synthesis
 * options can be queried with @c FtFontFace::get_synthesize().
 *
 * Note: that when synthesizing glyphs, the font metrics returned will only be
 * estimates.
 *
 * @since 1.12
 */
#ifdef CAIRO_HAS_FT_FONT
enum FtSynthesize {

    /// Embolden the glyphs (redraw with a pixel offset)
    FT_SYNTHESIZE_BOLT = CAIRO_FT_SYNTHESIZE_BOLD,

    /// Slant the glyph outline by 12 degrees to the right.
    FT_SYNTHESIZE_OBLIQUE = CAIRO_FT_SYNTHESIZE_OBLIQUE
};


inline FtSynthesize operator|(FtSynthesize a, FtSynthesize b)
{
  return static_cast<FtSynthesize>(static_cast<int>(a) | static_cast<int>(b));
}

inline FtSynthesize operator&(FtSynthesize a, FtSynthesize b)
{
    return static_cast<FtSynthesize>(static_cast<int>(a) & static_cast<int>(b));
}
#endif // CAIRO_HAS_FT_FONT

} // namespace Cairo

#endif //__CAIROMM_ENUMS_H

// vim: ts=2 sw=2 et
