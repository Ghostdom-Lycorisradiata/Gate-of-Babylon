/*����	��������������m��n�����m��n�����Լ����
 
����	��1����һ������T����ʾ�����T�����ݡ�ÿ������ռһ�У����������������ÿո������
		����main�������£�

*/
 
#include <iostream>
#include <math.h>
using namespace std;

class Number
{
public:
	Number(int x);
	int maxDivisor(Number y);
	void show();
	int number;
};

Number::Number(int x)
{
	number=x;
}

int Number::maxDivisor(Number y)
{
	int d=fmin(number,y.number);
	for(int i=d;i>=1;i--){
		if(number%i==0&&y.number%i==0){
			return i;
		}
	}
}

void Number::show()
{
	cout<<number<<endl;
}


int main() 
{
	int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2);
        Number no3 = no1.maxDivisor(no2);  //���Լ��
        no3.show();
    }
	return 0;
}


