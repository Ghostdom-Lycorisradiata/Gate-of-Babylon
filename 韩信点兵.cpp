/*
����	����˵�������ŵ����������ơ����������Ų��ǹ��ˣ��Ӳ�ֱ�����������ֻҪ��ʿ��3��һ�ţ�5��һ�ţ�7��һ�ŵı任���Σ��鿴��β����������������������
 
����	��1����һ������n����ʾ�����n�����ݡ�ÿ������ռһ�У��������ֶ��εĶ�β����a��b��c���ÿո��������֪������������С��10��������100��

*/

#include <iostream>
using namespace std;

int num1[35]={0};
int num2[10]={0};
int num3[1]={0};

class HanXin
{
public:
	void line3(int x);
	void line5(int y);
	void line7(int z);
	void showMany();
};

void HanXin::line3(int x){
	int count=0;
	for(int i=10;i<=100;i++){
		if(i%3==x){
			num1[count]=i;
			count++;
		}
	}
}

void HanXin::line5(int y){
	int count=0;
	for(int i=0;num1[i]!=0;i++){
		if(num1[i]%5==y){
			num2[count]=num1[i];
			count++;
		}
	}	
}

void HanXin::line7(int z){
	num3[0]=0;
	int count=0;
	for(int i=0;num2[i]!=0;i++){
		if(num2[i]%7==z){
			num3[count]=num2[i];
		}
	}
}

void HanXin::showMany(){
	if(num3[0]!=0){
		cout<<num3[0]<<endl;
	}
	if(num3[0]==0){
		cout<<"Impossible"<<endl;
	}
}

int main() 
{
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

