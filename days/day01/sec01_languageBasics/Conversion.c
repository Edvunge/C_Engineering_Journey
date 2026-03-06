#include <stdio.h>
#include <stdlib.h>

    wchar_t wc = L'\x3B1';
    char mbStr[10] = "";
    int nBytes = 0;

    //nBytes = wctomb(mbStr, wc);

    //if(nBytes < 0)
    //    puts("Not a valid multibyte character in your locale.");


    //function call is not allowed in a constant expressionC/C++(59)
    //int wctomb(char *, wchar_t)
