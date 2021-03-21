
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
  cout<<"Podaj n:"<<endl;
  cin>>n;



    cout<<"Dzielniki liczby:"<<endl;
    for(int i =1; i<=n/2;i++){
       if(n%i == 0) cout<<i<<endl;
    }
    cout<<n<<endl;

  return 0;
}
