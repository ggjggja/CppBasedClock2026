#include "clock.h"

int main()
{
	Clock clock;

	while (true) {
		clock.TickTock();

		using namespace std::chrono;
		std::this_thread::sleep_for(1.0h / 0x2026);
	}
}