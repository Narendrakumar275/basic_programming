#include<iostream>
#include <fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("Profile.txt");
    char ch;
    int countvo =0;
    int countnum =0;
    int specialch=0;
    if(file.is_open()){
        while(file.get(ch)){
            if(ch == 'A'|| ch =='a'
            || ch == 'E' || ch == 'e'
            || ch == 'I' || ch == 'i'
            || ch == 'O' || ch == 'o'
            || ch == 'U' || ch == 'u'){
                countvo++;
            }
            if(ch == '1' || ch =='2' 
            || ch=='3' || ch=='4'
            || ch=='4' || ch=='5'
        || ch =='6' || ch=='7'||ch=='8' || ch=='9' || ch=='0'){
            countnum++;
        }
        else if (ch == '!'|| ch == '@' 
            || ch == '#' || ch == '$'
            || ch == '%'|| ch == '^'|| ch == '&'|| ch == '*'
            || ch == '(' || ch == ')'|| ch == '+'|| ch == '-'
            || ch == '/'|| ch == ','|| ch == '.'|| ch == '?'|| ch == '|'
            || ch == '{'|| ch == '}' || ch == '[' || ch == ']' || ch == '<'
            || ch == '>'|| ch == ';'|| ch == ':'|| ch == '"')
        {
          specialch++;      
        }
        }
        cout<<"tatal number of  vowels:"<<countvo<<endl;
        cout<<"total number digits:"<<countnum<<endl;
        cout<<"total number of special character:"<<specialch<<endl;
    }
    else{
        cout<<"file is not open"<<endl;
    }
    return 0;
}