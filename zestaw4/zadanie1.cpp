

#include <iostream>
#include<math.h>
using namespace std;

int mean(int arr[]){

    int counter =0;

    int n =sizeof(arr);

    for(int i =0; i< n; i++){
        counter += arr[i];

    }

    return counter/(n+1);
}

int meanGeo(int arr[]){

    int counter = 0;
    int n =sizeof(arr);
    for(int i =0; i< n; i++){
        counter += arr[i];
    counter = pow(counter, -n);

    return counter;
}

}


int rms(int arr[]){
    int counter = 0;
    int n =sizeof(arr);
    for(int i =0; i< n; i++){
        counter += pow(arr[i], 2);

    };

    counter = sqrt(counter/n);

    return counter;

}

int meanH(int arr[]){

    int counter =0;
    int n =sizeof(arr);
    for(int i =0; i< n; i++){
        counter += 1/arr[i];

    }

    return ((n+1)/counter);
}



int main()
{
    int n=5;
    int arr [n];

    cout<<"Tab A:"<<endl;

    for(int i = 0; i<n;i++){
        if((2*i+1)<=9)
        arr[i]= 2*i +1;

        cout<<arr[i]<<endl;


    };


    cout<<"srednia arytmetyczna:"<<endl;
    cout<<mean(arr)<<endl;

    cout<<"srednia geometyrczna:"<<endl;
    cout<<meanGeo(arr)<<endl;

    cout<<"srednia kwadratowa:"<<endl;
    cout<<rms(arr)<<endl;

    cout<<"srednia harmoniczna:"<<endl;
    cout<<meanH(arr)<<endl;

  return 0;
}

