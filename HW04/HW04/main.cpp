//
//  main.cpp
//  HW04
//
//  Created by Josiah on 10/25/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

#include <iostream>

// 11.1
void Average(){
    int ARRAY_SIZE = 5;
    int num[ARRAY_SIZE];
    for (int x=0;x<ARRAY_SIZE;x++){
        num[x] = x+1;
    }
    int sum = 0;
    int average = 0;
    for (int x=1;x<ARRAY_SIZE+1;x++){
        sum += x;
    }
    average = sum/ARRAY_SIZE;
    int p = 0;
    int aboveAVRG[2];
    for (int x=0;x<ARRAY_SIZE;x++){
        if (num[x]>average){
            aboveAVRG[p]=num[x];
            p++;
        }
    }
}

// 11.3
void List(){
    
}
int main(int argc, const char * argv[]) {
    Average();
    List();
    return 0;
}

