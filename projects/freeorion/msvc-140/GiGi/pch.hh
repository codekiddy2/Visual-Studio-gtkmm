#ifndef PCH_HH
#define PCH_HH

// PCH includes
// TODO: modify or add more includes here for faster compilation and intellisense according to your needs


#include <pragma_begin.hh> // disable warnings (to compile own code with W4 flag)

// std headers
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <climits>
#include <stdexcept>
#include <string>
#include <cassert>
#include <iosfwd>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <cmath>
#include <limits>
#include <list>
#include <iterator>

// GL headers
#include <GL/glew.h>

// boost includes
#include <boost/bind.hpp>
#include <boost/cstdint.hpp>
#include <boost/signals2/signal.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/utility/enable_if.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/cstdint.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/algorithm/string/trim.hpp>
#include <boost/unordered_map.hpp>
#include <boost/graph/graph_concepts.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_integral.hpp>
#include <boost/serialization/access.hpp>
#include <boost/serialization/binary_object.hpp>

#include <pragma_end.hh> // enable warnings

#endif // !PCH_HH
