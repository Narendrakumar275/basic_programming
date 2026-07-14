#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char ch;
    int count =0;
    ifstream file("Profile.txt");
    if(file.is_open()){
        cout<<"file is open"<<endl;
        for(int i=0;file.get(ch);i++){
            count++;
        }
        cout<<"total number of characters:"<<count<<endl;
    }
    else{
        cout<<"file not open"<<endl;
    }
    file.close();
    return 0;
}