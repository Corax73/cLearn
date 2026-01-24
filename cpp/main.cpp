#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string input = "", err = "Ошибка перевода";
    map<string, string> dict;
    dict["Hello"] = "Привет";
    dict["Bye"] = "Пока";
    dict["How are you"] = "Как дела";
    dict["I love you"] = "Я люблю тебя";
    dict["Good"] = "Хорошо";

    getline(cin, input);

    if (dict.contains(input)) {
        cout << dict[input] << endl;
    } else {
        cout << err << endl;
    }
}