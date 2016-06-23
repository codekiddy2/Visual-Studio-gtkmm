#include <cairo\cairo.h>

int main()
{
	cairo_t *cr;
	int w, h;

	cairo_status_t status;
	cairo_surface_t *surface;

	surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 300, 100);
	cr = cairo_create(surface);

	cairo_set_source_rgb(cr, 1.0, 1.0, 1.0);
	cairo_paint(cr);


	cairo_arc(cr, 128.0, 128.0, 76.8, 0, 2 * 3);
	cairo_clip(cr);
	cairo_new_path(cr);

	cairo_surface_destroy(surface);

	return 0;
}