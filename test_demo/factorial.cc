#include "factorial.h"

long long factorial(int n) {
    return n == 0 ? 1 : n * factorial(n - 1);
}
