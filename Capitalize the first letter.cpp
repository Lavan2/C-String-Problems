#include<iostream>
#include<string>
using namespace std;
string capital_first_letter(string text){
    for(int x = 0; x<text.length();x++){
        if(x == 0 || text[x- 1] == ' '){
            text[x] = toupper(text[x]);
        }
    }
    return text;
}
int main(){
    string s;
    cout<<"Enter the string:";
    getline(cin,s);
    cout<<"Changed string:"<<capital_first_letter(s)<<endl;
    return 0;
}
