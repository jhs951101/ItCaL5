#include <iostream>

using namespace std;

int main(){

	int n, i=1;

	cout << "������ n���� ����ϴ� ���α׷��Դϴ�. n�� ��: ";
	cin >> n;

	while (i <= 9){
		cout << n << " * " << i << " = " << n*i << "\n";
		++i;
	}

	system("pause");
	return 0;

}