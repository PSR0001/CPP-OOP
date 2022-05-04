#include<iostream>
using namespace std;

class A{
	int a;
	public:
			int b;
			void set_ab();
			int get_a(void);
			void show_a(void);
};

class D:public A{
	int c;
	public:
			void mul(void);
			void display(void);
			
};


//-------------------------------------------
void A :: set_ab(){
	a=5; b=10;
}
int A:: get_a(void){
	return a;
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
//-----------------------------------------


int main(){
	
	D d;
	d.set_ab();
	d.show_a();
	d.display();
	
	d.b=20;
	d.mul();
	d.display();
	
	return 0;
}