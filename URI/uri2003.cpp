#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;
int main()
{
    string s;
    char *ptr;
    while(getline(cin,s) != NULL)
    {
        char *token = strtok(s.c_str(), " ");
        while (token != NULL) {
            cout << token << '\n';
            token = strtok(NULL, " ");
        }
        //cout << s.c_str() << endl;

    }


    return 0;
}

