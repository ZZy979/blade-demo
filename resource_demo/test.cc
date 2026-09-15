#include <iostream>
#include <string>

#include "resource_demo/my_resource.h"

int main() {
    std::string a(RESOURCE_resource_demo_a_txt, RESOURCE_resource_demo_a_txt_len);
    std::string b(RESOURCE_resource_demo_b_txt, RESOURCE_resource_demo_b_txt_len);
    std::cout << a << '\n' << b << '\n';
    return 0;
}
