#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main(){
    ifstream file("Profile.txt");
    string searchword, word;
    int wordcount =0;
    if(file.is_open()){
        cout<<"enter the word:"<<endl;
        cin>>searchword;
        while(file>>word){
            if(searchword == word){
                wordcount++;
            }
        }
        cout<<"search word count:"<<wordcount<<endl;
    }
    else{
        cout<<"file is not open"<<endl;
    }
    return 0;
}
