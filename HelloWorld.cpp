#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout<<"Hello! What's your name?"<<endl;
    string name;
    getline(cin, name);
    cout<<"Hello "<<name<<"!"<<endl;
    system("pause");
}