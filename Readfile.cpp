#include<iostream>
#include <fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("profile.txt");
    string studentName;
    file>>studentName;
    cout<<"Student_Name\n"<<studentName<<endl;
    file.close();
    return 0;
}