#include <string>
#include <sstream>
#include <ostream>
#include<stdio.h>
#include<conio.h>
#include <iostream>
#include <fstream>
#include <algorithm>


bool check(int ar[60],int s,int n)
{
    int i;
    for(i=0;i<s;i++)
    {
        if(ar[i]==n)
        {
            return true;
        }
    }
    return false;
}
using namespace std;
int main()
{
    int a[60]= {4,1,1,1},b[5]= {1,1,2,2,2},i,j,r[60];
    if(check(a,4,2))
        cout<<"found";
    else
        cout<<"not found";
    return 0;
}

