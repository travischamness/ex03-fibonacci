#ifndef EX03_FIBONACCI_FIBONACCI_H
#define EX03_FIBONACCI_FIBONACCI_H

#include <cstdint>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv15 {

                uint64_t fibonacci(uint64_t number) {

                    //initializing
                    uint64_t fib0 = 0;
                    uint64_t fib1 = 1;


                    if (number == 0) return 0;
                    if (number == 1) return 1;

                    for (uint64_t i = 2; i <= number; i++) {

                        uint64_t Fib = fib1 + fib0;
                        fib0 = fib1;
                        fib1 = Fib;

                    }
                    return fib1;
                }}}}}



#endif //EX03_FIBONACCI_FIBONACCI_H

