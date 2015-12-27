//
//  KSTestOutputType.c
//  KSMacrosPrintOutputType
//
//  Created by KulikovS on 26.12.15.
//  Copyright © 2015 KulikovS. All rights reserved.
//

#include "KSTestOutputType.h"
#include "KSOutputType.h"

static const int      numberTypeInt    = 10;
static const char   * stringTypeChar   = "Hello";
static const short    numberTypeShort  = 20;
static const double   numbTypeDouble   = 20.56;
static const long     numberTypeLong    = -300;


void KSTestOutputType() {
    puts("\t\tPrint size type");
    
    puts("We waiting -  type int = 4");
    KSPrintSizeType(int)
    
    puts("We waiting -  type char = 1");
    KSPrintSizeType(char)
    
    puts("We waiting -  type short = 2");
    KSPrintSizeType(short)
    
    puts("We waiting -  type double = 8");
    KSPrintSizeType(double)
    
    puts("We waiting -  type long = 8");
    KSPrintSizeType(long)
    
    puts("\t\tPrint the value of using macros ");
    
    puts("We waiting -  10");
    KSTypeReturn(int, numberTypeInt);
    
    puts("We waiting -  Hello");
    KSTypeReturn(char, stringTypeChar);
    
    puts("We waiting -  20");
    KSTypeReturn(short, numberTypeShort);
    
    puts("We waiting -  20.56");
    KSTypeReturn(double, numbTypeDouble);
    
    puts("We waiting -  This function does not support this type");
    KSTypeReturn(long, numberTypeLong);
}
    

