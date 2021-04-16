#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
srand(time(NULL));
int n=7;
int C[n][n];

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


return 0;
}




