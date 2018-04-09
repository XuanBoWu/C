#include <iostream>
using namespace std;
void sort(int &a,int &b)
{
    int temp;
    if (a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
}
void sort(int &a,int &b,int &c)
{
    int temp[3];
    if (b>a)
    {
       temp[0] = a;
       temp[1] = b;
    if (c>b)
       temp[2] = c;
    else
     {
       if (c<a)
       {
         temp[0] = c;
         temp[1] = a;
         temp[2] = b;
       }
       else
       {
         temp[1] = c;
         temp[2] = b;
       }
     }
    }
    else
    {
    temp[0] = b;
    temp[1] = a;
    if (a>c)
    {
        if (b>c)
        {
            temp[0] = c;
            temp[1] = b;
            temp[2] = a;
        }
        else
        {
            temp[1] = c;
            temp[2] = a;
        }
    }
    else
      temp[2] = c;
    }
    a = temp[0];
    b = temp[1];
    c = temp[2];
}

int main()
{
    int a,b;
    int c,d,e;
    cout<<"请输入两个整数："<<endl;
    cin>>a>>b;
    sort(a,b);
    cout<<"排序之后："<<a<<" "<<b<<" "<<endl;
    cout<<"请输入三个整数："<<endl;
    cin>>c>>d>>e;
    sort(c,d,e);
    cout<<"排序之后："<<c<<" "<<d<<" "<<e<<" "<<endl;

    return 0;
}

