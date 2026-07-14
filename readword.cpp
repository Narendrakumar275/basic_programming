#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("Profile.txt");
    string word;
    int wordcount =0;
    int numcount=0;
    char fill;
   if(file.is_open()){
    while(file>>word){
       wordcount++;
    }
      cout<<"total number of word: "<<wordcount<<endl;
      cout<<"\n print the total word{y/n}"<<endl;
      cin>>fill;
      if( fill == 'y'){
        file.clear();
        file.seekg(0);
        while(file>>word){
            cout<<word<<endl;
      }
      }
   }
   file.close();
   return 0;
}