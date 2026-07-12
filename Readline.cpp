#include<iostream>
#include <fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("Profile.txt");
    string data;
    int lineCount = 1;
    if(file.is_open()){
        while(getline(file, data)){
        if(lineCount<=2){
            cout<<data<<endl;
            lineCount++;
        }
    }
    }  
    file.close();
    return 0;
}