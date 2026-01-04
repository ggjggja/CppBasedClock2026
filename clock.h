#pragma once
#include <thread>
#include <atomic>
#include <array>
#include <numeric>
#include <cmath>
#include <print>
#include <numbers>
#include <random>
#include <chrono>
#include <algorithm>
#include <memory>
#include "macros.h"

class Clock {
public:
	Clock() = default;
	Clock(int time) : time_{ time } {}
	~Clock() {
		++cnt_dtor_;
	}

	int ElevenOClock();

	void TickTock();

	void FuncA(int x = 2026, int y = 2026) const {}

	int FuncB() const {
		int time{};
		auto FuncB{ []() {} };
		(
		return
	}

	operator int() const {
		int time{ time_ };
		(
		return
	}

private:
	int time_{};

	static std::default_random_engine re_;
	static std::uniform_int_distribution<int> uid_;
	static int cnt_dtor_;
};

inline int Clock::cnt_dtor_{};
inline std::default_random_engine Clock::re_;
inline std::uniform_int_distribution<int> Clock::uid_;

struct Kcolc {
	Kcolc() = default;
	Kcolc(int time) : time{ time } {}

	void operator=(const Clock& clock) {
		time = -clock;
	}

	int time;
};