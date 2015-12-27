//
//  KSTestOutputType.c
//  KSMacrosPrintOutputType
//
//  Created by KulikovS on 26.12.15.
//  Copyright © 2015 KulikovS. All rights reserved.
//

#include "KSTestOutputType.h"
#include "KSOutputType.h"

int numb = 10;
char *string = "Puk";
short numbShort = 20;
double numbDouble = 20.56;


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
    
    puts("\t\tPrint value");

    KSOutputType(int, numb);
    
}
    

