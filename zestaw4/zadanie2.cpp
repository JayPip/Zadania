

#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int n=5;
    int arr [n];

    for(int i = 0; i<n;i++){
        if((2*i+1)<=9)
        arr[i]= 2*i +1;

        cout<<arr[i]<<endl;


    }
    cout<<"----------"<<endl;
    reverse(arr, arr+ n );

    for(int i=0; i< n; i++) cout<<arr[i]<<endl;

  return 0;
}
