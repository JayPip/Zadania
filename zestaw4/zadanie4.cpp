#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;


int main()
{

    srand(time(NULL) );

    int arr[12] ;

    for(int i =0; i <12; i++)arr[i] = rand()%10 +1;

    for(int i =0; i <12; i++) cout<<arr[i]<<endl;


  return 0;
}
