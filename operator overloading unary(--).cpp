#include <iostream>    
using namespace std;    
class Test    
{    
   private:    
      int num;    
   public:    
       Test()
       {
           num=8;
       }    
      void operator --(); 
      
       void Print()
       {     
           cout<<"The Count is: "<<num;     
       } 
};
    void Test :: operator--()
       {     
          num = num-2;     
       } 

int main()    
{    
    Test tt;    
    --tt;  // calling of a function "void operator --()"    
    tt.Print();    
    return 0;    
} 
