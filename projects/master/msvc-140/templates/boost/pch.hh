#ifndef PCH_HH
#define PCH_HH

// PCH includes
// TODO: modify or add more includes here for faster compilation and intellisense according to your needs


#include <pragma_begin.hh> // disable warnings (to compile own code with W4 flag)

#include <boost\array.hpp>
#include <boost\bind.hpp>
#include <boost\asio.hpp>
#include <boost\date_time.hpp>
#include <boost\smart_ptr.hpp>
#include <boost\filesystem.hpp>

#include <pragma_end.hh> // enable warnings

#endif // !PCH_HH
