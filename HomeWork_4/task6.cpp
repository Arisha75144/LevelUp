// Дана строка символов. Определить, является ли она правильным скобочным выражением.

#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool brackets(const string& line) {
    stack<char> box;
    const string left{ "([{" };
    const string rigth{ ")]}" };
    bool balance = true;
    for (auto letter : line) {
        if (rigth.find(letter) != string::npos) {
            if (box.empty() || box.top() != letter) {
                return false;
            }
            else box.pop();
        }
        auto pos = left.find(letter);
        if (pos != string::npos) box.push(rigth.at(pos));
    }
    return true;
}
int main() {
    string line;
    getline(cin, line);
   cout<<(brackets(line) ? "YES" : "NO");
}
