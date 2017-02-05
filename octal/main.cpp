/*9. Write a C++ program to create a class called OCTAL, which has the characteristics of an octal

number. Implement the following operations by writing an appropriate constructor and an

overloaded operator +.

                        i. OCTAL h = x ; where x is an integer
                        ii. int y = h + k ; where h is an OCTAL object and k is an integer.

Display the OCTAL result by overloading the operator <<. Also display the values of h and y.*/



#include <iostream>
using namespace std;
#include<math.h>

class octal
{
    int oct;
public:
    octal(){}
    octal(int n)
    {
        int i=1;
        int rem;
        //int oct;
        while(n!=0)
        {
            rem=n%8;
            n/=8;
            oct+=rem*i;
            i*=10;

        }
    }
    /*octal operator +(int x)
    {
        octal o2;
        o2.num=x+num;
        return o2;
    }*/

    friend ostream& operator<<(ostream&,octal&);

    /*operator int()
    {
        //int y=0;
        int i,sum;
        cout<<"\nNumber of digits in octal is: "<<cou;
        for(i=0;i<=cou;i++)
        {
            sum+=oct[i]*pow(8,i);
        }
        return sum;
    }*/

};

ostream& operator<<(ostream &out,octal &h)
{
    out<<h.oct;
    return out;
}

int main()
{
    int y;
    cout<<"\nEnter the values to be converted: ";
    cin>>y;
    octal h(y);
    cout<<"\nThe octal value is: ";
    cout<<h;
   /* int k,a;
    cout<<"\n Enter another integer to be added to the octal object: ";
    cin>>a;
    k=h+a;
    cout<<"\n sum of int and oct is: "<<k;*/
}

