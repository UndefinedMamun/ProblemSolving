#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    long long int x,y,xs,ys,xl,yl;
    double slmax, llmax;
    cin>>n;
    cin>>x>>y;
    slmax = sqrt((x*x)+(y*y));
    llmax = slmax;
    xs=x;
    xl=x;
    ys=y;
    yl=y;
    --n;
    while(n--)
    {
        cin>>x>>y;
        double length = sqrt((x*x)+(y*y));
        if(y<ys || x<xs)
        {
            if(length<slmax)
            {
                xs=x;
                ys=y;
            }
        }
        else if(y>yl || x>xl)
        {
            if(length>llmax)
            {
                yl=y;
                xl=x;
            }
        }

        //// try to calculate the length from 0,0 and then asign xl,xs,ys,yl
    }
    cout<<"xs = "<<xs<<" ys = "<<ys<<endl;
    cout<<"xl = "<<xl<<" yl = "<<yl<<endl;
    return 0;
}
