#include<bits/stdc++.h>
using namespace std;

void add(float a,float b)
{
    float c=a+b;
    cout<<"Addition is "<<c<<endl;
}

void subtraction(float a,float b)
{
    if(a>b)
    {
        cout<<"Subtraction is "<<a-b<<endl;
    }

    else 
    {
        
        cout<<"Subtraction is -"<<(b-a)<<endl;
    }
}

void Multiplication(float a,float b)
{
    cout<<"Multiplication is "<<a*b<<endl;
}

void division(float a,float b)
{
    if(b==0)
    {
        cout<<"Division is : Infinity"<<endl;
    }

    else
    {
        cout<<"Division is "<<a/b<<endl;
    }
}
int main()
{
   char ch;
    float x,y;
    A:
    cout<<"Enter the first element ";
    cin>>x;
    cout<<"Enter the second Element ";
    cin>>y;
    cout<<"+ to add \n"<<"- to substract\n"<<"* to multiply\n"<<"/ to divide\n";
    cin>>ch;
    switch(ch)
    {
        case '+':
        add(x,y);
        break;

        case '-':
        subtraction(x,y);
        break;

        case '*':
        Multiplication(x,y);
        break;

        case '/':
        division(x,y);
        break;

        default:
        cout<<"Thank you for using my calculator "<<endl;
    }

    goto A;
}