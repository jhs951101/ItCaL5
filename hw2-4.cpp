#include <iostream>

using namespace std;

int main(){

	int n, i=1, all=1;

	cout << "n!을 출력하는 프로그램입니다. n의 값: ";
	cin >> n;

	while (i <= n){
		all = i*all;
		++i;
	}

	cout << "n! : " << all << "\n";

	system("pause");
	return 0;

}