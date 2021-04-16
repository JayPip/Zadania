#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
srand(time(NULL));
int n=7;
int C[n][n];
float maxw;
float maxk;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        C[i][j]= rand()%21-10;
    }


}


for(int i =0; i<n; i++)
{
    for(int j=0; j<n; j++){cout<<C[i][j]<<" ";
}
cout<<endl;
}

cout<<"------------------------------"<<endl;

for(int i=0;i<n;i++){
    maxw=0;
    for(int j=0; j<n; j++){
        maxw+=C[i][j];
    }
    maxw=maxw/n;
    cout<<"średnia elementów w "<<i+1<<" wierszu wynosi "<<maxw<<endl;
}

cout<<"---------------------------"<<endl;

for(int j=0; j<n;j++)
{   maxk=0;
    for(int i=0;i<n; i++){
        maxk+=C[i][j];
    }
    maxk=maxk/n;
    cout<<"średnia elementow w "<<j+1<<" kolumnie wynosi "<<maxk<<endl;
}



return 0;
}
