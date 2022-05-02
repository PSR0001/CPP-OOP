#include<iostream>
#include<string.h>

using namespace std;

class String{
	char *name;
	int length;
	
	public:
			String(){
				length = 0;
				name = new char[length + 1];
			}
			
			String(char *s){
				length = strlen(s);
				
				name = new char[length + 1];
				
				strcpy(name,s);
			}
			
			void Display(){cout<<name<<"\n";}
			
			void join(String &a, String &b);
			
			
};

void String :: join(String &a, String &b){
	
	length = a.length + b.length;
	delete name ;
	name = new char[length + 1];
	
	strcpy(name , a.name);
	strcat(name, b.name);
	
}



int main(){
	
	char *first  ;
			   
	
	String name1(first) , name2(" is a "),name3("good boy"),s1,s2;
	
	//Display all the object 
	name1.Display();
	name2.Display();
	name3.Display();
	
	s1.join(name1,name2);
	s2.join(s1,name3);
	
	s1.Display();
	s2.Display();
	  
	
	return 0;
}
