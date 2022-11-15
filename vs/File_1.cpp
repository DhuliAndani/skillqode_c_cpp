#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("File_1.txt");
    if(filestream.is_open())
    {
        filestream<<"Welcome To Skillqode";
        filestream<<"\n After Exam";

        filestream.close();
    }
    else
    {
        cout<<"File Opening Is Fail..";
        return 0;
    }
}