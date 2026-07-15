#include<iostream>
#include <fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("Profile.txt");
    ofstream copyfile("copy.txt");
    string line;
    if(file.is_open()){
        while(getline(file,line)){
            cout<<line<<endl;
            copyfile<<line<<endl;
        }
        cout<<"File data copied successfully to copy.txt"<<endl;
    }
    else{
        cout<<"Unable to open file";
    }
    file.close();
    copyfile.close();
    return 0;
}