#include<iostream>
using namespace std;


//declear the class
class time{
	 int hour;
	 int minutes;
	 
	 public:
			void getTime(int h=0 , int m=0)
			{hour = h; minutes =m;}
			
			void putTime(void){
				cout<<hour ;
				(hour == 1 ? cout<<" hour and " : cout<< " hours and " );
				cout<< minutes << " minutes ";
				cout<<endl;
			}
			void sum(time , time);
};

void time :: sum (time T1, time T2){
	minutes = T1.minutes + T2.minutes;
	hour = minutes/60;
	minutes = minutes%60;
	hour = hour + T1.hour + T2.hour;
}


int main(){
	
	time t1,t2;
	
	t1.getTime(2,45);
	t2.getTime(3,30);
	
	t2.sum(t1,t2);
	
	cout<< "Time : " ; t1.putTime();
	cout<< "Time : " ;  t2.putTime();
	//cout<< "Time : " ;  t3.putTime();
		   
	return 0;
}





