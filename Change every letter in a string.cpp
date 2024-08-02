#include<iostream>
#include<string>
using namespace std;
string change_letter(string str){
    int char_code;
    for(int x=0;x<str.length();x++){
        char_code = str[x];
        if(char_code == 122){
            str[x] = char(97);
        }
        else if(char_code == 90){
            str[x] = char(65);
        }
        else if(char_code>=65 && char_code<=90 || char_code>=97 && char_code<=122 ){
            str[x] = char(char_code + 1);
        }
    }
    return str;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin, s);
    cout << "Original string: " << s<<endl;
    cout << "Changed string: " <<change_letter(s)<<endl;
    return 0;
}
