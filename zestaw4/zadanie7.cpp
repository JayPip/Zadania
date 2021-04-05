

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;


int main()
{
    srand(time(NULL) );
    int n=12;

    int arr[n] ;

    for(int i =0; i <n; i++)arr[i] = rand()%10 +1;
    for(int i =0; i<n ; i++)cout<<arr[i]<<endl;

    for(int i= 0; i < n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }


        }

    }

    cout<<"posortowana"<<endl;
    for(int i =0; i<n ; i++)cout<<arr[i]<<endl;

  return 0;
}
