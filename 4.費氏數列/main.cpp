#include <iostream>

int Fib(int);
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout << "輸入費氏數列印到第N項，n=";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << Fib(i) << "  ";
    }
    cout << endl;
    system("pause");
    return 0;
}
int Fib(int x) {
    if (x == 1 || x == 2)
        return 1;
    else
        return Fib(x - 1) + Fib(x - 2);
}