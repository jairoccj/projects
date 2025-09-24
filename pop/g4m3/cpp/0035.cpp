#include <iostream>
using namespace std;

int main(){
    int inscritos;
    cin >> inscritos;
    if(inscritos < 5){
        cout << "Flopou!\n";
    }else if(inscritos < 30){
        cout << "Foi massa!\n";
    }else{
        cout << "Foi top demais!\n";
    }
    return 0;
}