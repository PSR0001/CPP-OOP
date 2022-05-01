#include<iostream>
#include<string>
#include<conio.h>

//using namespace 

class binary{
	private:
		std::string s;
		
	public:
		void read(void){
			std :: cout << "Enter a binary number (Ex-101010)" <<std::endl;
			std :: cin >> s;	
		}
		void chk_bin(void){
			for(int i=0;i<s.length();i++){
				if(s.at(i) != '0' && s.at(i) !='1'){
					std:: cout<< "Incorrect Binary Format .... The Program will be quit..."<<std::endl;
					getch();
					exit(0);
				}	
			}
			
		}
		void ones(void){
			chk_bin();
			//void binary ::chk_bin();
				for(int i=0;i<s.length();i++){
					if(s.at(i)=='0')
						s.at(i)=='1';
					else
						s.at(i)=='0';
					
				}
		
		
		}
		
		void displayOne(void){
			ones();
			//void binary :: ones();
			std::cout<<"The 1's compliment is "<<s<<std::endl;
			
			
		}
};


int main(){
	binary B;
	B.read();
	B.displayOne();
	getch();
	return 0;
	
}
