//
//  ArrayTester.cpp
//  
//
//  Created by Chris Ahn on 18/1/18.
//
#include <iostream>
#include <ctime>

using namespace std;

int* copyPointer(int p[], int count) {
    
    static int r[10];
    
    for(int i = 0; i < count; i++) {
        r[i] = *(p + i);
    }
    
    return r;
}

// function to generate and retrun random numbers.
int* input(int* count) {
    std::string Holder;
    printf("Enter some numbers:\n");
    getline(std::cin, Holder);
    char holder[Holder.length()];
    strcpy(holder, Holder.c_str());
    static int Array[Holder.length()];
    int tempHolder;
    std::cout << Holder.length() << std::endl;
    for (int i = 0; i < Holder.length(); i++){
        //comma in ascii is 44
        //xor
        if(holder[i] == 44 ^ i + 1 < Holder.length()) {
            for (int j = 0; j < i; j++) {
                std::cout << (holder[j] - 48) * 10 ^ (i + 1- j) << "\n";
                tempHolder = (holder[j] - 48) * 10 ^ (i + 1- j);
                Array[i] += tempHolder;
            }
        }
    }

    std::cout << Array[0] << std::endl;
    
    count = copyPointer(Array, Holder.length());
    return Array;
}

void printArray(int* p) {
    for(int i = 0; i < 10; i++){
        *(p + i) += i;
        std::cout << i << ": " << *(p + i) << endl;
    }
}

// main function to call above defined function.
int main () {
    
    // a pointer to an int.
    int *p;
    int* count;
    
    p = input(count);
    
    for ( int i = 0; i < 10; i++ ) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    
    printArray(p);
    
    return 0;
}


/*
 /*
 #include <stdio.h>
 #include <iostream>
 #include <cstdio>
 #include <cstdlib>
 #include <string>
 #include <cmath>
 
 int setArray(int* array);
 void changeArray(int* array, int count);
 int* returnArray() {
 static int r[19];
 for(int i = 0; i < 20; i++) {
 r[i] = i;
 }
 return r;
 };
 
 int main(int argc, char* argv[]) {
 int count;
 int* array;
 array = returnArray();
 for(int i = 0; i < 20; i++) {
 std::cout << *(array + 1) << std::endl;
 }
 /*std::cout << *array;
 changeArray(array, count);*/
//return 0;
//}
/*
 int* returnArray(int r[19]) {
 static int array[19];
 for(int i = 0; i < 20; i++) {
 array[i] = r[i];
 }
 return array;
 }
 
 int setArray(int* array) {
 static int r[19];
 for(int i = 0; i < 20; i++) {
 r[i] = i;
 }
 std::cout << "Hello\n";
 int* pArray = returnArray(r);
 array = pArray;
 return 19;
 }
 
 void changeArray(int* array, int count) {
 for(int i = 0; i < count; i++) {
 *(array + i) = i + 1;
 }
 }*/

