#ifndef PCH_HH
#define PCH_HH

#include <pragma_begin.hh>

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

// GG includes
#include <GG/Clr.h>
#include <GG/Enum.h>
#include <GG/SignalsAndSlots.h>
#include <GG/utf8/checked.h>
#include <GG/SDL/SDLGUI.h>
#include <GG/Wnd.h>
#include <GG/GGFwd.h>
#include <GG/GLClientAndServerBuffer.h>
#include <GG/BrowseInfoWnd.h>
#include <GG/Button.h>
#include <GG/DropDownList.h>
#include <GG/Edit.h>
#include <GG/Menu.h>
#include <GG/MultiEdit.h>
#include <GG/Scroll.h>
#include <GG/Slider.h>
#include <GG/StaticGraphic.h>
#include <GG/TabWnd.h>
#include <GG/dialogs/FileDlg.h>
#include <GG/GLClientAndServerBuffer.h>
#include <GG/PtRect.h>
#include <GG/RichText/BlockControl.h>
#include <GG/RichText/RichText.h>
#include <GG/Spin.h>
#include <GG/StyleFactory.h>
#include <GG/WndEvent.h>
#include <GG/Control.h>
#include <GG/ListBox.h>
#include <GG/DrawUtil.h>
#include <GG/Layout.h>
#include <GG/GUI.h>
#include <GG/TextControl.h>
#include <GG/DynamicGraphic.h>
#include <GG/Texture.h>
#include <GG/Cursor.h>
#include <GG/ClrConstants.h>
#include <GG/UnicodeCharsets.h>
#include <GG/dialogs/ThreeButtonDlg.h>
#include <GG/RichText/ImageBlock.h>
#include <GG/dialogs/ColorDlg.h>
#include <GG/ScrollPanel.h>
#include <GG/utf8/core.h>

#undef main // defined as SDL_main

#include <pragma_end.hh>

#endif // !PCH_HH
