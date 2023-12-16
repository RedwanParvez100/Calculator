#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;
int sum()
{
    double i,j,sum=0;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  n u m b e r s : ";
    for(j=1; j<=50; j++)
    {
        //cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cin>>i;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";

        if(i==0)
        {
            break;
        }

        if(i>=0)
        {
            sum=sum+i;
            cout<<"+";
        }
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   S U M = "<<sum<<"\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";

    cout<<"\n\n\n\n\n\n";
}
int sub()
{
    double i,j,sub=0;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  n u m b e r s : ";
    for(j=1; j<=50; j++)
    {
        if(sub==0)
        {
            cout<<"-";
        }
        cin>>i;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";

        if(i==0)
        {
            break;
        }

        if(i>=0)
        {
            sub=sub-i;
            cout<<"-";
        }
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   S U B = "<<sub<<"\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";
}
double sumsub()
{
    char num[1];
    double i,j,sub=0,sum=0;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  n u m b e r s : ";
    for(j=0; j<=50; j++)
    {
        cin>>num;
        if(num[0]!='0')
        {
            i=atoi(num);
        }
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";

        if(i==0)
        {
            break;
        }

        if(j<=i)
        {
            sum=sum+i;
        }

        if(j>=i)
        {
            sub=sub-i;
        }
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   T O T A L = "<<sum-sub<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";
}
int mult()
{
    char num[1];
    double i,j,mult=1;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  n u m b e r s : ";
    for(j=1; j<=50; j++)
    {
        cin>>num;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
        if(num[0]!='0')
        {
            i=atoi(num);
        }
        if(i==0)
        {
            break;
        }

            mult=mult*i;
            cout<<"*";
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   M U L T = "<<fixed<<setprecision(3)<<mult<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";
}
int Div()
{
    char exit[1];
    double i,j,div=1;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  n u m b e r s  : ";
    for(j=1; j<=50; j++)
    {
        cin>>exit;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
        if(exit[0]!= 'r')
        {
            i = atoi(exit);
            div=div/i;
            cout<<"/";
        }

        if(exit[0] == 'r' )
        {
            break;
        }

    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   D I V  = "<<fixed<<setprecision(3)<<div<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";
}

 double Pow(float a,float b)
{
    int m=1,i;
    for(i=0; i<b; i++)
        m*=a;
    return m;
}
int sqr(float a)
{
    cout<<pow(a,2)<<endl;
}
int sqrcube(float a)
{
    cout<<pow(a,3)<<endl;
}
double Inverse()
{
    double a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<(1/a)<<endl;
}
double sqroot()
{
    double a;
    cout<<"Input a number:";
    cin>>a;
    cout<<"Square Root = "<<sqrt(a)<<endl;
}
double Sin()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==0||degree==180||degree==360||degree==540||degree==720||degree==900)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   sin("<<degree<<")= "<<"0\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   sin("<<degree<<")= "<<fixed<<setprecision(3)<<sin(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Cos()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==90||degree==270||degree==450||degree==630||degree==810)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cos("<<degree<<")= "<<"0\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cos("<<degree<<")= "<<fixed<<setprecision(3)<<cos(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Tan()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==90||degree==270||degree==450||degree==630||degree==810)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   tan("<<degree<<")= "<<"1/0\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   tan("<<degree<<")= "<<fixed<<setprecision(3)<<tan(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Sec()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==90||degree==270||degree==450||degree==630||degree==810)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   sec("<<degree<<")= "<<"1/0\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   sec("<<degree<<")= "<<fixed<<setprecision(3)<<1/cos(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Cosec()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==0||degree==180||degree==360||degree==540||degree==720)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cosec("<<degree<<")= "<<"1/0\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cosec("<<degree<<")= "<<fixed<<setprecision(3)<<1/sin(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Cot()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==0||degree==180||degree==360||degree==540||degree==720)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cot("<<degree<<")= "<<"1/0\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cot("<<degree<<")= "<<fixed<<setprecision(3)<<1/tan(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Log()
{
    double a;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  a  n u m b e r  : ";
    cin>>a;
    cout<<"Log("<<a<<")="<<log(a);
}
double Baselog()
{
    double a;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  a  n u m b e r  : ";
    cin>>a;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    cout<<"Baselog("<<a<<")="<<log10(a);
}
double Case()
{
    int c;
    float a,b;
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tC h o o s e  A  o p t i o n ....";
    cin>>c;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    system("cls");
    switch(c)
    {
    case 1:
        sumsub();
        break;
    case 2:
        mult();
        break;
    case 3:
        Div();
        break;
    case 4:
        cout<<"Enter the number : ";
        cin>>b;
        sqr(b);
        break;
    case 5:
        cout<<"Enter the number : ";
        cin>>a;
        sqrcube(a);
        break;
    case 6:
        double x,y;
        cout<<"Enter the number 1: ";
        cin>>x;
        cout<<"Enter the number 2: ";
        cin>>y;
        cout<<pow(x,y);
        break;
    case 7:
        Inverse();
        break;
    case 8:
        sqroot();
        break;
    case 9:
        Sin();
        break;
    case 10:
        Cos();
        break;
    case 11:
        Tan();
        break;
    case 12:
        Sec();
        break;
    case 13:
        Cosec();
        break;
    case 14:
        Cot();
        break;
    case 15:
        Log();
        break;
    case 16:
        Baselog();
        break;
    default:
        cout<<"Wrong Input"<<endl;
    }
}
void Admin()
{
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"C A L C U L A T O R"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"------------------------------------"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t1.  S U M   +   S U B (+,-)"<<"                                                            2.  M U L T I P L I C A T I O N (*)"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t3.  D I V I S I O N (/)"<<"                                                                4.  S Q U A R E (X^2)"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t5.  S Q U A R E   C U B E (X^3)"<<"                                                        6.  P O W E R (X^y)"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t7.  I N V E R S E (1/X)"<<"                                                                8.  S Q U A R E   R O O T (sqrt(x))"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t9.  S I N"<<"                                                                             10.  C O S"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t11.  T A N"<<"                                                                             12.  S E C"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t13.  C O S E C"<<"                                                                         14.  C O T"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t15.  L O G"<<"                                                                             16.  B A S E  L O G "<<endl;
}

int main()
{
    int num,i;
    // Admin();
    //Case();
    for(i=1; i<50; i++)
    {
        if(i>=2)
        {
            cout<<"press 1 to continue...";
            cout<<"press 2 for exit.";
            cin>>num;
            if(num==1)
            {
                Admin();
                Case();
            }
            if(num==2)
            {
                break;
            }
        }
        if(i==1)
        {
            cout<<"press 1 for open calculator";
            cin>>num;
            if(num==1)
            {
                Admin();
                Case();
            }
            if(num==2)
            {
                break;
            }
        }

    }

    return 0;
}
