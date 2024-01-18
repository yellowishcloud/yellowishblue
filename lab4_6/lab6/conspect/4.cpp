// сложные типы это когда компилятор кучу использует больше памяти набор значений получает /типо тип а если легкий то stack last in first out один контейнеп
#include <iostream>

using namespace std;


void print(int x[], int n){
    for(int i = 0; i < n; ++i){
        x[i] = x[i]*2;
    }
    for(int i = 0; i < n; ++i){
        cout << x[i] << " ";
    }
    cout << endl;
}


int main(){
    int y[] = {1, 2, 3};
    int n = sizeof(y)/sizeof(int);

    print(y, n);

    for(int i = 0; i < n; ++i){
        cout << y[i] << " ";
    }
// когда мы вызываем функцией адрес передается и в оригинал № преимуществро экономий памяти 
    return 0;
}