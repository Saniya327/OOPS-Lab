#include<iostream>

using namespace std;

class octal

{

int oct,dec,ten;

public:

octal()

{

oct=0;

ten=1;

}

void operator=(int);

int operator+(int);

friend ostream& operator<<(ostream&,octal& c);

};

void octal::operator=(int x)

{

int r;

dec=x;

while(x!=0)

{

r=x%8;

x=x/8;

oct=oct+ten*r;

ten=ten*10;

}

}

int octal::operator+(int k)
{

return(dec+k);

}

ostream& operator<<(ostream&s,octal&c)

{

s<<c.oct;

return s;

}

int main()

{

octal h;

int n,k;

cout<<"enter a integer to change to octal:";

cin>>n;

cout<<endl;

h=n;

cout<<"the octal value of"<<n<<"is="<<h<<endl;

cout<<"enter any integer k to be added to previous octal:";

cin>>k;

cout<<endl;

int y=h+k;

cout<<"result of octal h+int k is:"<<y;

return 0;

}
