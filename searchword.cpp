#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream file("marge.txt");
    string word;
    string searchWord;
    int found=1;
    cout<<"Enter the word to search word: ";
    cin>>searchWord;
    if(file.is_open()){
        while(file >> word){
            if(word == searchWord){
                cout << "found the word: " << word << endl;
                cout << "found word at line:" << found << endl;
            }
            found++;
        }
        file.close();
    } else {
        cout << "Unable to open file" << endl;
    }

}
