#include <format>
#include <iostream>


using std::format;
using std::cout;

const size_t byte {8};

int main() {
    float f{};
    double df{};
    long double ldf{};

    cout << format("size of float is {} bits\n", sizeof(f)*byte);
    cout << format("size of double  is {} bits\n", sizeof(df)*byte);
    cout << format("size of long double is {} bits\n", sizeof(ldf)*byte);

}