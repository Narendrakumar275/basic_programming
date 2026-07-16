#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("Profile.txt");
    ofstream tempfile("temp.txt");
    string word;
    string searchword;
    if(file.is_open() && tempfile.is_open()){
        cout<<"enter the search word:"<<endl;
        cin>>searchword;
        while(file>>word){
            if(searchword != word){
                tempfile<<word<<"\n"<<endl;
            }
        }
    }
    file.close();
    tempfile.close();
    remove("Profile.txt");
    rename("temp.txt", "Profile.txt");
    cout<<"remove specific word successfully"<<endl;
    return 0;
}