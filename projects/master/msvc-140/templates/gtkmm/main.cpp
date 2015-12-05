// main.cpp
// defines application entry point

#include "stdafx.h"
#include "MainWindow.h"

#include <memory>	// for unique_ptr
#include <cstdlib> // for exit()

int main(int argc, char* argv[])
{
	using std::exit;
	using glib::RefPtr;
	using std::unique_ptr;
	using gtk::Window;
	using std::make_unique;
	using gtk::Application;

	RefPtr<Application> app = Application::create( argc, argv, "gtkmm.exe" );

	unique_ptr<MainWindow> p_window = make_unique<MainWindow>();

	if ( p_window )
	{
		return app->run( *p_window );
	}
	else
	{
		exit( EXIT_FAILURE );
	}
}
