#include <iostream>

using namespace std;

int main(){

	int i=1,sum=0,n;

	cout << "1부터 n까지의 합을 출력하는 프로그램입니다. n의 값: ";
	cin >> n;

	while(i<=n){
		sum=sum+i;
		++i;
	}

	cout << "1부터 n까지의 합은 " << sum << "입니다!!\n";

	system("pause");
	return 0;

}