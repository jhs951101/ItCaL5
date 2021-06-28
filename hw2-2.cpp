#include <iostream>

using namespace std;

int main(){

	int i=1,sum=0,n;

	cout << "n의 배수를 출력하는 프로그램입니다. n의 값: ";
	cin >> n;

	while(i<=1000000){
		if(i%n==0) cout << i << "\n";
		++i;
	}

	system("pause");
	return 0;

}