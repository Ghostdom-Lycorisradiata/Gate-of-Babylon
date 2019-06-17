/*���� �õ������ʽ���ַ���������ʾ���֡����ְ�������ʽ��ʾ��ÿ������ռ5��7�У����ֺ�����֮����2���ո����
 
*****      *  *****  *****  *   *  *****  *****  *****  *****  *****
*   *      *      *      *  *   *  *      *          *  *   *  *   *
*   *      *      *      *  *   *  *      *          *  *   *  *   *
*   *      *  *****  *****  *****  *****  *****      *  *****  *****
*   *      *  *          *      *      *  *   *      *  *   *      *
*   *      *  *          *      *      *  *   *      *  *   *      *
*****      *  *****  *****      *  *****  *****      *  *****  *****

���� ����ĵ�һ�к�һ��������k����ʾ�������ĸ��������������k�У�ÿ�ж�Ӧһ��������������һ��������x(0<=x<=9999)��

��� ÿ���������������x��ð��(Ӣ���ַ������)�����к����x�ĵ�����ʾ��ʽ��ÿλ����֮����2���ո�����������ĩ�пո��뱣����
*/

#include <iostream>
using namespace std;

class DotArray {   //�������
    int maxcol, maxrow;
public:
	DotArray(){
		maxcol=7;
		maxrow=5;
	}
 	virtual void showrow(int k) const{
	};
};

class DA0 : public DotArray {   //0�ĵ���
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

class DA1 : public DotArray {   //1�ĵ���
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

class DA2 : public DotArray {   //2�ĵ���
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

class DA3 : public DotArray {   //3�ĵ���
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

class DA4 : public DotArray {   //4�ĵ���
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

class DA5 : public DotArray {   //5�ĵ���
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

class DA6 : public DotArray {   //6�ĵ���
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

class DA7 : public DotArray {   //7�ĵ���
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

class DA8 : public DotArray {   //8�ĵ���
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

class DA9 : public DotArray {   //9�ĵ���
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
    DotArray *das[4]; //���4���������
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


/*��������� 
#include <iostream>
using namespace std;


class DotArray {   //�������
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


class DA0 : public DotArray {   //0�ĵ���
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


class DA1 : public DotArray {   //1�ĵ���
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
	
class DA2 : public DotArray {   //1�ĵ���
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
	
class DA3 : public DotArray {   //1�ĵ���
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
	
class DA4 : public DotArray {   //1�ĵ���
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
	
class DA5 : public DotArray {   //1�ĵ���
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
	
class DA6 : public DotArray {   //1�ĵ���
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
	
class DA7 : public DotArray {   //1�ĵ���
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
	
class DA8 : public DotArray {   //1�ĵ���
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
	
class DA9 : public DotArray {   //1�ĵ���
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
//�������ֵ������Լ�����
///////////////////////////////////////
DA0 a;DA1 b;DA2 c;DA3 d;DA4 e;DA5 f;DA6 g;DA7 h;DA8 l;DA9 m;
class DAPrinter {
private:
    int fnum;
    DotArray *das[4]; //���4���������
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
