#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    fstream file;
    file.open("time.txt", ios::out);

    time_t curremtTime = time(0);



    file<<asctime(localtime(&curremtTime));

    file.close();




    return 0;
}
