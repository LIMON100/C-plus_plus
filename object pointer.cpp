#include<iostream>
using namespace std;

class rectangla
{
    int height,width;
public:
    void set(int a,int b)
    {
        height=a;
        width=b;
    }
    int area()
    {
        return height*width;
    }
} ;

int main()
{
    rectangla *p;

    rectangla obj[5];
    obj[0].set(1,2);
     obj[1].set(2,2);
      obj[2].set(3,2);
       obj[3].set(4,2);
        obj[4].set(5,2);

    p=obj;

    for(int i=0;i<5;i++)
        cout<<i<<" = "<<(p+i)->area()<<endl;

    return 0;
}
