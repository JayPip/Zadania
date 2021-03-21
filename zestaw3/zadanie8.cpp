

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
int x;
int i=0;


srand(time(NULL));
int n = ((rand()%100)+1);

cout<<"Wylosowana zostala liczba, zgadnij jaka:"<<endl;

for(i; x!=n; i++){
cin>>x;
  if(i<=10){
    if (x<n)
    {cout<<"WIECEJ"<<endl;
    }
    else if (x>n)
    {cout<<"mniej"<<endl;
    }
    else if (x==n)
    {cout<<"wygrales"<<endl;
    break;}
    }

  else if (i>10)
  {cout<<"przegrales"<<endl;
  break;}

}
return 0;

}
