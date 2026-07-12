#include<iostream>
#include <fstream>
#include<string>
using namespace std;
int main(){
fstream file("Profile.txt");
if(!file){
    cout<<"File not created";
}
else{
    cout<<"File created successfully";
}
cout<<"Enter the Name:"<<endl;
string studentName;
cin>>studentName;
file<<"Student_Name\n"<<studentName<<endl;
file.close();
cout<<"data write"<<endl;
return 0;
}