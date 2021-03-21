
#include <iostream>

using namespace std;

int main()
{
    int n;
  cout<<"Podaj n:"<<endl;
  cin>>n;
 int ctr =1;
    for(int i =1; i<=n;i++){
       ctr *=i;
    }

    cout<<ctr<<endl;
  return 0;
}
