// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     int a = 6, b = 2,c = 3;
//     printf("%d ", ++a);
//     printf("%d ", --b);
//     printf("%d ", --c + b);
//     // 7 1 3

//     getch();
// }

#include <stdio.h>
#include <conio.h>
void main(){
    int a,b,c;
    a = 3;
    b = 9;
    c = a * b;
    a = 1 * (b + c);
    printf("%d %d %d",--a,c++,b);
    // 35 27 9
    getch();
}

