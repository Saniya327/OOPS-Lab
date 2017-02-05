/*4.	Write a C++ program to create a class called MATRIX using a two dimensional array of integers.
Implement the following operations by overloading the operator == which checks the compatibility of the
 two matrices to be added and subtracted. Perform the addition and subtraction by overloading the
 operators + and – respectively. Display the results by overloading the operator <<.*/


#include <iostream>

using namespace std;

class matrix
{
    int matr[10][10];
    int rows,cols;

public:
    void read(int,int);


    matrix operator +(matrix);
    matrix operator -(matrix);
    int operator ==(matrix);
   // void print();
    friend ostream& operator<<(ostream &,matrix&);
};
ostream& operator <<(ostream &out, matrix &c)
{
   int i,j;

    for(i=0;i<c.cols;i++)
   {
       for(j=0;j<c.rows;j++)
    {
        out<<c.matr[i][j]<<"\t";
    }
        out<<endl;
   }
   return out;
}
void matrix::read(int x,int y)
{
        rows=x; cols=y;
        int i,j;
        cout<<"\nEnter the elements:\n";
        for(i=0;i<cols;i++)
       {
           for(j=0;j<rows;j++)
        {
            cin>>matr[i][j];
        }
       }
       cout<<"\nThe entered matrix is:\n";
       for(i=0;i<cols;i++)
       {
            for(j=0;j<rows;j++)
            {
                cout<<matr[i][j]<<"\t";
            }
            cout<<endl;
       }

    }


matrix matrix :: operator +(matrix m)
{
    matrix sum;
    sum.cols=m.cols; sum.rows=m.rows;
    int i,j;
    for(i=0;i<cols;i++)
   {
       for(j=0;j<rows;j++)
    {
        sum.matr[i][j]=m.matr[i][j]+matr[i][j];
    }
   }
   return sum;
}

matrix matrix ::operator -(matrix m)
{
    matrix diff;
   diff.cols=m.cols; diff.rows=m.rows;
    int i,j;
    for(i=0;i<cols;i++)
   {
       for(j=0;j<rows;j++)
    {
        diff.matr[i][j]=matr[i][j]-m.matr[i][j];
    }
   }

    return diff;
}

int matrix :: operator==(matrix m)
{
    if((rows==m.rows)&&(cols==m.cols))
        return 1;
    else
        return 0;
}


int main()
{
    matrix m1,m2,m3,m4; int x,y,a,b;
    cout<<"\nEnter the number of rows and columns for first matrix: ";
    cin>>y>>x;
    m1.read(x,y);
    cout<<"\nEnter the number of rows and columns for second matrix: ";
    cin>>b>>a;
    m2.read(a,b);
    if(m1==m2)
    {
        cout<<"\nOperations are possible!\n";
        cout<<"\nThe difference of the matrices is:\n";
        m4=m1-m2;
        cout<<m4;
        cout<<"\nThe sum of the matrices is:\n";
        m3=m1+m2;
        cout<<m3;
    }    else
        cout<<"\nOperations not possible";
}
