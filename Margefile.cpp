#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("Profile.txt");
    ifstream file1("Profile1.txt");
    ofstream margefile("marge.txt");
    if(file.is_open() && file1.is_open()){
        string line;
        while(getline(file,line)){
            cout<<line<<endl;
            margefile<<line<<endl;
        }
        while(getline(file1,line)){
            cout<<line<<endl;
            margefile<<line<<endl;
        }
    }
    else{
        cout<<"Unable to open file";
    }
    file.close();
    file1.close();
    margefile.close();
    return 0;
}