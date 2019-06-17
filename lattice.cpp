/*描述 用点阵的形式在字符界面上显示数字。数字按如下形式显示。每个数字占5列7行，数字和数字之间用2个空格隔开
 
*****      *  *****  *****  *   *  *****  *****  *****  *****  *****
*   *      *      *      *  *   *  *      *          *  *   *  *   *
*   *      *      *      *  *   *  *      *          *  *   *  *   *
*   *      *  *****  *****  *****  *****  *****      *  *****  *****
*   *      *  *          *      *      *  *   *      *  *   *      *
*   *      *  *          *      *      *  *   *      *  *   *      *
*****      *  *****  *****      *  *****  *****      *  *****  *****

输入 输入的第一行含一个正整数k，表示测试例的个数，后面紧接着k行，每行对应一个测试例，包含一个正整数x(0<=x<=9999)。

输出 每个测试例，先输出x和冒号(英文字符，半角)，换行后输出x的点阵显示形式，每位数字之间用2个空格隔开。如果行末有空格，请保留。
*/

#include <iostream>
using namespace std;

class DotArray {   //点阵对象
    int maxcol, maxrow;
public:
	DotArray(){
		maxcol=7;
		maxrow=5;
	}
 	virtual void showrow(int k) const{
	};
};

class DA0 : public DotArray {   //0的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*****";
		if (i==1) cout<<"*   *";
		if (i==2) cout<<"*   *";
		if (i==3) cout<<"*   *";
		if (i==4) cout<<"*   *";
		if (i==5) cout<<"*   *";
		if (i==6) cout<<"*****";		
	};
};

class DA1 : public DotArray {   //1的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"    *";
		if (i==1) cout<<"    *";
		if (i==2) cout<<"    *";
		if (i==3) cout<<"    *";
		if (i==4) cout<<"    *";
		if (i==5) cout<<"    *";
		if (i==6) cout<<"    *";	
	};
};

class DA2 : public DotArray {   //2的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*****";
		if (i==1) cout<<"    *";
		if (i==2) cout<<"    *";
		if (i==3) cout<<"*****";
		if (i==4) cout<<"*    ";
		if (i==5) cout<<"*    ";
		if (i==6) cout<<"*****";	
	};
};

class DA3 : public DotArray {   //3的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*****";
		if (i==1) cout<<"    *";
		if (i==2) cout<<"    *";
		if (i==3) cout<<"*****";
		if (i==4) cout<<"    *";
		if (i==5) cout<<"    *";
		if (i==6) cout<<"*****";
	};
};

class DA4 : public DotArray {   //4的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*   *";
		if (i==1) cout<<"*   *";
		if (i==2) cout<<"*   *";
		if (i==3) cout<<"*****";
		if (i==4) cout<<"    *";
		if (i==5) cout<<"    *";
		if (i==6) cout<<"    *";
	};
};

class DA5 : public DotArray {   //5的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*****";
		if (i==1) cout<<"*    ";
		if (i==2) cout<<"*    ";
		if (i==3) cout<<"*****";
		if (i==4) cout<<"    *";
		if (i==5) cout<<"    *";
		if (i==6) cout<<"*****";
	};
};

class DA6 : public DotArray {   //6的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*****";
		if (i==1) cout<<"*    ";
		if (i==2) cout<<"*    ";
		if (i==3) cout<<"*****";
		if (i==4) cout<<"*   *";
		if (i==5) cout<<"*   *";
		if (i==6) cout<<"*****";
	};
};

class DA7 : public DotArray {   //7的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*****";
		if (i==1) cout<<"    *";
		if (i==2) cout<<"    *";
		if (i==3) cout<<"    *";
		if (i==4) cout<<"    *";
		if (i==5) cout<<"    *";
		if (i==6) cout<<"    *";
	};
};

class DA8 : public DotArray {   //8的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*****";
		if (i==1) cout<<"*   *";
		if (i==2) cout<<"*   *";
		if (i==3) cout<<"*****";
		if (i==4) cout<<"*   *";
		if (i==5) cout<<"*   *";
		if (i==6) cout<<"*****";
	};
};

class DA9 : public DotArray {   //9的点阵
public:
    virtual void showrow(int i) const{
		if (i==0) cout<<"*****";
		if (i==1) cout<<"*   *";
		if (i==2) cout<<"*   *";
		if (i==3) cout<<"*****";
		if (i==4) cout<<"    *";
		if (i==5) cout<<"    *";
		if (i==6) cout<<"*****";
	};
};

DA0 a;DA1 b;DA2 c;DA3 d;DA4 e;DA5 f;DA6 g;DA7 h;DA8 l;DA9 m;
class DAPrinter {
private:
    int num;
    DotArray *das[4]; //最多4个点阵对象
public:
	int freenum;
	DAPrinter(int n){
		num=n;
		freenum=num;
		for(int j=0;j<4;j++){
			das[j]=NULL;
		}
	}
    void split(){
		int j=0;
    	while(num!=0){
    		int temp;
    		temp=num%10;
    		if(das[j]==NULL){
    			if(temp==0) das[j]=&a;
    			if(temp==1) das[j]=&b;
				if(temp==2) das[j]=&c;
				if(temp==3) das[j]=&d;
				if(temp==4) das[j]=&e;
				if(temp==5) das[j]=&f;
				if(temp==6) das[j]=&g;
				if(temp==7) das[j]=&h;
				if(temp==8) das[j]=&l;
				if(temp==9) das[j]=&m;
			}
			num=num/10;
			j++;
		}
	};
    void print(){
    	cout<<freenum<<":"<<endl;
    	for(int i=0;i<7;i++){
    		for(int j=3;j>=0;j--){
    			if(das[j]!=NULL){
    				das[j]->showrow(i);
    				cout<<"  ";
				}
			}
			cout<<endl;
		}
	};
    void reset();
};


