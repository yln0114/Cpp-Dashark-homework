#include<iostream>
class HanXin{
	public:
		int z,a,b,c;
		void line3(int n1){
			a=n1;
		}  //3��һ��
	
	  	void line5(int n2){
			b=n2;
		
		}   //5��һ��
	
	    void line7(int n3){
			c=n3;
		}//7��һ��
		void showMany();
		
	
};
void HanXin::showMany(){
	int z=0;
	for (int i=10;i<100;i++){
		if (i%3==a&&i%5==b&&i%7==c){
			z=i;
			break;
		}
	}
	if (z!=0){
		std::cout<<z<<std::endl;
	}else{
		
		std::cout<<"Impossible"<<std::endl;
		
	}
	
}

int main() {

    int n, n1, n2, n3;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2 >> n3;

        HanXin hx;  //����

        hx.line3(n1);  //3��һ��

        hx.line5(n2);   //5��һ��

        hx.line7(n3);   //7��һ��

        hx.showMany();

    }
	return 0;
}
 
