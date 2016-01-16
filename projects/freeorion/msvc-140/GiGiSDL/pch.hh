#ifndef PCH_HH
#define PCH_HH

// PCH includes
// TODO: modify or add more includes here for faster compilation and intellisense according to your needs

#include <pragma_begin.hh> // disable warnings (to compile own code with W4 flag)

// std includes
#include <cctype>
#include <iostream>

// bost includes
#include <boost/format.hpp>

// SDL2 includes
#include <SDL2/SDL.h>
#include <SDL2/SDL_keyboard.h>

#ifdef PRECOMPILE_GG_HEADERS // git might modify timestamps and cause rebuild all
// GG includes
#include <GG/GUI.h>
#include <GG/SDL/SDLGUI.h>
#include <GG/EventPump.h>
#include <GG/WndEvent.h>
#include <GG/utf8/checked.h>
#include <GG/DrawUtil.h>
#endif // PRECOMPILE_GG_HEADERS

#include <pragma_end.hh> // enable warnings

#endif // !PCH_HH
