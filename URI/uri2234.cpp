#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int hotDogs, participants;
    cin>>hotDogs>>participants;
    cout<<fixed<<setprecision(2)<<((double)hotDogs/participants)<<endl;
    return 0;
}
