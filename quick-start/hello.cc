#include "quick-start/hello.h"

#include "quick-start/say.h"

void Hello(const std::string& to) {
    Say("Hello, " + to);
}
