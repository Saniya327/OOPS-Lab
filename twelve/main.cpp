#include<iostream>

#include<stdlib.h>

using namespace std;

class account

{

char name[20];

int acn;

float acb1,acb2,d,w;

public:

void getdata()

{

cout<<"\nEnter the name of the account holder";

cin>>name;

cout<<"\nEnter the acount no.";

cin>>acn;

cout<<"\nEnter the amount to be deposited";

cin>>acb1;

//acb2=acb1;

}

void deposit()

{

cout<<"\nEnter the amount to be deposited";

cin>>d;

acb1=acb1+d;

}

void withdraw()

{

cout<<"\nThe total amount in this bank account is: "<<acb1;

cout<<"\nEnter the amount to be withdrawn";

cin>>w;

try

{

if(w>acb1)

throw w;

else

acb1=acb1-w;

}

catch(float)

{

cout<<"\nWithdraw amount is more than the balance amount\n";

}

}

void putdata()

{

cout<<"\nThe name of the account holder is: "<<name;

cout<<"\nThe acount no. is: "<<acn;

cout<<"\nThe total amount in this bank account is: "<<acb1;

}

};

int main()

{

account a;

int x;

a.getdata();

for(;;)

{

cout<<"\nTo deposit press 1\nTo withdraw press 2\nTo display press 3\nTo exit press 4\n";

cin>>x;

if(x==1)

a.deposit();

else if(x==2)

a.withdraw();

else if(x==3)

a.putdata();

else if(x==4)

exit(0);

}

return 0;

}
