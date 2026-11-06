#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void Line(int lf, int lin, int mid, int rt, int operand = 2, int last = 10 )
{
    int i, j;
    printf("\n%c", lf);

    for (j=1; j<=operand; j++)
    {
        for(i=1; i<=3; i++) printf("%c", lin);
        printf("%c", mid);
    }

    for(i=1; i<=last; i++) printf("%c", lin);
    printf("%c", rt);
}

void OperatiiBinare(int key)
{
    unsigned a,b, rez;
    cout <<"\n\t" << key << "." ;
    switch(key){
        case 2: cout << "Conjuctia" << endl; break;
        case 3: cout << "Disjuctia" << endl; break;
        case 4: cout << "Diferenta" << endl; break;
        case 5: cout << "Implicatia" << endl; break;
        case 6: cout << "Echivalenta" << endl; break;
        case 7: cout << "Conectorul Sheffer" << endl; break;
        case 8: cout << "Conectorul Pirce" << endl; break;
    }

    Line(201,205,209,187);
    switch(key){

        case 2: printf("\n%c A %c B %c A and B %2c", 186, 179, 179, 186);
        break;
        case 3: printf("\n%c A %c B %c A or B %3c", 186, 179, 179, 186);
        break;
        case 4: printf("\n%c A %c B %c A - B %4c", 186, 179, 179, 186);
        break;
        case 5: printf("\n%c A %c B %c A -> B %3c", 186, 179, 179, 186);
        break;
        case 6: printf("\n%c A %c B %c A <-> B %2c", 186, 179, 179, 186);
        break;
        case 7: printf("\n%c A %c B %c A nand B %c", 186, 179, 179, 186);
        break;
        case 8: printf("\n%c A %c B %c A nor B %2c", 186, 179, 179, 186);
        break;
    }

    Line(199, 196, 197, 182);
    for(a=0; a<=1; a++)
    {
        for(b=0; b<=1; b++)
        {
            switch(key)
            {
                case 2: rez = a&b; break;
                case 3: rez = a|b; break;
                case 4: rez = a&!b; break;
                case 5: rez = (!a)|b; break;
                case 6: rez = (a==b); break;
                case 7: rez = !(a&b); break;
                case 8: rez = !(a|b); break;
            }
            printf("\n%c %d %c %d %c %5d %4c ", 186, a, 179, b, 179, rez ,186);
        }
    }
    Line(200,205,207,188);
}

// 9. Problema usoara (3-4 variabile)
void ProblemaUsoara()
{
    unsigned a, b, c, d, rez;

    cout << "\n\n\t9. Problema usoara (4 variabile)";
    cout << "\n     F = (A || B) && (!C || D)";

    Line(201,205,209,187, 4, 17);
    printf("\n%c A %c B %c C %c D %c (A||B)&&(!C||D) %c", 186, 179, 179, 179, 179, 186);
    Line(199,196,197,182, 4, 17);
    for(a=0; a<=1; a++)
    {
        for(b=0; b<=1; b++)
        {
            for(c=0; c<=1; c++)
            {
                for(d=0; d<=1; d++)
                {
                    rez = (a || b) && (!c || d);
                    printf("\n%c %d %c %d %c %d %c %d %c%9d%9c", 186, a, 179, b, 179, c, 179, d, 179, rez, 186);
                }
            }
        }
    }
    Line(200,205,207,188, 4, 17);
}

// 10. Problema grea (generala, mai mult de 4 variabile)
void ProblemaGrea()
{
    unsigned a, b, c, d, e, rez;

    cout << "\n\n\t10. Problema grea (5 variabile)";
    cout << "\n     F = (A || B) && (!C || D) && (E || !A)";

    Line(201,205,209,187, 5, 26);
    printf("\n%c A %c B %c C %c D %c E %c (A||B)&&(!C||D)&&(E||!A) %c", 186, 179, 179, 179, 179, 179, 186);
    Line(199,196,197,182, 5, 26);
    for(a=0; a<=1; a++)
    {
        for(b=0; b<=1; b++)
        {
            for(c=0; c<=1; c++)
            {
                for(d=0; d<=1; d++)
                {
                    for(e=0; e<=1; e++)
                    {
                        rez = (a || b) && (!c || d) && (e || !a);
                        printf("\n%c %d %c %d %c %d %c %d %c %d %c%13d%14c", 186, a, 179, b, 179, c, 179, d, 179, e, 179, rez, 186);
                    }
                }
            }
        }
    }
    Line(200,205,207,188, 5, 26);
}

int main()
{
    system("color F0");

    unsigned a;

    cout << "Project #1, developed by Vangeli Bogdan" << endl;

    cout << "Topic: Operations with multiple logical sockets." << endl;

    cout << " 1. Negatia" << endl;

    Line(201,205,209,187, 1);
    printf("\n%c A %c not A %4c", 186, 179, 186);
    Line(199,196,197,182, 1);
    for(a=0; a<=1; a++)
    {
        printf("\n%c %d %c %5d %4c", 186, a, 179, !a, 186);
    }
    Line(200,205,207,188, 1);

    OperatiiBinare(2);
    OperatiiBinare(3);
    OperatiiBinare(4);
    OperatiiBinare(5);
    OperatiiBinare(6);
    OperatiiBinare(7);
    OperatiiBinare(8);

    ProblemaUsoara();
    ProblemaGrea();

    cout << endl;
    return 0;
}
