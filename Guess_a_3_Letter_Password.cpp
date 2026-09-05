#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string password(){
    string pass = "";
    do
    {
        cout << "enter your password from 3 letters: ";
    cin >> pass;
        
    } while (pass.size() != 3);
    for (char &c : pass){
        c = toupper(c);
    }
    return pass;
}

bool PrintResult(){
    string pass = password();
    string word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++){
        for(int j = 65; j <= 90; j++){
            for (int k = 65; k <= 90; k++){
                word =word + char(i) + char(j) + char(k) ;
                counter +=1;
                cout << "Trail [ "<< counter << " ] : " << word << endl;
                if (pass == word){
                    cout << "password is "<< pass << endl;
                    cout << "Found after " << counter << " trail(s)";
                    return true;
                } word = "";
            }
        }
    }
    return 1;
}

int main (){
    PrintResult();
    return 0;
}
