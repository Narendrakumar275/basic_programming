#include<iostream>
#include <fstream>
// #include<string>
using namespace std;
int main(){
fstream file("Profile.txt",ios::out);
if(!file){
    cout<<"File not created";
}
else{
    cout<<"File created successfully";
}
file.close();
return 0;
}