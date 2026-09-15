#include <iostream>

#include "protobuf_demo/test.pb.h"

int main() {
    Foo foo;
    foo.set_a(123);
    foo.set_b(456);
    foo.set_c("abc");
    std::cout << foo.DebugString() << '\n';
    return 0;
}
