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

	
	cout << "b^2+c^2�̌v�Z�����܂��B" << endl << "�ϐ��ɐ��������Ă��������B" << endl << "�ϐ�b" << endl;
	cin >> b;
	cout << "�ϐ��ɐ��������Ă��������B" << endl << "�ϐ�c" << endl;
	cin >> c;
	a = fnc(b,c);//
	cout << "�֐�fnc���" << a << "���󂯎��܂���" << endl;//����
	cout << "��������͂���ƏI�����܂��B" << endl;
	cin >> d;
}
