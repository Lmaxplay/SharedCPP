#include <iostream>
#include <Windows.h>
#include <math.h>
#include <errors.h>

#include "terminalstyle.hpp"
#include "isElevated.hpp"

#pragma 

int main(int argc, char** argv)
{
    std::cout << tstyle::fg_green << "Hello World!\n" << tstyle::reset;
    std::cout << tstyle::fg_blue << tstyle::intensity_increased << isElevated() << tstyle::reset << "\n";
    return 0;
}
