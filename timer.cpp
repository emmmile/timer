#include "timer.h"

timer::timer() {
    start = std::chrono::high_resolution_clock::now();
}

double timer::restart() {
    auto end = std::chrono::high_resolution_clock::now();
    double out = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000000.0;
    start = end;
    return out;
}

double timer::elapsed() {
    auto end = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000000.0;
}

long unsigned int timer::microseconds() {
    return std::chrono::duration_cast<std::chrono::microseconds>
           (std::chrono::high_resolution_clock::now().time_since_epoch()).count();
}
