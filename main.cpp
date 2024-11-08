#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int color = 0;
    long long int num = 10000000000;
    long long int hundridth = num/100;
    long long int thridNum = num/3;
    int count = 1;
    string progressNew = "{----------------------------------------------------------------------------------------------------}";
    bool ishundrith;
    for (long long int i = 0; i <= num; i++)
    {
        ishundrith = i % hundridth == 0;
        if (ishundrith){

            if (i < thridNum){
                color = 31;
                printf("\033[?25l Progress: \033[%dm%s \033[0m\r", color, progressNew.c_str()); // YOU NEED .c_str because the Format Specifier %s only accepts c-style string and NOT string objects!.
            }
            if (i > thridNum && i < (thridNum * 2)){
                color = 33;
                printf("\033[?25l Progress: \033[%dm%s \033[0m\r", color, progressNew.c_str());
            }
            if (i > thridNum * 2){
                color = 32;
                printf("\033[?25l Progress: \033[%dm%s \033[0m\r", color, progressNew.c_str());
            }
            
            progressNew[count] = '#';
            count++;
            
        
        }
    }
    cout << "\n Length IS: " << progressNew.length() <<endl;
    return 0;
}