//
//  KSPrintOutputType.h
//  KSMacrosPrintOutputType
//
//  Created by KulikovS on 25.12.15.
//  Copyright © 2015 KulikovS. All rights reserved.
//

#ifndef KSOutputType_h
#define KSOutputType_h

#define KSPrintSizeType(type) \
    printf("Size type "#type" = %lu\n", sizeof(type));

#define KSOutputValue(qualifier, value) \
    printf("This is "#qualifier"\n", value);

#define KSOutputType(type, qualifier) \
    void KSOutput_##type(value) {\
        KSOutputValue(qualifier, value)\
    }




#endif /* KSOutputType_h */