int main() {
	int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
    	int n1;
        std::cin >> n1;
        DAPrinter p(n1);
        p.split();
        p.print();
    }
	return 0;
}


/*曾琳清代码 
#include <iostream>
using namespace std;


class DotArray {   //点阵对象
 	   int maxcol, maxrow;
	public:
		DotArray(){
			maxcol=7;
			maxrow=5;
		}
 	   virtual void showrow(int k) const{
			for(int i=0;i<maxrow;i++){
				for(int j=0;j<maxcol;j++){
					cout<<"*";
				}cout<<endl;
			}			
		};
	}; 


class DA0 : public DotArray {   //0的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*****";
			if (i==1) cout<<"*   *";
			if (i==2) cout<<"*   *";
			if (i==3) cout<<"*   *";
			if (i==4) cout<<"*   *";
			if (i==5) cout<<"*   *";
			if (i==6) cout<<"*****";
		
		}
	};


class DA1 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"    *";
			if (i==1) cout<<"    *";
			if (i==2) cout<<"    *";
			if (i==3) cout<<"    *";
			if (i==4) cout<<"    *";
			if (i==5) cout<<"    *";
			if (i==6) cout<<"    *";
		}
	};
	
class DA2 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*****";
			if (i==1) cout<<"    *";
			if (i==2) cout<<"    *";
			if (i==3) cout<<"*****";
			if (i==4) cout<<"*    ";
			if (i==5) cout<<"*    ";
			if (i==6) cout<<"*****";
		}
	};
	
class DA3 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*****";
			if (i==1) cout<<"    *";
			if (i==2) cout<<"    *";
			if (i==3) cout<<"*****";
			if (i==4) cout<<"    *";
			if (i==5) cout<<"    *";
			if (i==6) cout<<"*****";
		}
	};
	
class DA4 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*   *";
			if (i==1) cout<<"*   *";
			if (i==2) cout<<"*   *";
			if (i==3) cout<<"*****";
			if (i==4) cout<<"    *";
			if (i==5) cout<<"    *";
			if (i==6) cout<<"    *";
		}
	};
	
class DA5 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*****";
			if (i==1) cout<<"*    ";
			if (i==2) cout<<"*    ";
			if (i==3) cout<<"*****";
			if (i==4) cout<<"    *";
			if (i==5) cout<<"    *";
			if (i==6) cout<<"*****";
		}
	};
	
class DA6 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*****";
			if (i==1) cout<<"*    ";
			if (i==2) cout<<"*    ";
			if (i==3) cout<<"*****";
			if (i==4) cout<<"*   *";
			if (i==5) cout<<"*   *";
			if (i==6) cout<<"*****";
		}
	};
	
class DA7 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*****";
			if (i==1) cout<<"    *";
			if (i==2) cout<<"    *";
			if (i==3) cout<<"    *";
			if (i==4) cout<<"    *";
			if (i==5) cout<<"    *";
			if (i==6) cout<<"    *";
		}
	};
	
class DA8 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*****";
			if (i==1) cout<<"*   *";
			if (i==2) cout<<"*   *";
			if (i==3) cout<<"*****";
			if (i==4) cout<<"*   *";
			if (i==5) cout<<"*   *";
			if (i==6) cout<<"*****";
		}
	};
	
class DA9 : public DotArray {   //1的点阵
	public:
	    virtual void showrow(int i) const{
			if (i==0) cout<<"*****";
			if (i==1) cout<<"*   *";
			if (i==2) cout<<"*   *";
			if (i==3) cout<<"*****";
			if (i==4) cout<<"    *";
			if (i==5) cout<<"    *";
			if (i==6) cout<<"*****";
		}
	};
//其它数字点阵类自己补充
///////////////////////////////////////
DA0 a;DA1 b;DA2 c;DA3 d;DA4 e;DA5 f;DA6 g;DA7 h;DA8 l;DA9 m;
class DAPrinter {
private:
    int fnum;
    DotArray *das[4]; //最多4个点阵对象
public:
	DAPrinter(int n){
		fnum=n;
		for(int j=0;j<4;j++){
			das[j]=NULL;
		}
	}
    void split(){
    	int num=fnum;
		int j=0;
    	while(num!=0){
    		int k=num;
    		num=num%10;
    		if(das[j]==NULL){
    				if(num==0) das[j]=&a;
    				if(num==1)	das[j]=&b;
					if(num==2) das[j]=&c;
					if(num==3) das[j]=&d;
					if(num==4) das[j]=&e;
					if(num==5) das[j]=&f;
					if(num==6) das[j]=&g;
					if(num==7) das[j]=&h;
					if(num==8) das[j]=&l;
					if(num==9) das[j]=&m;
		}num=k/10;
		j++;
	}
}
    void print(){
    	cout<<fnum<<":"<<endl;
    	for(int i=0;i<7;i++){
    		for(int j=3;j>=0;j--){
    				if(das[j]!=NULL){
    					das[j]->showrow(i);
    					cout<<"  ";
					}
				}cout<<endl;
			}
		}
    void reset();
};

int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
    	int n1;
        std::cin >> n1;
        DAPrinter p(n1);
        p.split();
        p.print();
    }
    return 0;
}
*/
