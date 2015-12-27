//
//  KSPrintOutputType.h
//  KSMacrosPrintOutputType
//
//  Created by KulikovS on 25.12.15.
//  Copyright © 2015 KulikovS. All rights reserved.
//

#ifndef KSOutputType_h
#define KSOutputType_h

#include <stdio.h>

#define KSPrintSizeType(type) void prinfSizeType_##type(type);{\
printf("Size type "#type" = %lu\n", sizeof(type));}

#define KSOutputType1(type, qualifier, value) void output_##type(type, qualifier,\
value);{printf("This is %"#qualifier, value);} //macros is not used

#define KSOutputType(type, value) void output_##type(type, value);{\
                                if (#type == "int" || #type == "short"){\
                                    printf("%d \n", value);\
                                } else if (#type == "char"){\
                                    printf("%s \n", value);\
                                } else if (#type == "float" || #type == "double"){\
                                    printf("%f \n", value);\
                                } else if (#type){\
                                    printf("This function does not support this \
                                            type of");\
                                }\
                            }

#define KSTypeReturn(type, value) KSOutputType(type, value);


#endif /* KSOutputType_h */
