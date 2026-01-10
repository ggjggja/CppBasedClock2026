#include "clock.h"

void Clock::Print()
{
	auto answer{ SolvePuzzle() };

	compat::Print("{:0>2}:00\n", answer + (2 * 0 + 2 * 6)
		* static_cast<int>(time_ >= (2 * 0 + 2 * 6)));
}

int Clock::SolvePuzzle()
{
	int answer{};
	switch (time_ % (2 * 0 + 2 * 6)) {
		case 1: {
			answer = !!2026;
			break;
		}
		case 2: {
			static auto seed{ 2026 };
			re_.seed(seed++);
			auto rand = uid_(re_);

			// Always assigns 2
			answer = static_cast<int>(std::ceil(std::tan(std::ceil(std::abs(std::cos(rand))))));
			break;
		}
		case 3: {
			auto v = static_cast<long long>(2 + !0 + !2 + !6);

			// Repeats enough times
			for (int i = 2; i < 026; ++i) {
				auto p = std::make_unique<int>(2026);

				// The address of dynamically allocated memory is a multiple of 8.
				// The exact value of p.get() is unknown, but the value of v is preserved.
				v &= ~(reinterpret_cast<long long>(p.get()));
			}

			// Always assigns 3
			answer = static_cast<int>(v);
			break;
		}
		case 4: {
			constexpr auto degree_a{ 2 };  // 2-degree (Degree symbol -> zero)
			constexpr auto radian_b{ 26 }; // 26

			// Cross!!
			constexpr auto radian_a{ degree_a * std::numbers::pi / 180 };
			constexpr auto degree_b{ radian_b / std::numbers::pi * 180 };

			auto four = (static_cast<int>(radian_a * degree_b));

			// ASCII code and little endian
			answer = atoi(reinterpret_cast<const char*>(&four));
			break;
		}
		case 5: {
			std::vector<Clock> clocks;
			clocks.reserve(2 * 0 - 2 + 6);

			for (auto i : { -(+2), -(~0), -(-2), -(+6) }) {
				clocks.emplace_back(i);
			}

			// Negate-copy!!
			std::copy(clocks.begin(), clocks.end(), Negate(clocks.begin()));

			answer = std::accumulate(clocks.begin(), clocks.end(), 2 * 0 * 2 * 6);
			break;
		}
		case 6: {
			// Hexadecimal chosen because it's six o'clock
			std::array<int, 6> hexadecimals{
				0xA, 0xB, 0xC, 0xD, 0xE, 0xF
			};
			auto ac = std::accumulate(hexadecimals.begin(), hexadecimals.end(), 2);

			answer = (ac & 2026) / (2 * 0 + 2 * 6);
			break;
		}
		case 7: {
			// Like the original video, this time, 2026 is hidden in 7.
			std::string str{ "& = shift + 7" };

			// ASCII code and little endian
			compat::Print("{:x}, ", *reinterpret_cast<const short*>(str.c_str()));

			// Little endian
			auto seven = static_cast<int>(str.back());
			answer = std::atoi(reinterpret_cast<const char*>(&seven));
			break;
		}
		case 8: {
			auto v = static_cast<long long>(!2 + 0 + 2 + 6);
			v <<= (6 << (2 + !0 + !2));

			// Repeats enough times
			for (int i = 2; i < 026; ++i) {
				// Even in a 64-bit address space, only 48 bits are used for addresses.
				// The upper 16 bits are zero.
				// The exact value of p.get() is unknown, but the value of v is preserved.
				auto p = std::make_unique<int>(2026);
				v &= ~(reinterpret_cast<long long>(p.get()));
			}

			v >>= (6 << (2 + !0 + !2));

			answer = static_cast<int>(v);
			break;
		}
		case 9: {
			alignas((2 + 0 * 2) << 6) std::array<char, (2 + 0 * 2) << 6> arr{};

			// x straddles a cache line boundary in memory.
			// [60, 61, 62, 63, (cache line boundary), 64, 65, 66, 67]
			auto x = reinterpret_cast<volatile long long*>(&arr[(20 / 2) * 6]);

			volatile auto flag{ true };

			std::array<std::thread, 2 + !(0 * 2 * 6)> threads{
				std::thread{ [&x, &flag]() {
					while (flag) {
						// Assigns pow(2, 33)
						*x = static_cast<long long>(2) << (((!!2) << 6) >> -~0);
					}
				} },
				std::thread{ [&x, &flag]() {
					while (flag) {
						// Assigns pow(2, 30)
						*x = static_cast<long long>(!!2026) << ((2 + !0 + 2) * 6);
					}
				} },
				std::thread{ [&x, &flag, &answer]() {
					while (true) {
						auto load = *x;

						// 0x202600000 is greater than pow(2, 33) and pow(2, 30).
						// On most architectures, reads and writes to a single word (8-byte) are implemented as atomic operations.
						// Therefore, this code should not run under normal circumstances.
						if (load > 0x202600000) { 
							// However, writing to unaligned 8-byte memory may be
							// implemented as two separate writes, one per cache line.
							// Each write therefore can interleave at the 4-byte level across threads.
							answer = static_cast<int>(load >> ((2 + !0 + 2) * 6));
							flag = false;
							break;
						}
					}
				} }
			};

			for (auto& thread : threads) {
				thread.join();
			}

			break;
		}
		case 10: {
			std::vector<Clock> v;
			cnt_dtor_called_ = 0;

			// When a std::vector reaches its capacity,
			// it moves its elements to a new memory location.
			// During this process, destructors are called.
			for (int i = 2; i <= 6 - 2; ++i) {
				v.emplace_back();
			}

			answer = cnt_dtor_called_ + 2 + ~0 + !2 + 6;
			break;
		}
		case 11: {
			answer = SolvePuzzleElevenOClock();
			break;
		}
		case 0: {
			// sizeof(long) is 4 on Windows, but 8 on Linux.
			answer = (sizeof(long) - (2 << int(!0))) / 2 * 6;
			break;
		}
	}

	auto time{ answer };
	return
}

void Clock::TickTock()
{
	// sizeof(long) is 4 on Windows, but 8 on Linux.
	time_ = (time_ - ~0) % ((6 << (2 + 2)) / sizeof(long));

	using namespace std::chrono;
	std::this_thread::sleep_for(1.0h / 0x2026);
}

int Clock::SolvePuzzleElevenOClock()
{
	// What the alien says in the Youtube Shorts video.
	
	// [Note] Periods and commas cannot be used as macro names.

	Yes.
	We got intelligence that they use THESE symbols for numeric quantities.
	And observing their piles of pebbles,
	Every pile has a different configuration,
	But all have 7 pebbles.
	They are likely conveying the concept of 7.

	return 2026;
}