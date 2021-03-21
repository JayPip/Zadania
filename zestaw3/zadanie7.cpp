




#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n;
int num = 1;
int primeCount = 0;


cin>> n;

cout<< 1 << '\n';


for(int j = 1; j <= n; j++)
{
    num++;
    primeCount = 0;

    for(int i = 1; i <= num; i++)
    {

        if(num % i == 0)
        {
            primeCount++;
        }
    }
        if(primeCount == 2)
        {
            cout<< num << '\n';
        }
}
return 0;
}

