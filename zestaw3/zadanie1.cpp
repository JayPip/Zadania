#include <iostream>

using namespace std;

int main()
{
    int n;
  cout<<"Podaj n:"<<endl;
  cin>>n;

    int s=0;
    int f= 1;
    if (n <1) cout<< s <<endl;
    else
  for (int i=1;i<=n;i++){
        cout<<f<<endl;
    int next = s+f;
    s = f;
    f = next;
  }

  return 0;
}
