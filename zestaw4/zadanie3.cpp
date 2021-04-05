

#include <iostream>

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

    int m;
    cout<<"Podaj o ile pol przesunac w prawo"<<endl;
    cin>>m;

    while(m){
        int temp = arr[n-1];
        for(int i = n-1; i>0; i--)arr[i] = arr[i-1];
        arr[0] =temp;

        m--;
    }

    for(int i = 0; i<n;i++){


        cout<<arr[i]<<endl;
    }


  return 0;
}
