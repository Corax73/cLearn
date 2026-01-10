#include <iostream>
#include <string>
#include <format>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    cout << std::format("Привет, {}!", s) << endl; 
};