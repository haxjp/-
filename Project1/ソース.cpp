#include <iostream>
#include <string>
using namespace std;

int fnc(int a, int b) {
	return a * a + b * b;
}

void main() {
	int a = 0;
	int b,c;
	int  d;

	
	cout << "b^2+c^2の計算をします。" << endl << "変数に数字を入れてください。" << endl << "変数b" << endl;
	cin >> b;
	cout << "変数に数字を入れてください。" << endl << "変数c" << endl;
	cin >> c;
	a = fnc(b,c);//
	cout << "関数fncより" << a << "を受け取りました" << endl;//結果
	cout << "何かを入力すると終了します。" << endl;
	cin >> d;
}
