#include <iostream>
using namespace std;

int main(){
    string status;
    int nBilA, nBilB;
    srand(time(0));

    nBilA = rand() % 10;
    nBilB = rand() % 10;

    cout << "bilangan A adalah = " << nBilA<< endl;
    cout << "bilangan B adalah = " << nBilB<< endl;
    if (nBilA== nBilB){
        status = "bilangan A sama besar dengan bilangan B";
    }
    else if (nBilA > nBilB){
        status = "bilangan A lebih besar ";
    }
    else {
        status = "bilangan A lebih kecil ";
    }
    

    
    cout <<"statusnya adalah = " << status <<endl;


}