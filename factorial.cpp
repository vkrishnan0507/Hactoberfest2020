#include <iostream.h> 
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number, you want to know the factorial: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of the number " <<number<<" you entered is: "<<fact<<endl;  
  return 0;  
}  
