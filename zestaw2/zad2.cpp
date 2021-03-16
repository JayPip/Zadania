

#include <iostream>
using namespace std;

int main() {
int x;

cin>>x;

if(x<50){
    cout<<'dwojeczka';

}

else if(x>=50 && x<60){
    cout<<'3';

}

else if(x>=60 && x<70){
    cout<<'3.5';

}

else if(x>=70 && x<80){
    cout<<'4';

}

else if(x>=80 && x<90){
    cout<<'4.5';

}

else{
    cout<<'5';

}

return 0;
}
