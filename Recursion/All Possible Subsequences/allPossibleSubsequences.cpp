#include<iostream>
using namespace std;

void sequence(string s,  string temp, int index){

    if(s.size() == index){
        cout << temp <<endl;
        return;
    }

    sequence(s, temp+s[index], index+1);
    sequence(s, temp, index+1);

}

int main(){

    string s;
    cout << "Enter a string :";
    cin >> s;

    sequence(s, "", 0);
    cout << endl;
}