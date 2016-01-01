// main.cpp
// defines application entry point

#include "pch.hh"
#include <iostream>
#include <sstream>

struct Base : 
	virtual public Glib::Object
{
	Base() :Object()
	{
		// upcast and downcast
		Object* o = static_cast<Object*>(this);
		Base*   b = dynamic_cast<Base*>(o);
		std::cout << "  this: " << this << " after cast: " << b;
		// should be the same address
		if (this != b)
			std::cout << " check address: NOK";
		else
			std::cout << " check address: OK ";
	}
};

struct Derived : public Base
{
	int i;
};

int main(int argc, char* argv[])
{
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "test_dynamic_cast.exe");
	Derived* d = new Derived;
	delete d;
	std::cout << " end arrived: ";
	std::stringstream* ss = new std::stringstream;
	delete ss;
	std::cout << "OK";
	std::cin.get();
	return 0;
}

