#include <iostream>
#include <list>

int main() {
    int n = 81;
    int m = 5;

    std::list<int> soldiers;
    for (int i = 1; i <= n; i++) {
        soldiers.push_back(i);
    }

    auto it = soldiers.begin();
    while (soldiers.size() > 1) {
        for (int i = 0; i < m - 1; i++) {
            it++;
            if (it == soldiers.end()) {
                it = soldiers.begin();
            }
        }
        std::cout << *it << " ";
        it = soldiers.erase(it);
        if (it == soldiers.end()) {
            it = soldiers.begin();
        }
    }

    std::cout << soldiers.front() << std::endl;

}
