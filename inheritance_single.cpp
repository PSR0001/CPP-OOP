#include<iostream>
using namespace std;

class A{
	int a;
	public:
			int b;
			void set_ab();
			int get_a(void);
			int get_b(void);
			void show_a(void);
};

class D:public A{
	int c;
	public:
			void mul(void);
			void display(void);
			void set_c(void);
			int get_c(void);
};


//-------------------------------------------
void A :: set_ab(){
	
	cout<<"Enter the a and b value " <<endl;
	cin>>a>>b;
	
	//a=5; b=10;
}
int A:: get_a(void){
	return a;
}
int A:: get_b(void){
	return b;
}
void A:: show_a(void){
	cout<<"a = "<<a<<endl;
}
void D::mul(void){
	c=b*get_a();
}
void D:: display(void){
	cout<<endl<< "A = "<<get_a()<<endl;
	cout<< "B = "<<b<<endl;
	cout<< "C = "<<c<<endl<<endl;
	
}
void D:: set_c(){
	cout<< "Enter the c value class D"<<endl;
	cin>>c;
}
//-----------------------------------------

class C:private D{
	int ab;
	//int a
	//int b;
	//int c;
	public:
	        void set_data(void);
			void display2(void);
			int mul(void);
};

void C :: set_data(){
	
	set_ab();
	set_c();
	
	cout<< "Enter the Value of Private Variables :  "<<endl;
	cin>>ab;//ab-> private of C class
	
}
void C::display2(){
	display();
	cout<<"value of ab"<<ab;
}


int main(){
	
	//-----public-------
	D d;
	d.set_ab();
	d.show_a();
	d.display();
	
	d.b=20;
	d.mul();
	d.display();
	
	
	//------Private------
	C c;
	c.set_data();
	c.display2();
	
	//int f;
	//f=c.mul();
	//cout<<endl<<f<<endl;
	
	
	return 0;
}