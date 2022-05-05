#include<iostream>
//#include<cstring>
#include<string.h>
using namespace std;

class media{
	
	protected:
	   char title[50];
	   float price;
	   
	public:
			//constructor
			media(char *s, float a){
				strcpy(title,s);
				price=a;
			}
			
	virtual void display(){
		
	}			
};
//inhritance
class books:public media{
	int pages;
	public:
		books(char *s,float a, int p):media(s,a){
			pages=p;
		}
		void display();	
};

class tape : public media{
	float time;
	public:
		tape(char *s,float a, float t):media(s,a){
			time = t;
		}
		void display();
};

void books :: display(){
	cout<<"\n Title "<<title<<endl;
	cout<<"\n Pages "<<pages<<endl;
	cout<<"\n Price "<<price<<endl;
}

void tape :: display(){
	cout<<"\n Title "<<title<<endl;
	cout<<"\n Play Time "<<time<<endl;
	cout<<"\n Price "<<price<<endl;
}



int main(){
	
	char *title = new char[50];
	float price,time;
	int pages;
	
	//book details:
	cout<<"\n Enter the Book Details"<<endl;
	cout<< "Title : "; cin>>title;
	cout<< "Price : "; cin>>price;
	cout<< "Pages : "; cin>>pages;
	//creating book obj
	books book1(title,price,pages);
	
	//Tape details
	cout<< "\n \n Enter tape details "<<endl;
	cout<< "Title : "; cin>>title;
	cout<< "Price : "; cin>>price;
	cout<< "Play Time : "; cin>>time;
	//create a tape obj
	tape tape1(title,price,time);
	
	media *list[2];
	list[0]=&book1;
	list[1]=&tape1;
	
	//media details
	cout<<"MEDIA DETAILS"<<endl;
	
	cout<<"----------Book---------"<<endl;
	list[0]->display();
	
	cout<<"----------Tape---------"<<endl;
	list[1]->display();
	
	
		   
	
	return 0;
}