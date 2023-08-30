
#define GL_APICALL
#define GL_APIENTRYP

#include "GLES2/gl2.h"

#include <stdio.h>


int main(int argc, char* argv[])
{
    fprintf(stdout, "%s\n", __FUNCTION__);

    glActiveTexture(1);
    
    getchar();
    return 0;
}