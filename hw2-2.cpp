#include <iostream>

using namespace std;

int main(){

	int i=1,sum=0,n;

	cout << "n�� ����� ����ϴ� ���α׷��Դϴ�. n�� ��: ";
	cin >> n;

	while(i<=1000000){
		if(i%n==0) cout << i << "\n";
		++i;
	}

	system("pause");
	return 0;

}