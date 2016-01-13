#ifndef PCH_HH
#define PCH_HH

// PCH includes
// TODO: modify or add more includes here for faster compilation and intellisense according to your needs

#include <pragma_begin.hh> // disable warnings (to compile own code with W4 flag)

// std includes
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <string>
#include <cfloat>
#include <vector>
#include <cctype>
#include <cassert>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <fstream>

// bost includes
#include <boost/version.hpp>
#if BOOST_VERSION == 105600
#include <boost/serialization/singleton.hpp> // This
#include <boost/serialization/extended_type_info.hpp> //This
#endif
// HACK: For a similar boost 1.57 bug
#if BOOST_VERSION == 105700
#include <boost/serialization/type_info_implementation.hpp> // This
#endif

#if BOOST_VERSION == 105800
// HACK: The following two includes work around a bug in boost 1.58
#include <boost/serialization/type_info_implementation.hpp>
#include <boost/archive/basic_archive.hpp>
#endif

#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/shared_array.hpp>

#include <boost/timer.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

#include <boost/bind.hpp>
#include <boost/any.hpp>
#include <boost/format.hpp>
#include <boost/variant.hpp>
#include <boost/assign/list_of.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/pointer_cast.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/unordered_map.hpp>
#include <boost/python/detail/destroy.hpp>
#include <boost/iterator/filter_iterator.hpp>
#include <boost/noncopyable.hpp>
#include <boost/optional/optional.hpp>
#include <boost/property_map/property_map.hpp>
#include <boost/system/system_error.hpp>
#include <boost/spirit/include/classic.hpp>
#include <boost/xpressive/xpressive.hpp>
#include <boost/static_assert.hpp>

#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/erase.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/replace.hpp>

#include <boost/archive/xml_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>

#include <boost/filesystem.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/filesystem/convenience.hpp>
#include <boost/filesystem/operations.hpp>

#include <boost/graph/graph_concepts.hpp>
#include <boost/graph/st_connected.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/connected_components.hpp>
#include <boost/graph/breadth_first_search.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>
#include <boost/graph/filtered_graph.hpp>

#include <boost/iostreams/filter/zlib.hpp>
#include <boost/iostreams/filtering_streambuf.hpp>
#include <boost/iostreams/copy.hpp>

#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/sinks/text_file_backend.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>
#include <boost/log/utility/setup/formatter_parser.hpp>
#include <boost/log/utility/setup/filter_parser.hpp>
#include <boost/log/support/date_time.hpp>

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/key_extractors.hpp>
#include <boost/multi_index/ordered_index.hpp>

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/symmetric.hpp>

#include <boost/random/uniform_01.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/uniform_real.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_smallint.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/random/normal_distribution.hpp>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/export.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/access.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/deque.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/map.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/weak_ptr.hpp>

#include <boost/signals2/signal.hpp>
#include <boost/signals2/optional_last_value.hpp>

#include <boost/smart_ptr.hpp>
#include <boost/smart_ptr/weak_ptr.hpp>
#include <boost/smart_ptr/shared_ptr.hpp>
#include <boost/smart_ptr/enable_shared_from_this.hpp>

#include <boost/thread/condition.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/shared_mutex.hpp>
#include <boost/thread/condition_variable.hpp>
#include <boost/thread/locks.hpp>

#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/add_pointer.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/type_traits/remove_pointer.hpp>

// dependencies includes
#include <png.h>
#include <zlib.h>
#include <ft2build.h>
#include <SDL2/SDL_version.h>
#include <python2.7/patchlevel.h>

 // GG includes
#include <GG/Clr.h>
#include <GG/Enum.h>
#include <GG/utf8/checked.h>

#include <pragma_end.hh> // enable warnings

#endif // !PCH_HH
