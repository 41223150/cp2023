#include <iostream>

using namespace std;

int main() {
    // 顯示台灣國旗

    // 紅色部分
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "\033[41m  \033[0m";  // ANSI escape code for red background
        }
        cout << endl;
    }

    // 藍色部分
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "\033[44m  \033[0m";  // ANSI escape code for blue background
        }
        cout << endl;
    }

    return 0;
}