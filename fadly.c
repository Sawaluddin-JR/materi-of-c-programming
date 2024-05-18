#include <stdio.h>
#include <conio.h>
#include <windows.h>

void membaca_int(FILE *ptr);
void menginput_int();

void main()
{
    menginput_int();

    getch();
}

void menginput_int()
{
    FILE *ptr;

    ptr = fopen("./int_text.txt", "w");

    fprintf(ptr, "%d", 10);

    printf("Angka berhasil disimpan\n");

    fclose(ptr);

    membaca_int(ptr);
}

void membaca_int(FILE *ptr)
{
    char buff[255];
    int buff_2;

    ptr = fopen("./int_text.txt", "r");

    while (fgets(buff, sizeof(buff), ptr))
    {
        buff_2 = atoi(buff);
        printf("Angka awal: %d\n", buff_2);
        buff_2 += 10;
    }

    fclose(ptr);

    // update
    ptr = fopen("./int_text.txt", "w");

    fprintf(ptr, "%d", buff_2);

    printf("Angka berhasil diubah");

    fclose(ptr);
}