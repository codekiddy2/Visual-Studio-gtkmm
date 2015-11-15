#pragma once
// MainWindow.h
// MainWindow class interface

#include <gtkmm\hvbox.h>
#include <gtkmm\window.h>
#include <gtkmm\button.h>
#include <gtkmm\buttonbox.h>


class MainWindow final :
	public Gtk::Window
{
public:
	// constructors
	MainWindow();
	MainWindow(const MainWindow&) = delete;
	MainWindow& operator=(const MainWindow&) = delete;

private:
	// members
	gtk::VBox m_vbox;
	gtk::HBox m_hbox;
	gtk::Button m_btn_close;
	gtk::ButtonBox m_btn_box;

	// methods
	void on_button_close();
};

