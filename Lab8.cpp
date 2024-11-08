#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> Input() {
    vector<string> words;
    string input;
    cout << "Введіть слова: " << endl;
    cout << "Введіть 9 щоб завершити" << endl;
    while (true) {
        cin >> input;
        if (input == "9") {
            break;
        }
        words.push_back(input);
    }
    return words;
}

vector<string> sort(const vector<string>& words) {
    vector<string> sorted = words;

    sort(sorted.begin(), sorted.end(), [](const string& s1, const string& s2) {
        if (s1.length() == s2.length()) {
            return s1 < s2;
        }
        return s1.length() < s2.length();
    });
    return sorted;
}

void print(const vector<string>& words) {
    for (const string& letter : words) {
        cout << letter << " ";
    }
}


int main() {
    SetConsoleOutputCP(CP_UTF8);

    vector<string> words = Input();
    vector<string> sorted = sort(words);
    cout << "Відсортовані слова: ";
    print(sorted);

    return 0;
}
