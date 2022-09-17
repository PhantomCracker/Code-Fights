//
// Created by PhantomCracker on 17.09.2022.
//

#include <iostream>
#include <string>
#include <stack>
#include <set>
using namespace std;

std::string solution(const std::string& input) {
    std::stack<std::string> s;
    s.emplace();
    for (const auto& c : input) {
        switch (c) {
            case '(':
                s.emplace();
                break;
            case ')': {
                std::string r(std::move(s.top()));
                s.pop();
                s.top().append(r.rbegin(), r.rend());
                break;
            }
            default:
                s.top() += c;
        }
    }
    return s.top();
}

int main() {
    std::string inputString;
    std::cin >> inputString;
    std::cout << solution(inputString);
    std::cout << std::endl;
    return 0;
}