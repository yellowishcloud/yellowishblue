#include <iostream>

using namespace std;

bool g1 (bool x, bool y){//гипотеза номер 1
    return x != y;
}

bool g2(bool x, bool y){//гипотеза 2
    return x or y;
}

bool base (bool x, bool y){// это полностью нам понятно поэтому это base
    if(x == false && y == false) return false;
    if(x == true && y == true) return false;
    if(x == false && y == true) return true;
    return true;
}

bool test1(){// это тест он наверно не понадобится но блин это очень полезно дальше поможет проверятьь теорий 
    bool x[] = {false, true, false, true};
    bool y[] = {false, false, true, true};
    for(int i = 0; i < 4; ++i){
        if(base(x[i], y[i]) == g2(x[i], y[i])){
            cout << "Test passed:" << i + 1 << endl;
        }else{
            cout << "Test not passed:" << i + 1 << endl;
        }
    }
}

void solve(){
    bool x, y;
    cin >> x >> y;// a просто ответить
    cout << g1(x, y);
}


int main(){
    //solve();
    test1();
    return 0;
}