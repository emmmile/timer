#ifndef TIMER_H
#define TIMER_H

#include <chrono>
using namespace std;

struct timer {
    chrono::time_point<std::chrono::high_resolution_clock> start;


    timer() {
        start = std::chrono::high_resolution_clock::now();
    }

    double restart() {
        auto end = std::chrono::high_resolution_clock::now();
        double out = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000000.0;
        start = end;
        return out;
    }

    double elapsed() {
        auto end = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000000.0;
    }

    // statically get the current microseconds number
    // useful for example like random seed
    // EDIT: C++11 now has random_device
    static long unsigned int microseconds() {
        return std::chrono::duration_cast<std::chrono::microseconds>
                (std::chrono::high_resolution_clock::now().time_since_epoch()).count();
    }
};

#endif
