#include<iostream>
using namespace std;

class abc
{
public:
    static int a;
    int b;
    void fun()
    {
        cout<<++a<<" "<<++b<<endl;
    }
     abc()
    {
        b=0;
    }
};

int abc::a;
int main()
{
    abc ob;
    ob.fun();
    ob.fun();
    ob.fun();
    return 0;
}
