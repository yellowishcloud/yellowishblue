// голосование 
#include <iostream>

using namespace std;

bool g1 (bool x, bool y, bool z){
    return x+ y+x >=2;
}



bool g2 (bool x, bool y, bool z){
    if(x == true && y == true) return true;
    if(x == true && z == true) return true;
    if(x == false && y == true) return true;
    return false;
}

bool g3 (bool x, bool y, bool z){
    int x1 = x ? 1 : 0;// если х равен тру то верни 1 иначе0
    int y1 = y ? 1 : 0;
    int z1 = z ? 1 : 0;
    return x+ y+z >=2;
}




int main(){
    bool x, y, z;
    cin >> x>>y>>z;
    cout << g1(x, y, z);
    return 0;
}