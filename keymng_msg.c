#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "keymng_msg.h"


int MsgEncoode(
    void                *pStruct,   /*in*/
    int                 type,
    unsigned char       **pOutData, /*out*/
    int                 *outLen
){
    // 编码 type

    // switch (type) 
}

 
int MsgDecoode(
    unsigned char       *inData,   /*in*/
    int                 inLen,
    void                **pStruct, /*out*/
    int                 *type       /*out*/
){
    
}