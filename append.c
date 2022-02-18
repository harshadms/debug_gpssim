#include <stdio.h>

int main()
{
    FILE *pFile;
    double d = 10.003224;

    pFile = fopen("/tmp/tmp","a");
    fprintf(pFile, "%f\n", d);
    fprintf(pFile, "%f\n", d);
    fprintf(pFile, "%f\n", d);
    fclose(pFile);
}
