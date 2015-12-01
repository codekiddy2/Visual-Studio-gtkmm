// main.cpp
// defines application entry point

#include "stdafx.h"
#include "MainWindow.h"

#include <cstdlib> // for exit()

int main(int argc, char* argv[])
{
	using std::exit;
	using glib::RefPtr;
	using gtk::Application;
	using boost::scoped_ptr;

	RefPtr<Application> app = Application::create(argc, argv, "gtkmm.exe");

	scoped_ptr<MainWindow> p_window(new MainWindow);
		
	if (p_window)
	{
		return app->run(*p_window);
	}
	else
	{
		exit( EXIT_FAILURE );
	}
}
