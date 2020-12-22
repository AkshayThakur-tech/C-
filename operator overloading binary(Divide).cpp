#include<iostream>  
using namespace std;  
class A  
{  
    
    int x;  
      public:  
    A()
    {}  
    A(int i)  
    {  
       x=i;  
    }  
    void operator/(A);  
    void display();  
};  

/*void A :: display()
{
    this.x=5;
}*/

void A :: operator/(A a)  
{  
    int m = x/a.x;  //a1.x+a2.x;
    cout<<"The result of the addition of two objects is : "<<m;  
 
}  
int main()  
{  
    A a1(10);  
    A a2(5); 
   // a1.display();
    a1/a2;  //a1.+(a2);
    return 0;  
}  
