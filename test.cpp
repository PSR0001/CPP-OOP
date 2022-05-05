#include <iostream>  
using namespace std;  
int main()  
{  
  int *names[5];  
  
for(int i=0;i<5;i++)  
    {  
        std::cin >> *names[i];  
    }

for(int i=0;i<5;i++)  
    {  
        std::cout << names[i] << std::endl;  
    }

	
    return 0;  
} 