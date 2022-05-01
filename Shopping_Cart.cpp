#include<iostream>
#include<conio.h>
using namespace std;

const int M=10;

//define a class ITEM
class ITEM{
	int count;
	int itemCode[M];
	float itemPrice[M];
	//string s;
	public:
		void CMT(void){count=0;}
		void getItem(void);
		void displaySum(void);
		void remove(void);
		void displayItem(void);
		void intro(string s="welcome",char c='#',int x=40); //default arguments
		void end(string s="Thank You!",char c='=',int x=40);
};

void ITEM :: getItem(void){ //get the item
	
	cout<<"Enter Item code : "<<endl;
	cin>>itemCode[count];
	cout<<"Enter Item cost : "<<endl;
	cin>>itemPrice[count];
	count++;
	
}
void ITEM :: displaySum(void){ //display all the item 

    float sum=0;
	for (int i=0; i<count; i++){
		sum = sum + itemPrice[i];
	}
	cout<<"Total Value of the all ITEMS : "<<sum<<endl;
		
}
void ITEM :: remove(void){
	int num;
	cout<<"Enter item code to remove : " << endl;
	cin>>num;
	
	for(int i = 0; i<count ; i++){
		if(itemCode[i] == num){
			itemCode[i] == 0;
			itemPrice[i] == 0;
		}
	}
}

void ITEM ::displayItem(void){
	
	cout<<"All the Item : " <<endl;
	
	for(int i=0;i<count; i++){
		cout<<"Item Code : " <<itemCode[i]<<endl;
		cout<<"Item Code : " <<itemPrice[i]<<endl;
	}
	
	cout<<endl;
}

void ITEM :: intro(string s,char c,int x){
	for(int i=0; i< x/2; i++)
		cout<<c;
	
	cout<<" "<<s<<" ";
	
	for(int i=0; i< x/2; i++)
		cout<<c;
	
	cout<<endl;
}

void ITEM :: end(string s,char c,int x){
	for(int i=0; i< x/2; i++)
		cout<<c;
	
	cout<<" "<<s<<" ";
	
	for(int i=0; i< x/2; i++)
		cout<<c;
	
	cout<<endl;
}



int main(){
	ITEM order;
	order.CMT();
	int x=0;
	
	order.intro("welcome to shop-kart");
	
	cout<<"You can Do the following "<<endl;
	cout<<"1 : Add a item. "<<endl;
	cout<<"2 : Display total value. "<<endl;
	cout<<"3 : Delete a item. "<<endl;
	cout<<"4 : Display all the items. "<<endl;
	cout<<"5 : Quit. "<<endl<<endl;
	
	do{             //do ... While loop
		cout<<"What is Your Options ? ";
		cin>>x;
		cout<<endl;
		
		switch(x){
			
			case 1: order.getItem(); break;
			case 2: order.displaySum(); break;
			case 3: order.remove(); break;
			case 4: order.displayItem(); break;
		    case 5: 
				cout<<"Press any key to exit"<<endl;
				getch();
				break;
			default:
				cout<<"Error in input : try again " <<endl;
		}	
	}
	while(x != 5);
	order.end("Thank You Come Again",'-',50);
	return 0;
}