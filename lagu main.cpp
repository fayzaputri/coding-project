#include "CSLL.h"

int main()
{
    listLagu L;
    adr P ;
    infotype song;
    int N, playtime;
    string lagu, artis, genre;

    create_List_1301213169(L);
    N = 12; //(IF-45-03) 3 + 9 (1301213169'9')
    for (int i = 1; i <= N; i++) {
        cout << "Input lagu ke-" << i << endl;
        cout << "Judul lagu: ";
        getline(cin, lagu);
        cout << "Nama artis: ";
        getline(cin, artis);
        cout << "Genre: ";
        getline(cin, genre);
        cout << "Playtime Lagu: ";
        cin >> playtime;
        cout << endl;
        cin.get();


        song.Artis = artis;
        song.Genre = genre;
        song.Judul = lagu;
        song.playtime = playtime;

        createElemen_1301213169(song, P);
        insertFirst_1301213169(L, P);
    }
    cout<<"Sebelum Delete Last dalam Playlist"<<endl<<endl;
    showSemuaLagu_1301213169(L);
    deleteLast_1301213169(L, P);
    showSemuaLagu_1301213169(L);
    return 0;
}
