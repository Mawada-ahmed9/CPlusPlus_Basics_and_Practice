#include <iostream>
#include <cstdlib>
using namespace std;
enum enCharType{SpecialChar, CapitalChar,SmallChar, Digit};
int ReadPositiveNumber( string massage){
     int number ;
    do
    {
        cout << massage;
        cin >> number;
    } while (number <=0);
        
    return number;
}

int Random(int from, int to){
    return int(rand() % (to - from +1) + from);
}
char RandomChar(enCharType Type){
    switch (Type){
    
    case enCharType::CapitalChar:
        return Random(65, 90);
    case enCharType::Digit:
        return Random(48, 57);
    case enCharType::SmallChar:
        return Random(97, 122);
    case enCharType::SpecialChar:
        return Random(33, 47);
    default:
        return char(127);
    }
}
    
string RandomWord(){
    string word= "";
    int number =1;
    while (number <= 4){
        word = word + RandomChar(enCharType::CapitalChar);
        number++;
    }
   return word;
}
string RandomKey(){
    string key = "";
    key = key + RandomWord() + "-"+
        RandomWord() + "-"+
        RandomWord() + "-"+
        RandomWord() ;
    return key;
}
void RandomKeys(){
    int n = ReadPositiveNumber("enter your number : ");
    for (int i = 1; i <= n; i++){
        cout << "key [" << i << "] : " << RandomKey() << endl;
    }
}

int main (){
    srand((unsigned)time(NULL)); 
    RandomKeys();
return 0;
}
