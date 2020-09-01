#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include "person.h"

using namespace std;
//1 m	3.281 ft	39.37 in    0.000621371192 мили

int main()
{
    srand(time(NULL));

    ofstream f1("t.txt");
    f1 << "world";
    f1.close();
    string s1;
    ifstream f2("t.txt");
    while(getline(f2,s1))
    {   cout << s1;   }


    return 0;
}



