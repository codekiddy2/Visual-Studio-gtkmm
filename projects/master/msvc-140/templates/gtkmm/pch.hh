#ifndef PCH_HH
#define PCH_HH

// PCH includes
// TODO: modify or add more includes here for faster compilation and intellisense according to your needs


#include <pragma_begin.hh> // disable warnings (to compile own code with W4 flag)

#include <gtkmm\gtkmm.h>
#include <sigc++\sigc++.h>
#include <glibmm\glibmm.h>
#include <cairomm\cairomm.h>
#include <goocanvasmm\goocanvasmm.h>

#include <atkmm\atkmm.h>
#include <pangomm\pangomm.h>

#include <pragma_end.hh> // enable warnings

#endif // !PCH_HH
