#include <windows.h>
#include <tchar.h>
#include <shlwapi.h>

#include <vector>
#include <fstream>

#include <libgnuintl.h>
#include <iconv.h>

#define PACKAGE_NAME "codekiddy"

#if defined(UNICODE) || defined(_UNICODE)
#define _(text) wgettext(text)
#else
#define _(text) gettext(text)
#endif

int main() {
    if (setlocale(LC_ALL, "") == NULL) {
        return 1;
    }

    std::vector<TCHAR> locale_dir(3000);
    DWORD result = GetModuleFileName(GetModuleHandle(NULL), 
                                     &locale_dir[0], locale_dir.size());

    if (result == 0 || result == locale_dir.size()) {
        return 1;
    }

    if (PathRemoveFileSpec(&locale_dir[0]) == FALSE) {
        return 1;
    }

    const TCHAR dir[] = _T("locale");
    locale_dir.resize(locale_dir.size() + (sizeof(dir) / sizeof(*dir)));
    if (PathAppend(&locale_dir[0], dir) == FALSE) {
        return 1;
    }

#if defined(UNICODE) || defined(_UNICODE)
    _putws(L"UNICODE");
    if (bindtextdomain(PACKAGE_NAME, &locale_dir[0]) == NULL) {
        return 1;
    }
    if (bind_textdomain_codeset(PACKAGE_NAME, "UTF-16LE") == NULL) {
        return 1;
    }
#else
    puts("MBCS");
    if (bindtextdomain(PACKAGE_NAME, &locale_dir[0]) == NULL) {
        return 1;
    }
#endif

    if (textdomain(PACKAGE_NAME) == NULL) {
        return 1;
    }

    _putts(_("Hello, world!"));
    MessageBox(NULL, _("Hello, world!"), &locale_dir[0], MB_OK);

    void use_symbol(); use_symbol();
    return 0;
}


void use_symbol() {
    std::ofstream("nul") << 
        (intptr_t)libintl_gettext +
        (intptr_t)libintl_gettext + 
        (intptr_t)libintl_dgettext +
        (intptr_t)libintl_dcgettext + 
        (intptr_t)libintl_ngettext + 
        (intptr_t)libintl_dngettext +
        (intptr_t)libintl_dcngettext+ 
        (intptr_t)libintl_bindtextdomain + 
        (intptr_t)libintl_textdomain +
        (intptr_t)libintl_bind_textdomain_codeset +
        0;
}


