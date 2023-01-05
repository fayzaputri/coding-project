#include "CSLL.h"

void create_List_1301213169(listLagu &L)
{
    First(L) = nil;
}

void createElemen_1301213169(infotype laguBaru, adr &pLagu)
{
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = nil;
}

void insertFirst_1301213169(listLagu &L, adr pLagu)
{
    adr p;

    if (First(L) == nil) {
        First(L) = pLagu;
        next(First(L)) = First(L);
    } else {
        p = First(L);
        next(pLagu) = First(L);
        while (next(p) != First(L)) {
            p = next(p);
        }
        First(L) = pLagu;
        next(p) = pLagu;
    }
}

void deleteLast_1301213169(listLagu &L, adr &pLagu)
{
    adr p;

    cout << "Setelah Delete Last dalam Playlist" << endl << endl;
    if (First(L) == nil) {
        cout << "List Kosong";
        pLagu = nil;
    } else if (next(First(L)) == First(L)) {
        pLagu = First(L);
        next(pLagu) = nil;
        First(L) = nil;
    } else {
        p = First(L);
        pLagu = First(L);
        while (next(pLagu) != First(L)) {
            p = pLagu;
            pLagu = next(pLagu);
        }
        next(p) = First(L);
        next(pLagu) = nil;
    }
}

void showSemuaLagu_1301213169(listLagu L)
{
    adr p;
    int n, j;

    p = First(L);
    n = 1;
    j = 0;
    cout << "Tampilkan Playlist:" << endl;
    while (p != First(L) || j != 1) {
        cout << "Playlist ke-" << n << endl;
        cout << info(p).Judul << " - " << info(p).Artis << " (" << info(p).Genre << ")" << " | Playtime: " << info(p).playtime << endl << endl;
        p = next(p);
        n++;
        if (p == First(L)) {
            j = 1;
        }
    }

}
