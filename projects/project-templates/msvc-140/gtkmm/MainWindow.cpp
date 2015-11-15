// MainWindow.cpp
// MainWindow class definition

#include "stdafx.h"
#include "MainWindow.h"


MainWindow::MainWindow() :
m_btn_close("Close")
{
	// MainWindow options
	set_title("MainWindow");
	set_size_request(450, 300);
	set_position(gtk::WIN_POS_CENTER);
	
	// packing
	add(m_hbox);
	m_hbox.pack_end(m_vbox);
	m_vbox.pack_end(m_btn_box, gtk::PACK_SHRINK);
	m_btn_box.pack_end(m_btn_close, gtk::PACK_SHRINK);

	m_btn_box.set_spacing(5);
	m_btn_box.set_border_width(5);
	m_btn_box.set_layout(gtk::BUTTONBOX_END);

	show_all();

	// signals
	m_btn_close.signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_close));
}

void MainWindow::on_button_close()
{
	close();
}
