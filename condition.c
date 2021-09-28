#include <stdio.h> //ajout de la librairie stdio qui donne accès à la fonction printf

/*
ci-dessous mon
code qui s'appelle condition
*/


int main(void) //équivalent au petit drapeau vert de scratch pour démarrer mon code
{
    int x = 20; //j'ai un entier qui s'appelle x et qui vaut 20
    int y = 10; //j'ai une entier qui s'appelle y et qui vaut 10

    if(x<y) //je viens tester la condition, si la valeur x est inférieur à la valeur de y
    {
        printf("OK");//si c'est le cas, j'affiche le message OK
    }
    else if(x>y)//autrement si ce n'est pas le cas, je viens tester la condition, si la valeur de X est supérieur à y
    {
        printf("NOK");//si c'est le cas, j'affiche le message NOK
    }
    else //autrement si les deux conditions précedentes ne sont pas remplis
    {
        printf("x est égale à j");//j'affiche le message x est égale à y
    }


}
