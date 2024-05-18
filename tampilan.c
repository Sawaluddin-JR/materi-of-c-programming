#define handle GetStdHandle(STD_OUTPUT_HANDLE)

//=======================================================================
//                          PROTOTYPE                                   =
//=======================================================================

void gotoxy(int x, int y);
void setcolor(int text, int background);

//========================================================================
//                                   ARRAY WARNA                         =
//========================================================================
enum color
{
   HITAM,
   BIRU_GELAP,
   HIJAU_GELAP,
   PINK_GELAP,
   MERAH_GELAP,
   UNGU_GELAP,
   KUNING_GELAP,
   PUTIH_GELAP,
   ABU_ABU,
   BIRU,
   HIJAU,
   CYAN,
   MERAH,
   UNGU,
   KUNING,
   PUTIH
};

//============================================================================
//                                 WARNA & POSISI                            =
//============================================================================

void gotoxy(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(handle, posisi);
}
void setcolor(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}
