#include<iostream>
#include<string>
#include<sstream>

using namespace std;



int main(){

string s;

int i;


string roman="IVXLCDM";
int roman1[7]={1,5,10,50,100,500,1000};

int romansize=7;

cin>>s;





if(s[0]=='I' || s[0]=='V' || s[0]=='X' || s[0]=='L' ||s[0]=='C' || s[0]=='D' || s[0]=='M'){






i=s.length();

int a;
int res=0;
int last=0;

while(i--){
    for(int j=0;j<7;j++){
        if(s[i]==roman[j])a=roman1[j];
    }

    if(a>=last){
        last=a;
        res+=a;
    }

    else{

        res-=a;
    }



}


cout<<res;


}



else if(s[0]=='1' || s[0]=='2' || s[0]=='3' || s[0]=='4' ||s[0]=='5' || s[0]=='6' || s[0]=='7'|| s[0]=='8' || s[0]=='9'){



char t1[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
char * t2[] = {"CM", "CD", "XC", "XL", "IX", "IV", "I"};
int t3[] = {1000, 500, 100, 50, 10, 5, 1};
int t4[] = {900, 400, 90, 40, 9, 4, 1};

int s2=0;

istringstream iss(s);
iss>>s2;



string wynik="";

int j=0;

while(s2>0){


		if (s2>= t3[j])
		{
			s2-= t3[j];
			wynik += t1[j];
		}
		else if (s2>= t4[j])
		{
			s2-= t4[j];
			wynik += t2[j];
		}
		else
			j++;


}


cout<<wynik;
}


return 0;

}

