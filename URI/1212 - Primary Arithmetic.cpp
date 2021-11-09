#include <iostream>
#include <stdio.h>

int main() {
    
    long long int num1, num2,_a,_b;
    int count , carry, result;
    while((std::cin >> num1 >> num2 ) && (num1 || num2)) {
        count = 0;
        carry = 0;
        while(num1 || num2) {
            _a = num1 % 10;
            num1 = num1 / 10;
            _b = num2 % 10;
            num2 = num2 / 10;
            result = _a + _b + carry;
            if(result > 9) {
                count++;
                carry = 1;
            } else carry = 0;
        }
        if (!count){
			printf("No carry operation.\n");
		}
		else if (count == 1){
			printf("1 carry operation.\n");
		}
		else
			printf("%d carry operations.\n",count);
    }


    return 0;
}