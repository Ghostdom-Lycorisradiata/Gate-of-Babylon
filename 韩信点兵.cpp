/*
描述	都听说过“韩信点兵，多多益善”这个成语，韩信才智过人，从不直接清点人数。只要让士兵3人一排，5人一排，7人一排的变换队形，查看队尾人数便能清点队伍总人数。
 
输入	第1行是一个整数n，表示随后有n组数据。每组数据占一行，包括三种队形的队尾人数a，b，c，用空格隔开。已知队伍总人数不小于10，不大于100。

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
        HanXin hx;  //韩信
        hx.line3(n1);  //3人一排
        hx.line5(n2);   //5人一排
        hx.line7(n3);   //7人一排
        hx.showMany();
    }
	return 0;
}

