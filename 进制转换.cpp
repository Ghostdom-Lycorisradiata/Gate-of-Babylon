/*
����	����֮���ת���ǳ���Ȥ�����罫ʮ���Ƶ�7ת��Ϊ������Ϊ111��ת��Ϊ������Ϊ21��
		���д����ʮ��������ת����ָ�����ơ���

����main�������£�
#include <iostream>
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1��10����������
        Number no3 = no1.converto(n2);  //no3��n2���Ƶ�������
        no3.show();     //������
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
        Number no1(n1,10);     //n1��10����������
        Number no3 = no1.converto(n2);  //no3��n2���Ƶ�������
        no3.show();     //������
    }
	return 0;
}

