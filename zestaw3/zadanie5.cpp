


#include <conio.h>
#include <iostream>

using namespace std;

int NWW (int a, int b){

while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    return a;


}

int main()
{
    int n,m;
  cout<<"Podaj n:"<<endl;
  cin>>n>>m;



  cout<<n*m/NWW(n,m);

  return 0;
}

