// C++ Program to Demonstrate
// the basic working of STL
#include <iostream>
#include <set>

int main()
{
    std::set<char> a;
    a.insert('L');
    a.insert('F');
    a.insert('G');
    a.insert('F');
    a.insert('H');
    a.insert('I');
    for (auto& str : a) {
        std::cout << str << ' ';
    }
    std::cout << '\n';
    return 0;
}