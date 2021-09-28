//Solution avec fonction et avec une boucle

#include <stdio.h>

void miaou(int n);


int main(void)
{
    miaou(10);
}


//création de ma fonction générique via n
void miaou(int n)
{
    for (int i =0 ; i< n; i++)
    {
    printf("miaou\n");
    }
}
