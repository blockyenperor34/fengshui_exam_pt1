#include <iostream>
#include <cmath>

using namespace std;
char pt(int x) {
    if (x < 10) return(char)(x + 48);
    else return (char)(x + 55);
}
int main(int argc, char** argv) {
    int n;
    cout << "輸入N=";
    cin >> n;
    for (int i = -n + 1; i <= n - 1; i++) {
        for (int j = -n + 1; j <= n - 1; j++) {
		    if (abs(j) > abs(i)) cout << pt(abs(j) + 1) << " ";
            else cout << pt(abs(i) + 1) << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}