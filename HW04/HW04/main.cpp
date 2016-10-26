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
template <typename T>
T* doubleCapacity(const T* list, int size)
{
    if (size > 0 && list != NULL)
    {
        T* newList = new T[size*2];
        for (int i = 0; i < size; i++)
        {
            newList[i] = list[i];
        }
        
        delete[] list;
        
        return newList;
    }
    else
    {
        return NULL;
    }
}

// 11.5
int Smallest(){
    int nums[8];
    int* numsPTR = nums;
    numsPTR[0] = 1;
    numsPTR[1] = 2;
    numsPTR[2] = 4;
    numsPTR[3] = 5;
    numsPTR[4] = 10;
    numsPTR[5] = 100;
    numsPTR[6] = 2;
    numsPTR[7] = -22;
    int smallest = *numsPTR;
    for (int x=1;x<8;x++){
        if (numsPTR[x]<smallest){
            smallest =numsPTR[x];
        }
    }
    return smallest;
}

// 11.9
class Rectangle2D{
private:
    double x;
    double y;
    double width;
    double height;
public:
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    int getWidth(){
        return width;
    }
    int getHeight(){
        return height;
    }
    void setX(int newX){
        x = newX;
    }
    void setY(int newY){
        y = newY;
    }
    void setWidth(int newWidth){
        width = newWidth;
    }
    void setHeight(int newHeight){
        height = newHeight;
    }
    Rectangle2D(){
        setX(0);
        setY(0);
        setWidth(1);
        setHeight(1);
    }
    Rectangle2D(int x, int y, int width, int height){
        setX(x);
        setY(y);
        setWidth(width);
        setHeight(height);
    }
    const int getArea(){
        return getWidth()*getHeight();
    }
    const int getPerimeter(){
        return 2*getWidth()+2*getHeight();
    }
    
};
int main() {
    Average();
    Smallest();
    return 0;
}

