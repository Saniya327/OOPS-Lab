#include<iostream>
#include<math.h>
using namespace std;

class octal
{
    int oct,dec,ten;
  public:
    octal(int x)
    {
        oct=0;
        ten=1;
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
    //void operator=(int);
   int o_d(int y)
    {
        int r; int i;
        r=oct%10;
        oct=oct/10;
        dec += r*pow(8,i);
        i++;
        return dec;
    }
    int operator+(int);
    friend ostream& operator<<(ostream&,octal& c);
};

int octal::operator+(int k)
{
    octal i(k);
    return(oct+i.oct);

}

ostream& operator<<(ostream&s,octal&c)
{
    s<<c.oct;
    return s;
}

int main()
{
    //octal h;
    int n,k;
    cout<<"enter a integer to change to octal:";
    cin>>n;
    cout<<endl;
    //h=n;
    octal h(n);
    cout<<"the octal value of"<<n<<"is="<<h<<endl;
    cout<<"enter any integer k to be added to previous octal:";
    cin>>k;
    cout<<endl;
    int y=h+k;
    cout<<"result of octal h+int k is:"<<y;
    cout<<"\nIn int= "<<h.o_d(y);
    return 0;
}
