#include <iostream>

using namespace std;

int main(){

	int i=1,sum=0,n;

	cout << "1���� n������ ���� ����ϴ� ���α׷��Դϴ�. n�� ��: ";
	cin >> n;

	while(i<=n){
		sum=sum+i;
		++i;
	}

	cout << "1���� n������ ���� " << sum << "�Դϴ�!!\n";

	system("pause");
	return 0;

}