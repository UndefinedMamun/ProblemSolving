#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    int n,m,i,j,b[100][100],r;
    while(fin>>n>>m)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                fin>>b[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                r=0;
                if(b[i][j]==0)
                {
                    if(j!=0) // check left
                        b[i][j-1]==1 ? r++ : r=r;
                    if(i!=0) // check up
                        b[i-1][j]==1 ? r++ : r=r;
                    if(j!=m-1) // check right
                        b[i][j+1]==1 ? r++ : r=r;
                    if(i!=n-1) // check down
                        b[i+1][j]==1 ? r++ : r=r;
                    fout<<r;

                }
                else
                    fout<<9;
            }
            fout<<endl;
        }
    }
    return 0;

}
