#ifndef TIMER_H
#define TIMER_H

#include <chrono>
using namespace std;

struct timer {
    chrono::time_point<std::chrono::high_resolution_clock> start;


    timer();

    double restart();
    double elapsed();

    // statically get the current microseconds number
    // useful for example like random seed
    // EDIT: C++11 now has random_device
    static long unsigned int microseconds();
};

#endif
