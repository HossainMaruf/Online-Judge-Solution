#include <iostream>
#include <stdio.h>
#include <math.h>

int zero_counter(int i, std::string& st) {
   int count = 0;
   for(int j=i; j<st.length(); ++j) {
       if(st[j] == '0') count++;
       else break;
   }
   return count;
}

int space_counter(int i, std::string& st) {
   int count = 0;
   for(int j=i; j<st.length(); ++j) {
       if(st[j] == ' ') count++;
       else break;
   }
   return count;
}

int main() {

    int N;
    std::cin >> N;
    std::cin.ignore();

    while(N--) {
        int count,j=0;
        std::string text;
        char extractArr[1<<10];
        std::getline(std::cin, text);
        int ln = text.length();
        for(int i=0; i<ln; ++i) {
            if(text[i] == '0' && text[i+1] == '0' && text[i+2] == '0') {
                count = zero_counter(i,text);
                if(count > 255) {
                    int how_many = count / 255;
                    int remain = count - (how_many * 255);
                    for(int k=1; k<=how_many; k++) {
                        extractArr[j++] = '#';
                        extractArr[j++] = 255;
                    }
                        extractArr[j++] = '#';
                        extractArr[j++] = remain;
                } else {
                    extractArr[j++] = '#';
                    extractArr[j++] = count;
                }
                i = i + count - 1;
            } else if(text[i] == ' ' && text[i+1] == ' ' && text[i+2] == ' ') {
                count = space_counter(i,text);
                if(count > 255) {
                    int how_many = count / 255;
                    int remain = count - (how_many * 255);
                    for(int k=1; k<=how_many; k++) {
                        extractArr[j++] = '$';
                        extractArr[j++] = 255;
                    }
                        extractArr[j++] = '$';
                        extractArr[j++] = remain;
                } else {
                    extractArr[j++] = '$';
                    extractArr[j++] = count;
                }
                i = i + count - 1;
            } else extractArr[j++] = text[i];
        }
        extractArr[j] = '\0';
        printf("%s\n",extractArr);
    }
    return 0;
}