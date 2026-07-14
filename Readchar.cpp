#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream file("Profile.txt");
    char ch;
    if(file.is_open()){
        cout<<"File opened successfully\n";
        while(file.get(ch)){
            cout<<ch<<endl;
        }
    }
    else{
        cout<<"File not opened";
    }
    file.close();
    return 0;
}