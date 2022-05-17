#include<iostream>
#include<cmath>
using namespace std;

int main(){
	cout.fill('*');
	cout.setf(ios::left,ios::adjustfield);
	cout.width(10);
	cout<<"VALUE";
	
	cout.setf(ios::right,ios::adjustfield);
	cout.width(10);
	cout<<"SORT OF VALUE";
	
	cout.fill('.');
	cout.precision(40);
	cout.setf(ios::showpoint);
	cout.setf(ios::showpos);
	cout.setf(ios::fixed,ios::floatfield);
	
	for(int i=1;i<=10;i++){
		cout.setf(ios::internal,ios::adjustfield);
		cout.width(5);
		cout<<i;
		cout.setf(ios::right,ios::adjustfield);
		cout.width(20);
		cout<<sqrt(i)<<endl;
		
	}
	
	cout.setf(ios::scientific,ios::floatfield);
	cout<<"\n SQRT(100) = "<<sqrt(100)<<endl;
		   
	
	return 0;
}
