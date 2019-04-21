#include <iostream>
#include <cstring>
#include <string>
class Number{
	public:
		char change[100];
		int before;
		int x;
		int y;
		int len;
		Number(int a,int x1){
			before=a;
			x=x1;
		}
		Number(char x[],int l){
			strcpy(change,x);
			 len=l;
		}
		Number converto(int n2);
		void show(){
			//int l=strlen(change)-1;
			int l=len-1;
			for (;l>=0;l--){
				printf("%c",change[l]);
			}
			std::cout<<std::endl;
		}
		~Number(){
			
		};
};

Number Number::converto(int n2){
	char change1[100];
	y=n2;
	int z=0;
	
	if (before==0){
		change1[0]='0';
		
	}
	while (before!=0){
		int t=before%y;
		change1[z]=int ('0')+t;
		z++;
		//printf("%c",change1[z-1]);
		before=before/y;
	}
	
	//printf("\n");
	Number n3(change1,z);
	return n3;
	
	  
}

int main() {

    int n, n1, n2;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2;

        Number no1(n1, 10);     //n1是10进制正整数

        Number no3 = no1.converto(n2);  //no3是n2进制的正整数

        no3.show();     //输出结果

    }
	return 0; 
}
