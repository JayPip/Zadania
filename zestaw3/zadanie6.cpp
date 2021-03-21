



#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
  cout<<"Podaj n:"<<endl;
  cin>>n;
    bool ck=1;
  for(int i=2; i<sqrt(n);i++){
    if(n%i==0) ck=0;


  }

    if(ck==1) cout<<"liczba pierwsza"<<endl;
        else cout<<"Liczba nie jest pierwsza"<<endl;


  return 0;
}

