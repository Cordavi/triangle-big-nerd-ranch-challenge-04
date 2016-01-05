//
//  main.c
//  Triangle
//
//  Created by Cordavi on 1/3/16.
//  Copyright © 2016 Cordavi. All rights reserved.
//

#include <stdio.h>

float remainingAngle (float angleA, float angleB){
    float thirdAngle = 180 - (angleA + angleB);
    return thirdAngle;
}

int main(int argc, const char * argv[]) {
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}
