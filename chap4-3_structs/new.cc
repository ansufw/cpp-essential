#include <format>
#include <iostream>

using std::format;
using std::cout;

struct Person {
    const char * name {};
    int age{};
    double score{};
};

int main() {
    Person budi {.name="Budi Adi", .age=14, .score=7.8};    
    cout << format("person1: {}, {}, {}\n", budi.name, budi.age, budi.score);
    
    auto* teman_budi = &budi;
    cout << format("person2: {}, {}, {}\n", teman_budi->name, teman_budi->age, teman_budi->score);
    
    teman_budi->score = 87.2;
    cout << format("person1: {}, {}, {}\n", budi.name, budi.age, budi.score);
    
}