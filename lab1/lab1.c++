#include <iostream>
#include <cstdio>
using namespace std;

int nc;      // numarul de coloane ale tabelului
int w[5];    // latimea fiecarei coloane

void Set(int n, int a, int b, int c, int d) {
    nc = n; w[0] = a; w[1] = b; w[2] = c; w[3] = d;
}

// Line(stanga, umplere, mijloc, dreapta)
void Line(int st, int um, int mj, int dr) {
    printf("\n%c", st);
    for (int i = 0; i < nc; i++) {
        for (int k = 0; k < w[i]; k++) printf("%c", um);
        printf("%c", i < nc - 1 ? mj : dr);
    }
}

int main() {
    int a, b, c, d;

    // ---------------- 1. Negatia ----------------
    cout << "\n\t1. Negatia";
    Set(2, 3, 10, 0, 0);
    Line(201, 205, 209, 187);
    printf("\n%c A %c not A %4c", 186, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        printf("\n%c %d %c %5d %4c", 186, a, 179, !a, 186);
    }
    Line(200, 205, 207, 188);

    // ---------------- 2. Conjunctia ----------------
    cout << "\n\t2. Conjunctia";
    Set(3, 3, 3, 10, 0);
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A and B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %5d %4c", 186, a, 179, b, 179, a & b, 186);
        }
    }
    Line(200, 205, 207, 188);

    // ---------------- 3. Disjunctia ----------------
    cout << "\n\t3. Disjunctia";
    Set(3, 3, 3, 9, 0);
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A or B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %4d %4c", 186, a, 179, b, 179, a | b, 186);
        }
    }
    Line(200, 205, 207, 188);

    // ---------------- 4. Diferenta (2) ----------------
    cout << "\n\t4. Diferenta (2)";
    Set(4, 3, 3, 7, 8);
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A - B %c B - A %2c", 186, 179, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %5d %c %3d %4c", 186, a, 179, b, 179, a & (!b), 179, (!a) & b, 186);
        }
    }
    Line(200, 205, 207, 188);

    // ---------------- 5. Implicatia ----------------
    cout << "\n\t5. Implicatia";
    Set(3, 3, 3, 9, 0);
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A => B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %4d %4c", 186, a, 179, b, 179, (!a) | b, 186);
        }
    }
    Line(200, 205, 207, 188);

    // ---------------- 6. Echivalenta ----------------
    cout << "\n\t6. Echivalenta";
    Set(3, 3, 3, 10, 0);
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A <=> B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %5d %4c", 186, a, 179, b, 179, a == b, 186);
        }
    }
    Line(200, 205, 207, 188);

    // ---------------- 7. Conectori (Sheffer, Pirce) ----------------
    cout << "\n\t7. Conectori (Sheffer, Pirce)";
    Set(4, 3, 3, 17, 16);
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A | B (Sheffer) %c A ! B (Pirce) %2c", 186, 179, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %15d %c %11d %4c", 186, a, 179, b, 179, !(a & b), 179, !(a | b), 186);
        }
    }
    Line(200, 205, 207, 188);

  // ---------------- 9. Problema simpla (3 variabile) ----------------
    cout << "\n\n\t9. Problema logica cu 3 variabile";
    cout << "\n     F = (A && B) || !C";
    nc = 4; w[0] = 3; w[1] = 3; w[2] = 3; w[3] = 5;
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c C %c  F  %c", 186, 179, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                printf("\n%c %d %c %d %c %d %c  %d  %c", 186, a, 179, b, 179, c, 179, (a && b) || !c, 186);
            }
        }
    }
    Line(200, 205, 207, 188);
 
    // ---------------- 10. Problema generala (4 variabile) ----------------
    cout << "\n\n\t10. Problema logica cu 4 variabile";
    cout << "\n     F = (A || B) && (!C || D)";
    nc = 5; w[0] = 3; w[1] = 3; w[2] = 3; w[3] = 3; w[4] = 5;
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c C %c D %c  F  %c", 186, 179, 179, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                for (d = 0; d <= 1; d++) {
                    printf("\n%c %d %c %d %c %d %c %d %c  %d  %c", 186, a, 179, b, 179, c, 179, d, 179, (a || b) && (!c || d), 186);
                }
            }
        }
    }
    Line(200, 205, 207, 188);
 
    return 0;
}
