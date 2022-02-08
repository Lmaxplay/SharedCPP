#pragma once

#include <Windows.h>
#include <iostream>
//#include <stdint.h>
#include <math.h>
#include <errors.h>
//#include <consoleapi3.h>

#include "terminalutils.hpp"
#include "vector.hpp"

//using ::std::cout, ::std::wcout;

int main(/*int argc, char** argv*/)
{
    vector4 test = vector4(20, 50, 70, 80);
    vector4 test2 = vector4(20, 30, 50, 70);

    cout << test * test2 << terminal::newline;

    cout << tstyle::reset;

    LPHW_PROFILE_INFOW info = LPHW_PROFILE_INFOW;
    GetCurrentHwProfileW(info);
    
    wcout << info << "\n";

    cout << tstyle::fg_blue << "Hello world!!!" << tstyle::intensity_increased << tstyle::reset << "\n";

    return 0;
}