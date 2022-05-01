#include<iostream>
using namespace std;

class class_1;
class class_2;

class class_1{
	int value_1;
	public:
		   void inData(int value){value_1=value;}
		   void display(void){cout << value_1<<endl;}
		   friend void exchangeData(class_1 &,class_2 & );
};

class class_2{
	int value_2;
	public:
		   void inData(int value){value_2=value;}
		   void display(void){cout << value_2<<endl;} 
		   friend void exchangeData(class_1 &,class_2 &);	   
};

void exchangeData(class_1 &A,class_2 &B){
		 int temp = A.value_1;
		 A.value_1 = B.value_2;
		 B.value_2 = temp;
		 
}

int main(){
	
	class_1 c1;
	class_2 c2;
	
	c1.inData(100);
	c2.inData(200);
	
	cout<<"Value Before exchange"<<endl;
	c1.display();
	c2.display();
	
	exchangeData(c1,c2);
	
	cout<<"Value Before exchange"<<endl;
	c1.display();
	c2.display();

	return 0;
}

