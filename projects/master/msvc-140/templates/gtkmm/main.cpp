// main.cpp
// defines application entry point

#include "stdafx.h"
#include "MainWindow.h"


int main(int argc, char* argv[])
{

	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create( argc, argv, "gtkmm.exe" );

	MainWindow* p_window = new MainWindow;

	if ( p_window )
	{
		app->run( *p_window );
		delete p_window;
	}
	else return 1;
}
