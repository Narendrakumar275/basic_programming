#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("marge.txt");
    ofstream file2("data.txt");
    char ch,choose;
    if(file.is_open() && file2.is_open()){
        cout<<"choose the character Lower/uppar{L/U}:"<<endl;
        cin>>choose;
        while(file.get(ch)){
            if(choose == 'L' || choose =='l'){
                if(ch>='A' && ch<='Z'){
                    ch =ch+32;
                }
            } 
            else if(choose=='U' || choose=='u'){
                if(ch>='a'&& ch<='z'){
                    ch =ch-32;
                }
            }
            file2<<ch;
        }
    }
    file.close();
    file2.close();
    remove("marge.txt");
    rename("data.txt","marge.txt");
    return 0;
}
