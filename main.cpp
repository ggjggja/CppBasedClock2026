#include "clock.h"

// [Environments]
// This project was implemented in the following environments. 
// In particular, it was developed in "two different software environments".
// However, strict compliance is not essential;
// as long as the environment is sufficiently modern, it is likely to work correctly.
// It is sufficient to have access to "Windows" and "Linux-based" operating systems.

// SW1) Windows 11, Visual Studio 2022, MSVC C++23, 64-bit, Release mode
// SW2) Ubuntu server 24.04.3 LTS, g++ 13.2.0, C++23, 64-bit, -Ofast
// HW) AMD Ryzen 7 5800X 8-Core Processor 3.8 Ghz

// --------------------------------------------------------------

// [Conditions]
// 1. Behavior not guaranteed by the C++ standard may be used as long as it does not cause errors.
// 2. The use of libraries other than the C++ standard library is prohibited.
// 3. In the SW1 environment, the program operates as a 24-hour clock,
//    while in the SW2 environment, it operates as a 12-hour clock.


int main()
{
	Clock clock;

	while (true) {
		clock.Print();
		clock.TickTock();
	}
}