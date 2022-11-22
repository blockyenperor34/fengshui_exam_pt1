#include <iostream>
#include <iomanip>

/*
 |Warning|
 This code will only runs with GCC compiler.
 For some array problems, you may need to use GCC compiler.
 Thanks to RiceTeaTW for providing this information
 */
 
using namespace std;
int main(int argc, char** argv) {
    int x, y, n;
    do {
        cout << "奇數魔方陣n=";
        cin >> n;
    } while (n % 2 == 0);
    int a[n][n]; //this code only runs with GCC compiler
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[j][i] = 0;
        }
    }
    x = n / 2;
    y = n - 1;
    for (int i = 1; i <= n * n; i++) {
        a[x][y] = i;
        if (i % n == 0) {
            y = y - 1;
        }
        else {
            x = x + 1; if (x > n - 1) x = 0;
            y = y + 1; if (y > n - 1) y = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[j][i];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}