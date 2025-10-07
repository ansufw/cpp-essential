#include <format>
#include <iostream>

using std::format;
using std::cout;

struct S {
    int i{};
    double d{};
    const char * s {};
};

int main() {
    S s1 {3, 43.2, "string one"};
    cout << format("s1: {}, {}, {}\n", s1.i, s1.d, s1.s);
    
    auto* sp = &s1;
    cout << format("sp: {}, {}, {}\n", sp->i, sp->d, sp->s);
    
    sp->d = 87.2;
    cout << format("s1: {}, {}, {}\n", s1.i, s1.d, s1.s);

}