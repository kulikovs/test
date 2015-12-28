//
//  KSСar.c
//  KSMacros
//
//  Created by KulikovS on 28.12.15.
//  Copyright © 2015 KulikovS. All rights reserved.
//

#include "KSСar.h"
#include <stdbool.h>

struct KSCar {
    char  *   brand;
    char  *   model;
    float     engineDisplacement;
    short     horsePower;
    short     speed;
    short     rpm;
    bool      pushButtonStart;
    bool      rearviewCamera;
    bool      cruiseControl;
    bool      usbAudioInterface;
    bool      wheelType;
    bool      typeEngine;
    long long runKm;
    double    lenght;
    int       price;
} KSCarData;



