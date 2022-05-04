/*
#	not running :: not found what happen
*/

#include<iostream>
using namespace std;

const int size = 3;

class vector{
		  int v[size];
		  public:
				vector();
				vector(int *x);
				friend vector operator*(int a,vector b);
				friend vector operator*(vector a,int b);
				friend istream & operator >>(istream & , vector &);
				friend ostream & operator <<(ostream & , vector &);
};

vector::vector(){
	for(int i=0;i<size;i++)
		v[i]=0;
}
vector::vector(int *x){
	for(int i=0;i<size;i++)
		v[i]=x[i];
}

vector operator*(int a,vector b){
	vector c;
	for(int i=0;i<size;i++)
		c.v[i]=a*b.v[i];
	return c;
}

vector operator*(vector a, int b){
	vector c;
	for(int i=0;i<size;i++)
		c.v[i]=a*b.v[i];
	return c;
}

istream & operator >> (istream &din , vector &b){   
	for(int i=0;i<size;i++)
		din >> b.v[i];
	return(din);
	
}

ostream & operator << (istream &dout , vector &b){

	dout<<"("<<b.v[0];
	
	for(int i=1;i<size;i++)
		dout <<", " << b.v[i];
	dout<<")";
	return(dout);
	
}

int x[size]={2,4,6};


int main(){
	
	cout<<"hi guys"<<"\n";	   
	
	return 0;
}
