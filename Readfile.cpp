#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream file("profile.txt");
    string line;
    while(getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
    cout<<"data read successfully"<<endl;
    return 0;
}