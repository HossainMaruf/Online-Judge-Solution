#include <iostream>
#include <iomanip>
#include <math.h>

int main() {

    double m1, m2, m3, result;
    while(std::cin >> m1 >> m2 >> m3) {
        double half_peri = (m1+m2+m3)/2.00;
        double x = half_peri - m1;
        double y = half_peri - m2;
        double z = half_peri - m3;
        if(x<=0.00 || y<=0.00 || z<=0.00) result = -1.0000;
        else result = (4.00/3.00)*sqrt(half_peri*x*y*z);
        std::cout << std::fixed << std::setprecision(3) << result << std::endl;
    }

    return 0;
}