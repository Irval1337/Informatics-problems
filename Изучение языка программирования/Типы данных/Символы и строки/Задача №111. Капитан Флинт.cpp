#include <iostream> 
#include <string> 
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> iamsorry;
    string s;
    int x, y;
    x = y = 0;
    do {
        string s1 = s.substr(0, s.find(" "));
        int count = atoi(s.substr(s.find(" ") + 1).c_str());
        if (s1 == "North")
            y += count;
        else if (s1 == "South")
            y -= count;
        else if (s1 == "East")
            x += count;
        else if (s1 == "West")
            x -= count;
    } while (getline(cin, s), !s.empty());
    cout << x << " " << y;
}