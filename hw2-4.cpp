#include <iostream>

using namespace std;

int main(){

	int n, i=1, all=1;

	cout << "n!�� ����ϴ� ���α׷��Դϴ�. n�� ��: ";
	cin >> n;

	while (i <= n){
		all = i*all;
		++i;
	}

	cout << "n! : " << all << "\n";

	system("pause");
	return 0;

}