#include <iostream>
#include <math.h>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    double p,n,a;
    ifstream in;
    ofstream output;
    in.open("in.txt");
    output.open("out.txt");
    while(in>>p>>n)
    {
        a=pow(n,1/p);
        output<<fixed<<setprecision(0)<<a<<endl;
    }
    return 0;
}
