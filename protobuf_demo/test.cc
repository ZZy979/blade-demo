#include <iostream>

#include "protobuf_demo/test.pb.h"

template<class T> void set(Foo* foo, void (Foo::*setter)(T), T val) {
    (foo->*setter)(val);
}

int main() {
    Foo foo;
    set(&foo, &Foo::set_a, 123);
    set(&foo, &Foo::set_b, int64_t(456));
    // set(&foo, &Foo::set_c, "abc");
    foo.PrintDebugString();
    return 0;
}
