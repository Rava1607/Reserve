#include "Player.h"
#include "space.h"

void init(int numPlayers){

    numOfPlayers = numPlayers;

    gameEnd = false;

    const int LENGHT=32;
    Space board[LENGHT];

    board[0] = Space("GO", _Go, 0, 0, -1, 0,-1, 0, 0, 0, 0, 0, 0);
    board[1] = Space("Club", _Property, 60, 50, 3, 0, -1, 2, 10, 30, 90, 160, 250);
    board[2] = Space("Chance", _Chance, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[3] = Space("Admission office", _Property, 60, 50, 3, 0, -1, 2, 10, 30, 90, 160, 250);
    board[4] = Space("Hostel sheremet'yevo", _Hostel, 200, 0, -1, 0, -1, 25, 50, 100, 200, 0, 0);
    board[5] = Space("Dean's office", _Property, 100, 50, 7, 0, -1, 6, 30, 90, 270, 400, 550);
    board[6] = Space("Chance", _Chance, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[7] = Space("Trade union community", _Property, 100, 50, 5, 0, -1, 6, 30, 90, 270, 400, 550);
    board[8] = Space("Gap year (In Academ)", _Academ, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[9] = Space("Canteen", _Property, 140, 100, 11, 0, -1, 10, 50, 150, 450, 625, 750);
    board[10] = Space("Bomonka", _Bomonka, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[11] = Space("Burger", _Property, 140, 100, 9, 0, -1, 10, 50, 150, 450, 625, 750);
    board[12] = Space("Hostel 3", _Hostel, 200, 0, -1, 0, -1, 25, 50, 100, 200, 0, 0);
    board[13] = Space("Mechanical engineering",_Property, 180, 100, 15, 0, -1, 14, 70, 200, 550, 750, 950);
    board[14] = Space("Chance", _Chance, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[15] = Space("Machine tools", _Property, 180, 100, 13, 0, -1, 14, 70, 200, 550, 750, 950);
    board[16] = Space("Frezer", _Frezer, 0, 0,  -1,  0, -1, 0, 0, 0, 0, 0, 0);
    board[17] = Space("Philosophy", _Property, 220, 150, 19, 0, -1, 18, 90, 250, 700, 875, 1050);
    board[18] = Space("Chance", _Chance, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[19] = Space("Foreign language", _Property, 220, 150, 17, 0, -1, 18, 90, 250, 700, 875, 1050);
    board[20] = Space("Hostel 2", _Hostel, 200, 0, -1, 0, -1, 25, 50, 100, 200, 0, 0);
    board[21] = Space("Financial", _Property, 260, 150, 22, 0, -1, 22, 110, 330, 800, 975, 1150);
    board[22] = Space("Physics", _Property, 260, 150, 21, 0, -1, 22, 110, 330, 800, 975, 1150);
    board[23] = Space("Bomonka", _Bomonka, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[24] = Space("Go to academ", _GoToAcadem, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[25] = Space("Applied mathematics", _Property, 300, 200, 26, 0, -1, 26, 130, 390, 900, 1100, 1275);
    board[26] = Space("Engineering graphics", _Property, 300, 200, 25, 0, -1, 26, 130, 390, 900, 1100, 1275);
    board[27] = Space("Repairs", _IncomeTax, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[28] = Space("Hostel 8", _Hostel, 200, 0, -1, 0, -1, 25, 50, 100, 200, 0, 0);
    board[29] = Space("Information systems", _Property, 360, 200, 31, 0, -1, 35, 175, 500, 1100, 1300, 1500);
    board[30] = Space("Chance", _Chance, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0);
    board[31] = Space("Technologies", _Property, 360, 200, 29, 0, -1, 35, 175, 500, 1100, 1300, 1500);

}
