#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n[3];
    n[0]=a;
    n[1]=b;
    n[2]=c;
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(n[i]<n[j])
            {
                int temp = n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }
    if(n[0]>=n[1]+n[2])
    {
        cout<<"Invalido"<<endl;
    }
    else
    {
        cout<<"Valido-";

        if(a==b && b==c)
            cout<<"Equilatero\n";
        else if(a==b || b==c)
            cout<<"Isoceles\n";
        else
        {
            cout<<"Escaleno\n";
        }


        int l=n[0]*n[0];
        int r=(n[1]*n[1])+(n[2]*n[2]);
        if(l==r)
            cout<<"Retangulo: S\n";
        else
            cout<<"Retangulo: N\n";
    }

    return 0;
}


