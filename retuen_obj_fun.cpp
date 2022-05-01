#include<iostream>
using namespace std;

class matrix{
	int m[3][3];
	public:
		void getData(void){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<"m["<<i<<"]["<< j<<"] = ";
					cin>>m[i][j];
				}
			}
		}
		void Display(void){
			for(int i=0;i<3;i++){
				cout<<endl;
				for(int j=0;j<3;j++){
					cout<<m[i][j]<<"\t";
				}
			}
		}
		
		friend matrix trans (matrix);
	
};

  matrix trans(matrix X1){
	  matrix X2;
	  for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					X2.m[i][j] = X1.m[j][i];
				}
			}
			
	return(X2);
  }


int main(){
	
	matrix m1,m2;
	
	m1.getData();
	cout<< "You Entered the Following value "<<endl;
	m1.Display();
	
	m2 = trans(m1);
	
	cout<< endl<<"Transpose Mattrix : "<<endl;
	
	m2.Display()  ;
		   
	
	return 0;
}
