//
//  KSTestOutputType.c
//  KSMacrosPrintOutputType
//
//  Created by KulikovS on 26.12.15.
//  Copyright © 2015 KulikovS. All rights reserved.
//

#include "KSTestOutputType.h"
#include "KSMacro.h"

#include <stdio.h>
#include <stdbool.h>

static const int      numberTypeInt    = 10;
static const char   * stringTypeChar   = "Hello";
static const double   numbTypeDouble   = 20.56;
static const long     numberTypeLong   = 30000000;

KSOutputType(long, %lu)
KSOutputType(int, %d)
//KSOutputType(char, %s)
KSOutputType(double, %f)
KSOutputType(bool, %d)

void KSTestOutputType() {
    puts("\t\tPrint size type using macro 'KSPrintSizeType'");
    
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
    
    
    puts("\n\t\tPrint value using macro 'KSOutputValue'");
    
    puts("We waiting -   number 10");
    KSOutputValue(%d, numberTypeInt);
    
    puts("We waiting -   string Hello");
    KSOutputValue(%s, stringTypeChar)
    
    puts("We waiting -   number 20.56");
    KSOutputValue(%f, numbTypeDouble);
    
    puts("We waiting -   number 30000000");
    KSOutputValue(%lu, numberTypeLong);
    
    puts("We waiting - bool - '1'");
    KSOutputValue(%d, true);
    
    
    puts("\n\t\tPrint value ising macro 'KSOutputType'");
    
    //    KSOutput_char(stringTypeChar);

    puts("We waiting -   number 10");
    KSOutput_int(numberTypeInt);
    
    puts("We waiting -   number 20.56");
    KSOutput_double(numbTypeDouble);
    
    puts("We waiting - bool - '1'");
    KSOutput_bool(true);
    
    puts("We waiting -   number 30000000");
    KSOutput_long(numberTypeLong);
}
    

