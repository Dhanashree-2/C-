#include <iostream>
int main(){
    int x = 10;
    int y = 20;
    int z = ++x;
    int r = x++;
    std::cout << z;
    return 0;
}