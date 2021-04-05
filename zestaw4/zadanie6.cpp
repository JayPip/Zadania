
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;


int main()
{

  srand(time(NULL) );

    int arr[12] ;

    for(int i =0; i <12; i++)arr[i] = rand()%10 +1;
    for(int i =0; i<12 ; i++)cout<<arr[i]<<endl;


    int maks;
    int counter1 =0;
    int counter2 =0;

    for(int i = 0 ; i < 12 ; i++){

        for(int j = 0 ; j < 12 -i ; j++){
        if(arr[j] == arr[i] ) counter1 ++;




        }
        if(counter1>counter2){
        counter2= counter1;
        maks = arr[i];
        }



    }



    cout<<maks<<endl;

  return 0;
}
