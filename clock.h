#pragma once
#include <thread>
#include <atomic>
#include <array>
#include <numeric>
#include <cmath>
#include <numbers>
#include <random>
#include <chrono>
#include <algorithm>
#include <memory>
#include "print.h"
#include "macros.h"

class NegatedClock;

class Clock {
public:
	Clock() = default;
	Clock(int time) : time_{ time } {}

	~Clock() {
		++cnt_dtor_called_;
	}

	int SolvePuzzleElevenOClock();
	void Print();
	void TickTock();
	int SolvePuzzle();

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

	static auto Negate(std::vector<Clock>::iterator it) {
		auto FuncB{ []() {} };
		auto time{ *reinterpret_cast<std::vector<NegatedClock>::iterator*>(&it) };
		(
		return
	}

private:
	static std::default_random_engine re_;
	static std::uniform_int_distribution<int> uid_;
	static int cnt_dtor_called_;
	int time_{};
};

inline int Clock::cnt_dtor_called_{};
inline std::default_random_engine Clock::re_;
inline std::uniform_int_distribution<int> Clock::uid_;

class NegatedClock {
public:
	NegatedClock() = default;
	NegatedClock(int time) : time_{ time } {}

	auto& operator=(const Clock& clock) {
		time_ = -clock;
		auto& time{ *this };
		auto FuncB{ []() {} };
		(
		return;
	}

private:
	int time_;
};