#include <stdio.h>

int main(void)
{
    // declaration
    char finame[256], foname[256], key[256];
    char c;
    int i = 0;
    FILE *fi, *fo;

    // input
    printf("Enter input file name: ");
    scanf("%255s", finame);
    printf("Enter output file name: ");
    scanf("%255s", foname);
    printf("Enter keyword: ");
    scanf("%255s", key);

    // output
    fi = fopen(finame, "rb");
    fo = fopen(foname, "wd");

    while((c = getc(fi)) != EOF) {
        putc(c ^ key[i], fo);
        i++;
        if(key[i] == '\0') i = 0;
    }

    fclose(fi);
    fclose(fo);   
}