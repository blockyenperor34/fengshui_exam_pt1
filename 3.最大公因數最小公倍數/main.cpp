#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, char** argv) {
	int a, b, c, igcd, ilcm, x, y;
	cout << "求兩數最大公因數及最小公倍數(a,b)，請輸入兩數:";
	cin >> a >> b;
	x = a;
	y = b;

	ilcm = a * b;
	do {
		c = a % b;
		a = b;
		b = c;
	} while (b != 0);


	ilcm = ilcm / a;
	cout << "gcd:" << a << endl;
	cout << "lcm:" << ilcm << endl;
	return 0;
}