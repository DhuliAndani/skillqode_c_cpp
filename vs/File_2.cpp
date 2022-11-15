#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string srg;
    ifstream filestream("File_2.txt");
    if(filestream.is_open())
    {
        while(getline(filestream,srg))
        {
            cout<<srg<<endl;
        }
        filestream.close();
    }
    else
    {
        cout<<"File Open Is Fail.."<<endl;
    }
    return 0;
}