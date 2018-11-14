//
//  ClassSort.cpp
//  
//
//  Created by Chris Ahn on 22/1/18.
//

#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>

class Sorter {
    
public:
    
    ~Sorter() {
        delete[] finalValue;
    }
    
    void input(){
        std::cout << "Enter some numbers\n";
        std::cin >> inputString;
        int Array[256];
        HLENGTH = 0;
        int spot = 0;
        int PowerIndex = 0;
        
        for (int i = 0; i < inputString.length(); i++) {
            if (inputString[i] > 47 && inputString[i] < 58) {
                for (int j = 0; j < inputString.length(); j++) {
                    if ( inputString[i + j + 1] > 47 && inputString[i + j + 1] < 58) {
                        PowerIndex++;
                    }
                    else {
                        break;
                    }
                }
                Array[spot] += (inputString[i] - 48) * (int) pow((double) 10, PowerIndex);
                
                if (inputString[i + 1] > 47 && inputString[i + 1] < 58) {
                    PowerIndex = 0;
                }
                else {
                    HLENGTH++;
                    PowerIndex = 0;
                    spot++;
                }
            }
            else {
                PowerIndex = 0;
            }
        }
        
        finalValue = new int[HLENGTH + 1];
        
        for (int i = 0; i < HLENGTH; i++) {
            finalValue[i] = Array[i];
        }
        inputString.clear();
    }
    
    void sort(){
        bool ascending;
        int tempHolder = 0;
        std::cout << "Ascending or Descending?\n"
        << "0: Descending\n"
        << "1: Ascending\n";
        std::cin >> ascending;
        
        for (int i = 0;i < HLENGTH - 1; i++ )
        {
            for (int j = 0; j < HLENGTH - 1;j++ )
            {
                if ( finalValue[j + ascending] < finalValue[j + (1 + ascending) % 2] )
                {
                    tempHolder = finalValue[j + ascending];
                    finalValue[j + ascending] = finalValue[j + (1 + ascending) % 2];
                    finalValue[j + (1 + ascending) % 2] = tempHolder;
                }
            }
        }
        
    }
    
    void print() {
        for(int i = 0; i < HLENGTH; i++) {
            std::cout << finalValue[i];
            if ( i + 1 != HLENGTH ) {
                std::cout << ",";
            }
            else {
                std::cout << ".";
            }
        }
        std::cout << "\n";
        
    }
    
private:
    int HLENGTH;
    int* finalValue;
    std::string inputString;
    
};

int main(int argc, char *argv[]) {
    Sorter sort;
    sort.input();
    sort.sort();
    sort.print();
}
