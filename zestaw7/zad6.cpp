#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;


int main(){


int size1;
int size2;
int arr1[size1];
int arr2[size2];

cout<<"Podaj wielkość tabeli 1 i 2:"<<endl;
cin>>size1>>size2;
cout<<"Podaj elementy 1 tabeli:"<<endl;

int *p = arr1;
int i =0;
while(i<size1){
    cin>>*p;
    p++;
    i++;
}
i=0;
p=arr2;

cout<<"Podaj elementy 2 tabeli:"<<endl;
while(i<size2){
    cin>>*p;
    p++;
    i++;

}

        i = 0;
    int j = 0;
    p=arr1;
    int *b =arr2;
    for (i = 0; i < size1; i++) {
        b=arr1;
        for (j = 0; j < size2; j++) {
            if (*p == *b)
                break;
            
            b++;
        }

        if (j == size2){
            cout<<"nie zawiera sie"<<endl;
            return 0;
        }
            
        p++;
    }
 
    cout<<"zawiera sie"<<endl;
    return 1;


}