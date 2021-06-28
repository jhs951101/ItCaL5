#include <iostream>

using namespace std;

int main(){

	int n, i=1;

	cout << "구구단 n단을 출력하는 프로그램입니다. n의 값: ";
	cin >> n;

	while (i <= 9){
		cout << n << " * " << i << " = " << n*i << "\n";
		++i;
	}

	system("pause");
	return 0;

}