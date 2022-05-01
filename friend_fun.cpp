#include<iostream>
using namespace std;

class ABC;
class XYZ{
	int data;
	public:
			void getData(int value){data = value;}
			friend void add(XYZ,ABC);
};

class ABC{
	int data;
	public:
			void getData(int value){data = value;}
			friend void add(XYZ,ABC);
};

void add(XYZ A,ABC B){
	cout<<"The Sum of two obj Data is : "<< (A.data + B.data)<<endl;
}




int main(){
	
	XYZ a;
	ABC b;
	
	a.getData(23);
	b.getData(27);
	
	add(a,b);
	
	return 0;
		   
	
	
}









