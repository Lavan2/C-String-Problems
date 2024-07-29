#include<iostream>
#include<string>
using namespace std;
int main(){
    string(s);
    getline(cin, s);
    int length =0;
    int i = s.length()-1;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i] !=' '){
        length++;
        i--;
    }
    cout<<length<<endl;
    return 0;
}

//OUTPUT:
//FLY BACK TO THE MOON
//4
