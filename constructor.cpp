#include<iostream>
using namespace std;
class integer
{
int a,b;   //member data
public:  integer(int i, int j)
        {
        a=i;
        b=j;
        }
add()
{
    cout<<(a+b);

}
};
main()
{
integer i1(10,12);
i1.add();
}
