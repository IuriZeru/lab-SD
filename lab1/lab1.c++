#include <iostream>
#include <stdio.h>
using namespace std;
void Line(int lf, int lin, int mid, int rt, int operand = 2 )
{
    int i, j;
    printf("\n%c", lf);
    for (j=1; j<=operand; j++)
    {
        for(i=1; i<=3; i++) printf("%c", lin);
        printf("%c", mid);
    }
    for(i=1; i<=10; i++) printf("%c", lin);
    printf("%c", rt);
}
void OperatiiBinare(int key)
{
    unsigned a,b,c,d,e, rez;
    cout <<"\n\t" << key << ". " ;
    switch(key){
        case 2: cout << "Conjuctia"<< endl; break;
        case 3: cout << "Disjuctia"<< endl; break;
        case 4: cout << "Diferenta"<< endl; break;
        case 5: cout << "Diferenta Simetrica"<< endl; break;
        case 6: cout << "Conectourl Sheffer"<< endl; break;
        case 7: cout << "Conectourl Pierce"<< endl; break;
        case 8: cout << "Implicatie"<< endl; break;
        case 9: cout << "Echvivalentia"<< endl; break;
        case 10: cout << "Problema simpla (4 variabile)"<< endl;
                 cout << "     F = (A || B) && (!C || D)" << endl; break;
        case 11: cout << "Problema Generala (5 variabile)"<< endl;
                 cout << "     F = (A || B) && (!C || D) && (E || !A)" << endl; break;
    }
    Line(201,205,209,187, key<10 ? 2 : key-6);
    switch (key){
        case 2: printf("\n%c A %c B %c A and B %2c", 186, 179, 179, 186); break;
        case 3: printf("\n%c A %c B %c A or B %3c", 186, 179, 179, 186);break;
        case 4: printf("\n%c A %c B %c A - B %4c", 186, 179, 179, 186);break;
        case 5: printf("\n%c A %c B %c A xor B %2c", 186, 179, 179, 186);break;
        case 6: printf("\n%c A %c B %c A nand B %c", 186, 179, 179, 186);break;
        case 7: printf("\n%c A %c B %c A nor B %2c", 186, 179, 179, 186);break;
        case 8: printf("\n%c A %c B %c A => B %3c", 186, 179, 179, 186);break;
        case 9: printf("\n%c A %c B %c A == B %3c", 186, 179, 179, 186);break;
        case 10: printf("\n%c A %c B %c C %c D %c F %8c", 186, 179, 179, 179, 179, 186);break;
        case 11: printf("\n%c A %c B %c C %c D %c E %c F %8c", 186, 179, 179, 179, 179, 179, 186);break;
    }
    Line(199, 196, 197, 182, key<10 ? 2 : key-6);
    for(a=0; a<=1; a++)
    {
        for(b=0; b<=1; b++)
        {
            for(c=0; c<=(key>=10); c++)
            {
                for(d=0; d<=(key>=10); d++)
                {
                    for(e=0; e<=(key==11); e++)
                    {
                        switch(key)
                        {
                            case 2: rez = a&b; break;
                            case 3: rez = a|b; break;
                            case 4: rez = a & (!b); break;
                            case 5: rez = a ^ b; break;
                            case 6: rez = !(a&b); break;
                            case 7: rez = !(a|b); break;
                            case 8: rez = !a | b; break;
                            case 9: rez = a == b; break;
                            case 10: rez = (a || b) && (!c || d); break;
                            case 11: rez = (a || b) && (!c || d) && (e || !a); break;
                        }
                        if (key < 10)
                            printf("\n%c %d %c %d %c %5d %4c ", 186, a, 179, b, 179, rez ,186);
                        else if (key == 10)
                            printf("\n%c %d %c %d %c %d %c %d %c %5d %4c ", 186, a, 179, b, 179, c, 179, d, 179, rez, 186);
                        else
                            printf("\n%c %d %c %d %c %d %c %d %c %d %c %5d %4c ", 186, a, 179, b, 179, c, 179, d, 179, e, 179, rez, 186);
                    }
                }
            }
        }
    }
    Line(200,205,207,188, key<10 ? 2 : key-6);
}
int main()
{
    system("color F0");
    unsigned a,b;
    cout << "Proiect nr.1, elaborat de  Zeru Iuri" << endl;
    cout << "Tema: Operatii cu multimi.Conectori logici." << endl;
    cout << "1. Negatia" << endl;
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
    OperatiiBinare(9);
    OperatiiBinare(10);
    OperatiiBinare(11);
    return 0;
}
