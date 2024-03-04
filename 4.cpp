#include <iostream>
using namespace std;
int main(){
    int nNilMtk, nNilFisika, nRerata;
    string status;
    cout << "nilai mtk =";
    cin >> nNilMtk;
    cout << "nilai fisika =";
    cin >> nNilFisika;

    nRerata = (nNilMtk + nNilFisika)%2;

    if (nRerata > 60 || nNilMtk >= 70){
        status = "lulus";
    }

    else{
        status= "tidak lulus";
    }


    cout <<"statusnya adalah ="<<status<<endl;
    return 0;
}