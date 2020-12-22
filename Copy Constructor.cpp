#include<iostream>
using namespace std;
class code
{
int id;
public:
code()   //default
{
}
code(int a)   // parametric
{
id=a;
}
code(  code &x)   //copy constructor
{
id=x.id;
}
display()
{
return id;
}
};
main()
{
code A(100); // object(object)
code E(200);
code B(A);   //B=A;
code C=E;
code D;
D=A;

cout<<"value of A="<<A.display();
cout<<endl<<"value for B="<<B.display();
cout<<endl<<"value for C="<<C.display();
cout<<endl<<"value for D="<<D.display();
}
