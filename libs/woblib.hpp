/*
 * Copyright 2020 EagleOnGitHub, Vortetty

 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this library.  If not, see <https://www.gnu.org/licenses/>.
*/
#include <cmath>
#include <string>
#include <chrono>
#include <iostream>
#include <bsd/stdlib.h>
std::chrono::steady_clock::time_point start;
std::chrono::steady_clock::time_point end;

namespace woblib {
    namespace random {
        int randint() {
            return arc4random();
        }
        int randupto(int max) {
            return arc4random() % max;
        }
    }
    namespace output {
        void coutf(std::string show) {
            std::cout << show << std::endl;
            return;
        }
    }
    namespace benchmark {
        void startSteady() {
            start = std::chrono::steady_clock::now();
            return;
        }
        void endSteady() {
            end = std::chrono::steady_clock::now();
            return;
        }
        auto secondSteady() {
            return std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
        }
        auto milliSteady() {
            return std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
        }
        auto microSteady() {
            return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
        }
        auto nanoSteady() {
            return std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
        }
    }
}
