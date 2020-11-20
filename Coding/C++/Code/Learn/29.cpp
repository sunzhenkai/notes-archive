#include <iostream>
#include <map>

using namespace std;

int main() {
    std::map<std::string, std::string> sm;
    std::cout << sm.size() << std::endl;
    auto &a = sm["a"];
    a = "abc";
    std::cout << sm.size() << std::endl;
    std::cout << sm["a"] << std::endl;
    std::cout << sm["b"] << std::endl;
    return 0;
} /** OUTPUT
0
1
abc

*/