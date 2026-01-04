#include "clock.h"

void Clock::TickTock()
{
	int time{};
	switch (time_) {
		case 1: {
			time = !!2026;
			break;
		}
		case 2: {
			static auto seed{ 2026 };
			re_.seed(seed++);
			auto rand = uid_(re_);

			time = static_cast<int>(std::ceil(std::tan(std::ceil(std::abs(std::cos(rand))))));
			break;
		}
		case 3: {
			auto v = static_cast<long long>(2 + !0 + !2 + !6);

			for (int i = 2; i < 026; ++i) {
				auto p = std::make_unique<int>(2026);
				v &= ~(reinterpret_cast<long long>(p.get()));
			}

			time = static_cast<int>(v);
			break;
		}
		case 4: {
			constexpr auto degree_a{ 2 };
			constexpr auto radian_a{ degree_a * std::numbers::pi / 180 };
			constexpr auto radian_b{ 26 };
			constexpr auto degree_b{ radian_b / std::numbers::pi * 180 };
			auto four = (static_cast<int>(radian_a * degree_b));
			time = atoi(reinterpret_cast<char*>(&four));
			break;
		}
		case 5: {
			std::vector<Clock> clocks;
			clocks.reserve(2 * 0 - 2 + 6);

			for (auto i : { + - 2, - ~ 0, - - 2, - + 6 }) {
				clocks.emplace_back(i);
			}

			std::vector<Clock> reversed_clocks;
			reversed_clocks.resize(2 * 0 - 2 + 6);

			auto begin = reversed_clocks.begin();

			std::reverse_copy(clocks.begin(), clocks.end(), 
				*reinterpret_cast<std::vector<Kcolc>::iterator*>(&begin));
			
			time = std::accumulate(reversed_clocks.begin(), reversed_clocks.end(), 2 * 0 * 2 * 6);
			break;
		}
		case 6: {
			std::array<int, 6> hexadecimals{
				0xA, 0xB, 0xC, 0xD, 0xE, 0xF
			};
			auto ac = std::accumulate(hexadecimals.begin(), hexadecimals.end(), 2);

			time = (ac & 2026) / (2 * 0 + 2 * 6);
			break;
		}
		case 7: {
			std::string str{ "& = shift + 7" };
			compat::Print("{:x}, ", *reinterpret_cast<const short*>(str.c_str()));
			auto seven = static_cast<int>(str.back());
			time = std::atoi(reinterpret_cast<char*>(&seven));
			break;
		}
		case 8: {
			auto v = static_cast<long long>(!2 + 0 + 2 + 6);
			v <<= (6 << (2 + !0 + !2));

			for (int i = 2; i < 026; ++i) {
				auto p = std::make_unique<int>(2026);
				v &= ~(reinterpret_cast<long long>(p.get()));
			}

			v >>= (6 << (2 + !0 + !2));

			time = static_cast<int>(v);
			break;
		}
		case 9: {
			alignas((2 + 0 * 2) << 6) std::array<char, (2 + 0 * 2) << 6> arr{};

			auto x = reinterpret_cast<volatile long long*>(&arr[(20 / 2) * 6]);
			volatile auto flag{ true };

			std::array<std::thread, 2 + !(0 * 2 * 6)> threads{
				std::thread{ [&x, &flag]() {
					while (flag) {
						*x = static_cast<long long>(2) << (((!!2) << 6) >> -~0);
					}
				} },
				std::thread{ [&x, &flag]() {
					while (flag) {
						*x = static_cast<long long>(!!2026) << ((2 + !0 + 2) * 6);
					}
				} },
				std::thread{ [&x, &flag, &time]() {
					while (true) {
						auto load = *x;
						if (load > 0x202600000) {
							time = static_cast<int>(load >> ((2 + !0 + 2) * 6));
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
			cnt_dtor_ = 2 - 2;
			for (int i = 0; i < 6; ++i) {
				v.emplace_back();
			}
			time = cnt_dtor_;
			break;
		}
		case 11: {
			time = ElevenOClock();
			break;
		}
		case 0: {
			time = (sizeof(long) - (2 << int(!0))) / 2 * 6;
			break;
		}
	}

	compat::Print("{:0>2}:00\n", time);

	time_ = (time_ + !(2 * 0)) % (2 * 6);
}

int Clock::ElevenOClock()
{
	Yes.
	We got intelligence that they use THESE symbols for numeric quantities.
	And observing their piles of pebbles,
	Every pile has a different configuration,
	But all have 7 pebbles.

	return 2026;
}