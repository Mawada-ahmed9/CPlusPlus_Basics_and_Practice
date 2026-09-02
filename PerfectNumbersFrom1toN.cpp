#include <iostream>
using namespace std;
enum enperfect{perfect, not_perfect};
int ReadPositiveNumber(){
    int number;
    do {
        cout << "enter a positive number: ";
        cin >> number;
    }while(number <= 0);
    return number;
}
enperfect CheckPerfectNumber(int number){
    int sum =0;
    for (int i =1; i <= number /2; i++){
        if(number % i == 0){
            sum += i;
        }
    }if (sum == number){
        return enperfect::perfect;
    }else{
        return enperfect::not_perfect;
    }
}
void PrintPerfectNumbers(int number){
    for (int i = 1; i <= number; i++ ){
    if (CheckPerfectNumber(i) == enperfect::perfect){
        cout << i <<" is perfect number" << endl;
    }else{
        cout << i <<" is not perfect number" << endl;
    }}
}
int main (){
    PrintPerfectNumbers(ReadPositiveNumber());
    return 0;
}
