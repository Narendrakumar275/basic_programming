#include<iostream>
#include <fstream>
using namespace std;
int main(){
    fstream file("Profile.txt", ios::app);
    cout<<"Enter the Name:"<<endl;
    string studentName;
    cin>>studentName;
    file<<studentName<<endl;
    file.close();
    cout<<"data written successfully"<<endl;
    return 0;
}