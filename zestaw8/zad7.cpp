#include<iostream>
#include<cmath>
using namespace std;


void yes(){
cout<<"yes"<<endl;
}
void no(){
cout<<"no"<<endl;
}

void vote(bool* a){
if(*a==false)
    no();
if(*a==true)
    yes();

}

int main(){

bool n;

cin>>n;


vote(&n);


return 0;
}




