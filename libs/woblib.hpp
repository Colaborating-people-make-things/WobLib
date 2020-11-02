#include <cmath>
#include <string>
#include <iostream>
#include <bsd/stdlib.h>

namespace woblib {

    namespace random {

        int randint() {
            return arc4random();
        }

        int randrange(int min, int max) {
            int a = arc4random() % max;

            if (a < min) {
                int a = min;
            }
            return a;

        }


    }

}
