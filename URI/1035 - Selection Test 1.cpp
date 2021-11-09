#include <iostream>

bool valid(int a, int b, int c, int d) {
    return ((b > c && d > a) && ((c+d)>(a+b)) && (c > 0 && d > 0) && (a % 2 == 0));
}
 
int main() {
 
   int a, b, c, d;
   std::cin >> a >> b >> c >> d;

   if(valid(a,b,c,d)) std::cout << "Valores aceitos" << std::endl;
   else std::cout << "Valores nao aceitos" << std::endl;
 
    return 0;
}