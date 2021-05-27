#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;


int main(){
 srand (time(NULL));
int size1;
int size2;
int size3;
cin>>size1>>size2>>size3;


int ***array = new int**[size1];
for(int i =0; i<size1 ; i++){
    array[i] = new int*[size2];
    for(int j=0; j<size2; j++){
        array[i][j] = new int[size3];
        for(int k = 0; k<size3; k++ ){
            array[i][j][k] = rand()%101;
            cout<<array[i][j][k]<<" ";
 
        }
        cout<<endl;

    }


}





delete[] array;
 

return 0;
}