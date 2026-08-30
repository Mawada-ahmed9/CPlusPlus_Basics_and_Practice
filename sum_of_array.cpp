#include <iostream>
using namespace std;
void read (int  arry[100], int &length){
    cout << "enter your length : ";
    cin>> length;
    for (int i = 0; i < length;i++ ){
        cout << "enter number : "<< i+1 << endl;
        cin >> arry[i];
    }
}
void print (int arry[100], int length){
    cout << "*****************"<< endl;
    for (int i = 0; i < length; i++){
    cout << "array [" << i+1 << "] is : " << arry [i] << endl;}
}
float sumofarray (int arry [100], int length){
    float sum =0;
    for (int i = 0; i < length ; i++){
        sum += arry[i];
    }return sum;
}float average(int arry[100], float length){
    float ave = sumofarray(arry, length ) /length;
    return ave;
}

int main(){
int arry[100] , length ;
read (arry, length);
print (arry , length);
cout << "The sum is: " << sumofarray(arry ,length )<< endl;
cout << "The average is: " <<average(arry , length);


return 0;
}

