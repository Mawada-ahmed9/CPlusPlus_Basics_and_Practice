#include <iostream>
using namespace std;
void PrintHeader(){
    cout << "\t\t\tMultiplication Table" << endl;
    for (int i = 1; i <= 10; i++){
        cout << "\t"<< i ;
    }cout <<endl;
    cout << "----------------------------------------------------------------------------------" << endl;
    
}
void multi(){
    PrintHeader();
    for (int i =1; i <= 10; i++){
        cout << i;
        if (i >= 10){
                cout <<"   |"<< "\t";
            }else{
                cout << "    |"<< "\t";
            }   
        for (int j = 1; j <= 10; j++){
            cout  << i*j << "\t";
        }cout << endl;
    }
}
int main (){
    multi();
return 0;
}
