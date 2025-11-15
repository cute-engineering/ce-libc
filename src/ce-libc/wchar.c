#include <wchar.h>

size_t wcslen(const wchar_t *s) {
    const wchar_t *p = s;

    while (*p != L'\0') {
        ++p;
    }

    return (size_t)(p - s);
}
