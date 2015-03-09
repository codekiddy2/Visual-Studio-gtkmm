#pragma once

// PCH includes
// TODO: modify includes for faster compilation and intellisense according to your needs


DW // disable warnings macro (to compile own code with W4 flag)

#include <boost\array.hpp>
#include <boost\bind.hpp>
#include <boost\asio.hpp>
#include <boost\date_time.hpp>
#include <boost\smart_ptr.hpp>
#include <boost\filesystem.hpp>

// reference additional shortcuts for namespaces here
namespace asio = boost::asio;
namespace ip = boost::asio::ip;
namespace posix_time = boost::posix_time;
namespace filesystem = boost::filesystem;

EW // enable warnings macro
