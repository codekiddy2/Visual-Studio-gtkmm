#pragma once
// Window.h
// Window class interface

#include <gtkmm\hvbox.h>
#include <gtkmm\window.h>
#include <gtkmm\button.h>
#include <gtkmm\buttonbox.h>


class Window final :
	public Gtk::Window
{
public:
	// constructors
	Window();

private:
	// members
	Gtk::VBox m_vbox;
	Gtk::HBox m_hbox;
	Gtk::Button m_btn_close;
	Gtk::ButtonBox m_btn_box;

	// methods
	void on_button_close();

	// deleted
	Window(Window&&) = delete;
	Window(const Window&) = delete;
	Window& operator=(Window&&) = delete;
	Window& operator=(const Window&) = delete;
};

