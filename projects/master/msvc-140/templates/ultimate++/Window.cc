// Window.cpp
// Window class definition

#include "pch.hh"
#include "Window.hh"


Window::Window() :
m_btn_close("Close")
{
	// Window options
	set_title("Window");
	set_size_request(450, 300);
	set_position(Gtk::WIN_POS_CENTER);
	
	// packing
	add(m_hbox);
	m_hbox.pack_end(m_vbox);
	m_vbox.pack_end(m_btn_box, Gtk::PACK_SHRINK);
	m_btn_box.pack_end(m_btn_close, Gtk::PACK_SHRINK);

	m_btn_box.set_spacing(5);
	m_btn_box.set_border_width(5);
	m_btn_box.set_layout(Gtk::BUTTONBOX_END);

	show_all();

	// signals
	m_btn_close.signal_clicked().connect(sigc::mem_fun(*this, &Window::on_button_close));
}

void Window::on_button_close()
{
	close();
}
