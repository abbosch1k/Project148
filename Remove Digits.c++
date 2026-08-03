#include <iostream>
#include <cctype>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    for(char c : s)
        if(!isdigit(c))
            cout << c;
}
