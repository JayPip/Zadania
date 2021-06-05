#include <iostream>

#include<cmath>

using namespace std;

bool func(int a, int b){
    int sumaa=0;
    int sumab=0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0)sumaa+=1;
    }
    for(int j=1;j<=b/2;j++){
        if(b%j==0) sumab+=j;
    }
    if(sumaa=b && sumab==a)return true;
    return false;

}


int main(){
int a,b;
cin>>a>>b;

cout<<func(a,b);

return 0;
}
