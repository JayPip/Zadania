#include<iostream>
#include<string>

using namespace std;



int main(){

string s;
getline(cin,s);

int len=s.length();


string alf="abcdefghijklmnopqrstuvwxyz";
int hist[25];

for(int i=0;i<25;i++){
    hist[i]=0;


}




for(int j=0;j<len;j++){
    for(int i=0; i<25;i++){
    if(s[j]==alf[i])hist[i]+=1;

    }
}





for(int i=0;i<25;i++){
    cout<<alf[i]<<" ";
    for(int j=0;j<hist[i];j++){
        cout<<"| ";

    }
    cout<<endl;

}






return 0;

}

