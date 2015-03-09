#include "stdafx.h"


int main(int argc, char* argv[])
{
	glib::RefPtr<gtk::Application> app = gtk::Application::create(argc, argv, "gtkmm_template.exe");
	return app->run(*gtk::manage(new gtk::Window));
}
