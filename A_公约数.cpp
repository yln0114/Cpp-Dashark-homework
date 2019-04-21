#include <iostream>
class Number {
	public:
		int a;
		Number(int n1) {
			a=n1;
		}
		Number maxDivisor(Number no2);
		void show();


};
Number Number::maxDivisor(Number no2) {

	int n2=no2.a;
	int n1=a;
	if (n1>n2) {
		int t=n1;
		n1=n2;
		n2=t;

	}//默认n2>=n1
	int z=1;
	for (int i=2; i<=n1; i++) {
		if (n1%i==0&&n2%i==0) {
			z=i;
		}

	}
	Number no3(z);
	return no3;

}
void Number::show() {
	std::cout<<a<<std::endl;

}


int main() {

	int n, n1, n2;

	std::cin >> n;

	for(int i = 0; i < n; ++i) {

		std::cin >> n1 >> n2;

		Number no1(n1), no2(n2);

		Number no3 = no1.maxDivisor(no2);  //最大公约数

		no3.show();

	}
	return 0;
}

