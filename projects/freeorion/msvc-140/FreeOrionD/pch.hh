#ifndef PCH_HH
#define PCH_HH

// PCH includes
// TODO: modify or add more includes here for faster compilation and intellisense according to your needs

#include <pragma_begin.hh> // disable warnings (to compile own code with W4 flag)

// std includes
#include <map>
#include <set>
#include <deque>
#include <string>
#include <vector>
#include <utility>
#include <iostream>
#include <list>
#include <cmath>
#include <stdexcept>

// boost includes
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

#include <boost/array.hpp>
#include <boost/asio.hpp>
#include <boost/function.hpp>
#include <boost/pointer_cast.hpp>
#include <boost/variant.hpp>
#include <boost/unordered_map.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/any.hpp>
#include <boost/format.hpp>
#include <boost/make_shared.hpp>
#include <boost/shared_array.hpp>

#include <boost/shared_ptr.hpp>
#include <boost/scoped_ptr.hpp>

#include <boost/iterator/filter_iterator.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/python/detail/destroy.hpp>
#include <boost/log/trivial.hpp>
#include <boost/date_time/posix_time/time_formatters.hpp>
#include <boost/functional/hash.hpp>

#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/split.hpp>

#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>

#include <boost/filesystem.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>

#include <boost/iostreams/filter/zlib.hpp>
#include <boost/iostreams/filtering_streambuf.hpp>
#include <boost/iostreams/copy.hpp>

#include <boost/mpl/list.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/mpl/vector.hpp>

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/key_extractors.hpp>
#include <boost/multi_index/ordered_index.hpp>

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/symmetric.hpp>

#include <boost/python.hpp>
#include <boost/python/list.hpp>
#include <boost/python/tuple.hpp>
#include <boost/python/extract.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>
#include <boost/python/suite/indexing/map_indexing_suite.hpp>

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_smallint.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/uniform_01.hpp>
#include <boost/random/uniform_real.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>

#include <boost/serialization/version.hpp>
#include <boost/serialization/access.hpp>
#include <boost/serialization/nvp.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/deque.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/map.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/vector.hpp>

#include <boost/statechart/custom_reaction.hpp>
#include <boost/statechart/deferral.hpp>
#include <boost/statechart/event.hpp>
#include <boost/statechart/in_state_reaction.hpp>
#include <boost/statechart/state.hpp>
#include <boost/statechart/state_machine.hpp>

#include <boost/signals2/signal.hpp>
#include <boost/signals2/optional_last_value.hpp>

#include <boost/thread.hpp>
#include <boost/thread/thread.hpp>
#include <boost/thread/shared_mutex.hpp>

#include <boost/type_traits/add_pointer.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/type_traits/remove_pointer.hpp>

// GG includes
#include <GG/Clr.h>
#include <GG/Enum.h>
#include <GG/SignalsAndSlots.h>
#include <GG/utf8/checked.h>
#include <GG/SignalsAndSlots.h>

#include <pragma_end.hh> // enable warnings

#endif // !PCH_HH
