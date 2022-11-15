#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char input[75];
    ofstream os;
    os.open("File_3.txt");
    cout<<"Writing To A Text File.."<<endl;
    cout<<"Please Enter Your Name..";
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"Please Enter Your Contact..";
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open("File_3.txt");
    cout<<"Reading From a text file.."<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
}