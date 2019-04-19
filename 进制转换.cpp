/*
描述	进制之间的转换非常有趣，例如将十进制的7转化为二进制为111，转化为三进制为21。
		请编写程序将十进制整数转换成指定进制。、

其中main函数如下：
#include <iostream>
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1是10进制正整数
        Number no3 = no1.converto(n2);  //no3是n2进制的正整数
        no3.show();     //输出结果
    }
}
*/

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int reverse[17];
class Number
{
public: 
	Number(int x,int y);
	int converto(int z);
	void show();
	int number;
};

Number::Number(int x,int y=10){
	number=x;
}

int Number::converto(int z){
	int count,temp;
	memset(reverse,0,17);
	for(count=0;(number%z)!=0;count++){
		reverse[count]=number%z;
		number=number/z;
	}
	int sum=0;
	for(int i=count;i>=0;i--){
		sum=sum*10+reverse[i];
	}
	return sum;
}

void Number::show(){
	cout<<number<<endl;
}

int main()
{
	int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1,10);     //n1是10进制正整数
        Number no3 = no1.converto(n2);  //no3是n2进制的正整数
        no3.show();     //输出结果
    }
	return 0;
}

