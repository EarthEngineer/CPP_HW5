#include <iostream>
#include <stack>
#include <string>

bool Check(const std::string& str) {
    std::stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    if (Check(str)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

}
