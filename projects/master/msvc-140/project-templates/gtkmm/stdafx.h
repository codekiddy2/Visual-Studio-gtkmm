#pragma once

// PCH includes
// TODO: modify or add more includes here for faster compilation and intellisense according to your needs


DW // disable warnings macro (to compile own code with W4 flag)

#include <gtkmm\gtkmm.h>
#include <sigc++\sigc++.h>
#include <glibmm\glibmm.h>
#include <cairomm\cairomm.h>
// #include <goocanvasmm\goocanvasmm.h>

// #include <atkmm\atkmm.h>
// #include <pangomm\pangomm.h>

// avoiding capitall letters for intellisense
namespace gtk = Gtk;
namespace glib = Glib;
namespace cairo = Cairo;

EW // enable warnings macro
