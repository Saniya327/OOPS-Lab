#include <iostream>
#include<string.h>

using namespace std;


/*6. Write a C++ program to create a class called STRING and implement the following operations. Display the results after every operation by overloading <<.
i) STRING s1 = “ISE”
ii) STRING s2 = “MSRIT”
iii) STRING s3 = s1+s2 (Use copy constructor)*/

class str
{
    char *p;
    int len;
public:

    str() {len=0;p=0;}
    str(char *s);
    str(str &s);
    ~str(){delete p;}
    friend str operator +(str &s, str &t);
    friend void show(str s);
};

str :: str(char *s)
{
    len=strlen(s);
    p=new char[len+1];
    strcpy(p,s);
}

str::str(str &s)
{
    len=s.len;   //str temp??
    p=new char[len+1];
    strcpy(p,s.p);  //??
}

str operator +(str &s, str &t)
{
    str temp;
    temp.len=s.len+t.len;
    temp.p=new char[temp+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return(temp);
}

void show(str s)
{
    cout<<s.p;
}

/*int operator <=(str &s, str &t)
{
    int m=strlen(s.p);
    int n=strlen(t.p);
    if(m<=n)
        return 1;
    else
        return 0;
}*/

int main()
{
    str t1,t2,t3;
    str s1="ISE";
    str s2="MSRIT";
    //str s3="Delhi";
    t1=s1;
    t2=s2;
    t3=s1+s2;
    cout<<"\nt1= "; show(t1);
    cout<<"\nt2= "; show(t2);
    cout<<"\nt3= "; show(t3);
    /*if(t1<=t3)
    {
        show(t1);
        cout<<" Smaller than ";
        show(t3);
    }
    else
        {
            show(t3);
            cout<<" Smaller than ";
            show(t1);
        }*/

}
