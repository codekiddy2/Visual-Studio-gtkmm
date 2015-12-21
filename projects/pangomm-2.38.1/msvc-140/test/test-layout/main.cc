
#include <cairomm/refptr.h>
#include <cairomm/surface.h>
#include <cairomm/context.h>
#include <glibmm/refptr.h>
#include <pangomm/layout.h>
#include <gtkmm/window.h>

class TestClass :
	public Gtk::Window
{
public:
	TestClass()
	{
		layout = create_pango_layout("blah");
	}

	Glib::RefPtr<Pango::Layout> layout;
};

int main(int argc, char* argv[])
{
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "gtkmm.exe");

	TestClass instance;
	Glib::RefPtr<Pango::Layout> layout2 = instance.layout;

	return app->run(instance);
}
