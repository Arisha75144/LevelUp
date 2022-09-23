//
//Дана строка символов. Удалить из нее все слова нечетной длины. Слова отделяются друг от друга одним пробелом.
#include<iostream>
#include<vector>
using namespace std;
void Del_str(){
    string str;
    string strcopy;
    getline(cin,str);
    str+=" ";
    vector<string>newstr;
    for (int i=0;i<str.size();i++){
        if (str[i]!=' ') {
            strcopy += str[i];
        }
        else{
            newstr.push_back(strcopy);
            strcopy.clear();
        }
    }
    for (int i=0;i<newstr.size();i++){
        if (newstr[i].size()%2==0){
            cout<<newstr[i]<<" ";
        }
    }
}
