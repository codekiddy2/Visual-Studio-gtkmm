#pragma once

// PCH includes
// TODO: modify or add more includes here for faster compilation and intellisense according to your needs


DW // disable warnings macro (to compile own code with W4 flag)

#include <gtkmm\gtkmm.h>
#include <sigc++\sigc++.h>
#include <glibmm\glibmm.h>
#include <cairomm\cairomm.h>
#include <goocanvasmm\goocanvasmm.h>

// #include <atkmm\atkmm.h>
// #include <pangomm\pangomm.h>

// avoiding capitall letters
namespace gtk = Gtk;
namespace glib = Glib;
namespace cairo = Cairo;

#include <boost\array.hpp>
#include <boost\bind.hpp>
#include <boost\asio.hpp>
#include <boost\date_time.hpp>
#include <boost\smart_ptr.hpp>
#include <boost\filesystem.hpp>

// shortcuts for boost namespaces
namespace asio = boost::asio;
namespace ip = boost::asio::ip;
namespace posix_time = boost::posix_time;
namespace filesystem = boost::filesystem;

#include <cryptopp\hex.h>
#include <cryptopp\aes.h>
#include <cryptopp\ccm.h>
#include <cryptopp\rsa.h>
#include <cryptopp\modes.h>
#include <cryptopp\files.h>
#include <cryptopp\base64.h>
#include <cryptopp\pubkey.h>
#include <cryptopp\filters.h>

// avoiding capitall letters
namespace cryptopp = CryptoPP;

EW // enable warnings macro
