#include <iostream>
using namespace std;

int main() {
    
    float base,altura,area;
    
    cout << "---calculadora geometrica---" << endl;
    
    cout << "digite o valor da base" << endl;
    cin >> base;
    
    
    cout << "digite o valor da altura" << endl;
    cin >> altura;
    
    
    
    if (base <= 0 && altura <= 0) {
        cout << "ERRO: base e altura maior que zero" << endl;
    }
        else{
            
            area = (base * altura) /2;
            cout << "a area do triangulo é:" << area << endl;
        }
       
    return 0;
}
    