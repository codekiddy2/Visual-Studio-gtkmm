// main.cpp
// defines application entry point

#include "pch.hh"
#include "Window.hh"


int main(int argc, char* argv[])
{

	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create( argc, argv, "gtkmm.exe" );

	Window* p_window = new Window;

	if ( p_window )
	{
		app->run( *p_window );
		delete p_window;
		return 0;
	}
	else return 1;
}
