#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string Name(){
    string Text = "";
        cout << "enter your Text: ";
        getline(cin, Text);

    return Text;
}

string Encription(string name){
    
    string AfterDecription = name;
    for (char &c : name){
        c = c + char(2);
    }return name;
}
string Decription(string name){
    for (char &c : name){
        c = c - char(2);
    }return name;
}

int main (){
    string Text = Name();
    cout << "Text After Encription : " << Text << endl;
    string encription = Encription(Text);
    cout << "Text After Encription : " << encription << endl;
    cout << "Text After Decription : " << Decription(encription) << endl;
    
    return 0;
    
} 
