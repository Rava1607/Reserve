#include <iostream>
#include "Player.h"
#include "space.h"
using namespace std;


int numberOfPlayers()
{
    int numOfPlayers = 0;
    cout << "*|---------------------------------------------------------------------------|*" << endl;
    cout << "*| How many players will be playing ( 2 - 6 )?                               |*" << endl;
    cout << "*| >> " ;
    cin >> numOfPlayers;
    return numOfPlayers;
}



int purchaseFunct (int actrent,int playerLocation, int playerBalance, int owner, string propertyName, int playerID,int cost)
{
    if (owner == 0 )
    {
        cout << propertyName << " is owned by player" << playerID << "!" << endl;
        cout << endl;
        cout << "Would you like to buy " << propertyName << " for " << cost << "?" << endl;
        cout << "( 'y' for Yes and 'n' for No ) " << endl;

        char buyConfirm;
        cin >> buyConfirm;

        if ( buyConfirm == 'y' || buyConfirm == 'Y')
        {

            if ( playerBalance >= cost )
            {
                cout << "Congratulations! You are now the proud owner of " << propertyName << "!" << endl;
                return 1;
            }

            else if ( playerBalance < cost )
            {
                cout << "Oh no! You don't have enough funds to purchase that property!" << endl;

                return 0;
            }


        }

        else if ( buyConfirm == 'n' || buyConfirm == 'N' )
        {
            return 0;
        }
    }


        else if ((owner != playerID) && (owner = -1))
        {
            cout << endl;
            cout << propertyName << " is owned by player" << playerID << "!" << endl;
            cout << "You must pay " << cost << " to player" << playerID << "!" << endl;
            cout << endl;
            cout << actrent << " was paid to player" << playerID << "!" << endl;
            return 2;
        }
    }


void outputTile (int location);

int diceRoll()
{
    int number = 0;
    number = ( rand() % 12 / 2 ) + 1 ; 
    
    cout << endl << "You rolled a " << number;  
    return number;
}
bool checkPlayerLoss(int currentPlayerBalance)
{
	bool playerHasLost;
	
    if ( currentPlayerBalance <= 0)
	{
		playerHasLost = true;
	}
	
	else
	{
		playerHasLost = false;
	}
	
	return playerHasLost;
}
void purchaseProperty (int *isOwnedBy, int *currentBalance, int *housesOwned, int currentPlayerID, int propertyCost )
{
    *isOwnedBy = currentPlayerID;
    *currentBalance = ( *currentBalance - propertyCost );
    *housesOwned = ( *housesOwned + 1 );
}

void payRent ( int *currentPlayerBalance, int *ownerPlayerBalance, int rentCost )
{
	*currentPlayerBalance = ( *currentPlayerBalance - rentCost );
	*ownerPlayerBalance = ( *ownerPlayerBalance + rentCost );
}

int main()
{
    int rent1[]={0,0,0,0,0,0};
    int renthostel[]={25, 50, 100, 200, 0, 0};
    int rent2[]={2, 10, 30, 90, 160, 250};
    int rent3[]={6, 30, 90, 270, 400, 550};
    int rent4[]={10, 50, 150, 450, 625, 750};
    int rent5[]={14, 70, 200, 550, 750, 950};
    int rent6[]={18, 90, 250, 700, 875, 1050};
    int rent7[]={22, 110, 330, 800, 975, 1150};
    int rent8[]={26, 130, 390, 900, 1100, 1275};
    int rent9[]={35, 175, 500, 1100, 1300, 1500};

    const int LENGHT=32;
    Space board[LENGHT] = {
    board[0] = Space("GO", _Go, 0, 0, -1, 0,-1, rent1),
    board[1] = Space("Club", _Property, 60, 50, 3, 0, -1, rent2),
    board[2] = Space("Chance", _Chance, 0, 0, -1, 0, -1, rent1),
    board[3] = Space("Admission office", _Property, 60, 50, 3, 0, -1, rent2),
    board[4] = Space("Hostel sheremet'yevo", _Hostel, 200, 0, -1, 0, -1, renthostel),
    board[5] = Space("Dean's office", _Property, 100, 50, 7, 0, -1, rent3),
    board[6] = Space("Chance", _Chance, 0, 0, -1, 0, -1, rent1),
    board[7] = Space("Trade union community", _Property, 100, 50, 5, 0, -1, rent3),
    board[8] = Space("Gap year (In Academ)", _Academ, 0, 0, -1, 0, -1, rent1),
    board[9] = Space("Canteen", _Property, 140, 100, 11, 0, -1, rent4),
    board[10] = Space("Bomonka", _Bomonka, 0, 0, -1, 0, -1, rent1),
    board[11] = Space("Burger", _Property, 140, 100, 9, 0, -1, rent4),
    board[12] = Space("Hostel 3", _Hostel, 200, 0, -1, 0, -1, renthostel),
    board[13] = Space("Mechanical engineering",_Property, 180, 100, 15, 0, -1, rent5),
    board[14] = Space("Chance", _Chance, 0, 0, -1, 0, -1, rent1),
    board[15] = Space("Machine tools", _Property, 180, 100, 13, 0, -1, rent5),
    board[16] = Space("Frezer", _Frezer, 0, 0,  -1,  0, -1, rent1),
    board[17] = Space("Philosophy", _Property, 220, 150, 19, 0, -1, rent6),
    board[18] = Space("Chance", _Chance, 0, 0, -1, 0, -1, rent1),
    board[19] = Space("Foreign language", _Property, 220, 150, 17, 0, -1, rent6),
    board[20] = Space("Hostel 2", _Hostel, 200, 0, -1, 0, -1, renthostel),
    board[21] = Space("Financial", _Property, 260, 150, 22, 0, -1, rent7),
    board[22] = Space("Physics", _Property, 260, 150, 21, 0, -1, rent7),
    board[23] = Space("Bomonka", _Bomonka, 0, 0, -1, 0, -1, rent1),
    board[24] = Space("Go to academ", _GoToAcadem, 0, 0, -1, 0, -1, rent1),
    board[25] = Space("Applied mathematics", _Property, 300, 200, 26, 0, -1, rent8),
    board[26] = Space("Engineering graphics", _Property, 300, 200, 25, 0, -1, rent8),
    board[27] = Space("Repairs", _IncomeTax, 0, 0, -1, 0, -1, rent1),
    board[28] = Space("Hostel 8", _Hostel, 200, 0, -1, 0, -1, renthostel),
    board[29] = Space("Information systems", _Property, 360, 200, 31, 0, -1, rent9),
    board[30] = Space("Chance", _Chance, 0, 0, -1, 0, -1, rent1),
    board[31] = Space("Technologies", _Property, 360, 200, 29, 0, -1, rent9),
    };

    Player player[7];
    for ( int i = 1; i <= 6; i++ )
        {
            player[i].playerID = i;
            player[i].playerHasLost = true;
        }

    int numOfPlayers;
    numOfPlayers = numberOfPlayers();
    for ( int i = 0; i <= 6; i++ )
        {
            player[i].money = 0;
            player[i].curPos = 0;
            player[i].bomonkaVisiting = 0;
            player[i].numOfHostel = 0;
            player[i].inAcadem = false;
            player[i].inAcademCounter = 0;
            player[i].playerHasLost = true;
        }
     for ( int i = 1; i <= numOfPlayers; i++ )
        {
            player[i].money = 1500;
            player[i].curPos= 0;
            player[i].playerHasLost = false;
        }

    for( ;; )
        {
            for( int i = 1; ; i++ )
                {
                for( int k = 0; k == 31; k++)
                {
                    if (board[k].numOfHouses == 1)
                    {
                        board[k].actrent = board[k].rent[1];
                    }
                    if (board[k].numOfHouses == 2)
                    {
                        board[k].actrent = board[k].rent[2];
                    }
                    if (board[k].numOfHouses == 3)
                    {
                        board[k].actrent = board[k].rent[3];
                    }
                    if (board[k].numOfHouses == 4)
                    {
                        board[k].actrent = board[k].rent[4];
                    }
                    if (board[k].numOfHouses == 5)
                    {
                        board[k].actrent = board[k].rent[5];
                    }
                }

                    player[i].playerHasLost = checkPlayerLoss(player[i].money);

                    if ( player[i].playerHasLost == false && player[i].inAcadem == 0 ) // Checks if the player has lost and is to be skipped, and skips their turn.
                    {
                        cout << "*|---------------------------------------------------------------------------|*" << endl;
                        cout << "*| Current player's ID: " << player[i].playerID << endl;
                        cout << "*| Current balance: " << player[i].money << endl;
                        cout << "*|---------------------------------------------------------------------------|*" << endl;
                        cout<<endl<<"Would you like to view your owned properties? (Y=Yes N=No)"<<endl;

                        char viewProperties;
                        cin>>viewProperties;

                        if(viewProperties == 'y' || viewProperties == 'Y')
                        {
                            for ( int k = 0; k <= 31; k++ )
                            {
                                if ( board[k].owner == i )
                                {
                                    cout << " -- " << board[k].name[k] << endl;

                                }
                            }

                        }

                        int diceRoll_1 = diceRoll();
                        int diceRoll_2 =  diceRoll();
                        int diceValue = (diceRoll_1 + diceRoll_2);

                        if( (player[i].curPos + diceValue) > 31 )
                        {
                            player[i].curPos = ( (player[i].curPos + diceValue) - 31 );
                            cout << "Player" << i << ", you move " << diceValue << " spaces!" << endl;
                            cout << "You have landed on " << player[i].curPos << "!" << endl;
                            cout << "You have landed on " << board[ (player[i].curPos) ].name[ (player[i].curPos) ] << endl;
                            cout << endl;
                            cout << "You passed GO!" << endl;
                            cout << "Collect $200!" << endl;
                            outputTile (player[i].curPos - 1);
                            player[i].money = ( player[i].money + 200 );



                            int purchaseFunctReturn = 0;
                            purchaseFunctReturn = purchaseFunct (board[(player[i].curPos)].actrent, player[i].curPos, player[i].money, board[ (player[i].curPos) ].owner, board[ (player[i].curPos) ].name, player[i].playerID, board[(player[i].curPos)].cost);

                            if ( purchaseFunctReturn == 1 )
                            {
                                purchaseProperty ( &board[ (player[i].curPos) ].owner, &player[i].money, &player[i].numOfHostel, player[i].playerID, board[ (player[i].curPos) ].actrent );
                            }

                            else if ( purchaseFunctReturn == 2 )
                            {
                                payRent( &player[i].money, &player[ board[ (player[i].curPos) ].owner ].money, board[ (player[i].curPos) ].actrent);
                            }


                    }
                        else if ( (player[i].curPos + diceValue) <= 40 )
                        {
                        if ( player[i].curPos == 24 )
                        {
                            player[i].curPos = 8;
                            player[i].inAcadem = 1;

                        }
                         player[i].curPos = (player[i].curPos + diceValue);
                         cout << "Player" << player[i].playerID << ", you move " << diceValue << " spaces!" << endl;
                         cout << "You have landed on " << player[i].curPos << "!" << endl;
                         cout << "You have landed on " << board[ (player[i].curPos) ].name << endl;

                        outputTile (player[i].curPos);
                        int purchaseFunctReturn = 0;
                        purchaseFunctReturn = purchaseFunct (board[(player[i].curPos)].actrent, player[i].curPos, player[i].money, board[ (player[i].curPos) ].owner, board[ (player[i].curPos) ].name, player[i].playerID, board[(player[i].curPos)].cost);

                        if ( purchaseFunctReturn == 1 )
                        {
                            purchaseProperty ( &board[ (player[i].curPos) ].owner, &player[i].money, &player[i].numOfHostel, player[i].playerID, board[ (player[i].curPos) ].actrent );
                        }

                        else if ( purchaseFunctReturn == 2 )
                        {
                            payRent( &player[i].money, &player[ board[ (player[i].curPos) ].owner ].money, board[ (player[i].curPos) ].actrent);
                        }
                        }
                        else if ( player[i].inAcadem == 1 )
                        {
                            cout << "*|---------------------------------------------------------------------------|*" << endl;
                            cout << "*| Current player's ID: " << player[i].playerID << endl;
                            cout << "*|                                                                             " << endl;
                            cout << "*| Current balance: " << player[i].money << endl;
                            cout << "*|---------------------------------------------------------------------------|*" << endl;
                            if (player[i].inAcademCounter<3)
                            {
                                player[i].inAcademCounter=+1;
                            }
                            else {
                                player[i].inAcadem = false;
                            }

                        }
            }
    }
}
}
void outputTile (int location)
{
    cout << endl;
    
    switch (location)
    {
        case 1:
            cout << "+-------------------------+\n";
            cout << "| +---------+ +---------+ | \n";
            cout << "| |  _______| | +-----+ | | \n";
            cout << "| |  |  _____ | |     | | | \n";
            cout << "| |  | |__  | | |     | | | \n";
            cout << "| |  |   |  | | |     | | | \n";
            cout << "| |  |___|  | | |     | | | \n";
            cout << "| |         | | +-----+ | | \n";
            cout << "| +---------+ +---------+ | \n";
            cout << "|                         | \n";
            cout << "|      COLLECT $200.      | \n";
            cout << "|                         | \n";
            cout << "|    <===============E    | \n";
            cout << "|                         | \n";
            cout << "+-------------------------+\n";
            break;
        case 2:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |        CLUB       |  | \n";
            cout << "|  |                   |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $2.        | \n";
            cout << "|  With 1 House   $  10.  | \n";
            cout << "|  With 2 Houses     30.  | \n";
            cout << "|  With 3 Houses     90.  | \n";
            cout << "|  With 4 Houses    160.  | \n";
            cout << "|     With HOTEL $250     | \n";
            cout << "|   Mortgage Value $30.   | \n";
            cout << "|  Houses Cost $50. Each  | \n";
            cout << "|Hotels $50. Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 3:
            cout << "+-------------------------+\n";
            cout << "|          ?????          | \n";
            cout << "|        ???   ???        | \n";
            cout << "|       ??      ???       | \n";
            cout << "|        ??    ???        | \n";
            cout << "|         ?   ???         | \n";
            cout << "|            ??           | \n";
            cout << "|           ???           | \n";
            cout << "|           ????          | \n";
            cout << "|            ??           | \n";
            cout << "|                         | \n";
            cout << "|            ??           | \n";
            cout << "|            ??           | \n";
            cout << "|          CHANCE         | \n";
            cout << "+-------------------------+\n";
            break;
        case 4:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |     ADMISSION     |  | \n";
            cout << "|  |      OFFICE       |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $2.        | \n";
            cout << "|  With 1 House   $  10.  | \n";
            cout << "|  With 2 Houses     30.  | \n";
            cout << "|  With 3 Houses     90.  | \n";
            cout << "|  With 4 Houses    160.  | \n";
            cout << "|     With HOTEL $250     | \n";
            cout << "|   Mortgage Value $30.   | \n";
            cout << "|  Houses Cost $50. Each  | \n";
            cout << "|Hotels $50. Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 5:
            cout << "+-------------------------+\n";
            cout << "|                         | \n";
            cout << "|  ---------------------  | \n";
            cout << "|          HOSTEL         | \n";
            cout << "|       SHEREMET'YVO      | \n";
            cout << "|  ---------------------  | \n";
            cout << "| Rent               $25. | \n";
            cout << "| If 2 hostels owned  50. | \n";
            cout << "| If 3  -  -  -      100. | \n";
            cout << "| If 4  -  -  -      200. | \n";
            cout << "|                         | \n";
            cout << "| Mortgage Value     100. | \n";
            cout << "+-------------------------+\n";
            break;
        case 6:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |       DEAN'S      |  | \n";
            cout << "|  |       OFFICE      |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $6.        | \n";
            cout << "|  With 1 House   $  30.  | \n";
            cout << "|  With 2 Houses     90.  | \n";
            cout << "|  With 3 Houses    270.  | \n";
            cout << "|  With 4 Houses    400.  | \n";
            cout << "|     With HOTEL $550     | \n";
            cout << "|   Mortgage Value $50.   | \n";
            cout << "|  Houses Cost $50. Each  | \n";
            cout << "|Hotels $50. Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 7:
            cout << "+-------------------------+\n";
            cout << "|          ?????          | \n";
            cout << "|        ???   ???        | \n";
            cout << "|       ??      ???       | \n";
            cout << "|        ??    ???        | \n";
            cout << "|         ?   ???         | \n";
            cout << "|            ??           | \n";
            cout << "|           ???           | \n";
            cout << "|           ????          | \n";
            cout << "|            ??           | \n";
            cout << "|                         | \n";
            cout << "|            ??           | \n";
            cout << "|            ??           | \n";
            cout << "|          CHANCE         | \n";
            cout << "+-------------------------+\n";
            break;
        case 8:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |    TRADE UNION    |  | \n";
            cout << "|  |     COMMUNITY     |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $6.        | \n";
            cout << "|  With 1 House   $  30.  | \n";
            cout << "|  With 2 Houses     90.  | \n";
            cout << "|  With 3 Houses    270.  | \n";
            cout << "|  With 4 Houses    400.  | \n";
            cout << "|     With HOTEL $550     | \n";
            cout << "|   Mortgage Value $50.   | \n";
            cout << "|  Houses Cost $50. Each  | \n";
            cout << "|Hotels $50. Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;

        case 9:
            cout << "+-------------------------+\n";
            cout << "|           JUST          | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|         VISITING        | \n";
            cout << "+-------------------------+\n";
            break;
        case 10:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |      CANTEEN      |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $10        | \n";
            cout << "|  With 1 House   $  50.  | \n";
            cout << "|  With 2 Houses    150.  | \n";
            cout << "|  With 3 Houses    450.  | \n";
            cout << "|  With 4 Houses    625.  | \n";
            cout << "|     With HOTEL $750     | \n";
            cout << "|   Mortgage Value $70.   | \n";
            cout << "|  Houses Cost $100 Each  | \n";
            cout << "|Hotels $100 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 11:
            cout << "+-------------------------+\n";
            cout << "|         BOMONKA         | \n";
            cout << "|  ---------------------  | \n";
            cout << "|                         | \n";
            cout << "| If you visit her three  | \n";
            cout << "|          times          | \n";
            cout << "|      then you lose      | \n";
            cout << "|                         | \n";
            cout << "|                         | \n";
            cout << "+-------------------------+\n";
            break;
        case 12:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |       BURGER      |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $10        | \n";
            cout << "|  With 1 House   $  50.  | \n";
            cout << "|  With 2 Houses    150.  | \n";
            cout << "|  With 3 Houses    450.  | \n";
            cout << "|  With 4 Houses    625.  | \n";
            cout << "|     With HOTEL $750     | \n";
            cout << "|   Mortgage Value $70.   | \n";
            cout << "|  Houses Cost $100 Each  | \n";
            cout << "|Hotels $100 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 13:
            cout << "+-------------------------+\n";
            cout << "|  ---------------------  | \n";
            cout << "|        HOSTEL №3        | \n";
            cout << "|  ---------------------  | \n";
            cout << "| Rent               $25. | \n";
            cout << "| If 2 hostels  owned 50. | \n";
            cout << "| If 3  -  -  -      100. | \n";
            cout << "| If 4  -  -  -      200. | \n";
            cout << "|                         | \n";
            cout << "| Mortgage Value     100. | \n";
            cout << "+-------------------------+\n";
            break;
        case 14:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |     MECHANICAL    |  | \n";
            cout << "|  |     ENGINEERING   |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $14        | \n";
            cout << "|  With 1 House   $  70.  | \n";
            cout << "|  With 2 Houses    200.  | \n";
            cout << "|  With 3 Houses    550.  | \n";
            cout << "|  With 4 Houses    750.  | \n";
            cout << "|     With HOTEL $950     | \n";
            cout << "|   Mortgage Value $90.   | \n";
            cout << "|  Houses Cost $100 Each  | \n";
            cout << "|Hotels $100 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 15:
            cout << "+-------------------------+\n";
            cout << "|          ?????          | \n";
            cout << "|        ???   ???        | \n";
            cout << "|       ??      ???       | \n";
            cout << "|        ??    ???        | \n";
            cout << "|         ?   ???         | \n";
            cout << "|            ??           | \n";
            cout << "|           ???           | \n";
            cout << "|           ????          | \n";
            cout << "|            ??           | \n";
            cout << "|                         | \n";
            cout << "|            ??           | \n";
            cout << "|            ??           | \n";
            cout << "|          CHANCE         | \n";
            cout << "+-------------------------+\n";
        break;
        case 16:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |      MACHINE      |  | \n";
            cout << "|  |       TOOLS       |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $14        | \n";
            cout << "|  With 1 House   $  70.  | \n";
            cout << "|  With 2 Houses    200.  | \n";
            cout << "|  With 3 Houses    550.  | \n";
            cout << "|  With 4 Houses    750.  | \n";
            cout << "|     With HOTEL $950     | \n";
            cout << "|   Mortgage Value $90.   | \n";
            cout << "|  Houses Cost $100 Each  | \n";
            cout << "|Hotels $100 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 17:
            cout << "+-------------------------+\n";
            cout << "|                         | \n";
            cout << "|                         | \n";
            cout << "|         FREZER          | \n";
            cout << "|                         | \n";
            cout << "|                         | \n";
            cout << "|                         | \n";
            cout << "+-------------------------+\n";
            break;
        case 18:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |    PHILOSOPHY     |  | \n";
            cout << "|  |                   |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $18        | \n";
            cout << "|  With 1 House   $  90.  | \n";
            cout << "|  With 2 Houses    250.  | \n";
            cout << "|  With 3 Houses    700.  | \n";
            cout << "|  With 4 Houses    875.  | \n";
            cout << "|     With HOTEL $1050    | \n";
            cout << "|   Mortgage Value $110   | \n";
            cout << "|  Houses Cost $150 Each  | \n";
            cout << "|Hotels $150 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 19:
            cout << "+-------------------------+\n";
            cout << "|          ?????          | \n";
            cout << "|        ???   ???        | \n";
            cout << "|       ??      ???       | \n";
            cout << "|        ??    ???        | \n";
            cout << "|         ?   ???         | \n";
            cout << "|            ??           | \n";
            cout << "|           ???           | \n";
            cout << "|           ????          | \n";
            cout << "|            ??           | \n";
            cout << "|                         | \n";
            cout << "|            ??           | \n";
            cout << "|            ??           | \n";
            cout << "|          CHANCE         | \n";
            cout << "+-------------------------+\n";
            break;
        case 20:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |      FOREIGN      |  | \n";
            cout << "|  |      LANGUAGE     |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $18        | \n";
            cout << "|  With 1 House   $  90.  | \n";
            cout << "|  With 2 Houses    250.  | \n";
            cout << "|  With 3 Houses    700.  | \n";
            cout << "|  With 4 Houses    875.  | \n";
            cout << "|     With HOTEL $1050    | \n";
            cout << "|   Mortgage Value $110   | \n";
            cout << "|  Houses Cost $150 Each  | \n";
            cout << "|Hotels $150 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 21:
            cout << "+-------------------------+\n";
            cout << "|  ---------------------  | \n";
            cout << "|        HOSTEL №2        | \n";
            cout << "|  ---------------------  | \n";
            cout << "| Rent               $25. | \n";
            cout << "| If 2 hostels owned  50. | \n";
            cout << "| If 3  -  -  -      100. | \n";
            cout << "| If 4  -  -  -      200. | \n";
            cout << "|                         | \n";
            cout << "| Mortgage Value     100. | \n";
            cout << "+-------------------------+\n";
            break;
        case 22:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |     FINANCIAL     |  | \n";
            cout << "|  |                   |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $22        | \n";
            cout << "|  With 1 House   $ 110.  | \n";
            cout << "|  With 2 Houses    330.  | \n";
            cout << "|  With 3 Houses    800.  | \n";
            cout << "|  With 4 Houses    975.  | \n";
            cout << "|     With HOTEL $1150    | \n";
            cout << "|   Mortgage Value $130   | \n";
            cout << "|  Houses Cost $150 Each  | \n";
            cout << "|Hotels $150 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 23:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";
            cout << "|  |      PHYSICS      |  | \n";
            cout << "|  |                   |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $22        | \n";
            cout << "|  With 1 House   $ 110.  | \n";
            cout << "|  With 2 Houses    330.  | \n";
            cout << "|  With 3 Houses    800.  | \n";
            cout << "|  With 4 Houses    975.  | \n";
            cout << "|     With HOTEL $1150    | \n";
            cout << "|   Mortgage Value $130   | \n";
            cout << "|  Houses Cost $150 Each  | \n";
            cout << "|Hotels $150 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 24:
            cout << "+-------------------------+\n";
            cout << "|         BOMONKA         | \n";
            cout << "|  ---------------------  | \n";
            cout << "|                         | \n";
            cout << "| If you visit her three  | \n";
            cout << "|          times          | \n";
            cout << "|      then you lose      | \n";
            cout << "|                         | \n";
            cout << "|                         | \n";
            cout << "+-------------------------+\n";
            break;
        case 25:
            cout << "+-------------------------+\n";
            cout << "|          GO TO          | \n";
            cout << "|  +-------------------+  | \n";              
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";  
            cout << "|  |    |¯\(°_o)/¯|    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";
            cout << "|  |    |    |    |    |  | \n";  
            cout << "|  +-------------------+  | \n";
            cout << "|          ACADEM         | \n";
            cout << "+-------------------------+\n";
            break;
        case 26:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";  
            cout << "|  |      APPLIED      |  | \n";
            cout << "|  |    MATHEMATICS    |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $26        | \n";
            cout << "|  With 1 House   $ 130.  | \n";
            cout << "|  With 2 Houses    390.  | \n";
            cout << "|  With 3 Houses    900.  | \n";
            cout << "|  With 4 Houses   1100.  | \n";
            cout << "|     With HOTEL $1275    | \n";    
            cout << "|   Mortgage Value $150   | \n";
            cout << "|  Houses Cost $200 Each  | \n";
            cout << "|Hotels $200 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 27:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";  
            cout << "|  |    ENGINEERING    |  | \n";
            cout << "|  |     GRAPHICS      |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $26        | \n";
            cout << "|  With 1 House   $ 130.  | \n";
            cout << "|  With 2 Houses    390.  | \n";
            cout << "|  With 3 Houses    900.  | \n";
            cout << "|  With 4 Houses   1100.  | \n";
            cout << "|     With HOTEL $1275    | \n";    
            cout << "|   Mortgage Value $150   | \n";
            cout << "|  Houses Cost $200 Each  | \n";
            cout << "|Hotels $200 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 28:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";  
            cout << "|  |      REPAIRS      |  | \n";
            cout << "|  |                   |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|                         | \n";
            cout << "|    PAY FOR THE REPAIR   | \n";
            cout << "|      OF EACH HOUSE      | \n";
            cout << "|         FOR 50$         | \n";
            cout << "|                         | \n";
            cout << "|                         |\n";
            cout << "+-------------------------+\n";
            break;
        case 29:
            cout << "+-------------------------+\n";             
            cout << "|  ---------------------  | \n";
            cout << "|        HOSTEL №8        | \n";
            cout << "|  ---------------------  | \n";
            cout << "| Rent               $25. | \n";
            cout << "| If 2 hostels owned  50. | \n";    
            cout << "| If 3  -  -  -      100. | \n";
            cout << "| If 4  -  -  -      200. | \n";
            cout << "|                         | \n";
            cout << "| Mortgage Value     100. | \n";
            cout << "+-------------------------+\n";
            break;
        case 30:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";  
            cout << "|  |    INFORMATION    |  | \n";
            cout << "|  |      SYSTEMS      |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $35        | \n";
            cout << "|  With 1 House   $ 175.  | \n";
            cout << "|  With 2 Houses    500.  | \n";
            cout << "|  With 3 Houses   1100.  | \n";
            cout << "|  With 4 Houses   1300.  | \n";
            cout << "|     With HOTEL $1500    | \n";    
            cout << "|   Mortgage Value $175   | \n";
            cout << "|  Houses Cost $200 Each  | \n";
            cout << "|Hotels $200 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        case 31:
            cout << "+-------------------------+\n";
            cout << "|          ?????          | \n";
            cout << "|        ???   ???        | \n";
            cout << "|       ??      ???       | \n";
            cout << "|        ??    ???        | \n";
            cout << "|         ?   ???         | \n";
            cout << "|            ??           | \n";
            cout << "|           ???           | \n";
            cout << "|           ????          | \n";
            cout << "|            ??           | \n";
            cout << "|                         | \n";
            cout << "|            ??           | \n";
            cout << "|            ??           | \n";
            cout << "|          CHANCE         | \n";
            cout << "+-------------------------+\n";
            break;
        case 32:
            cout << "+-------------------------+\n";
            cout << "|  +-------------------+  | \n";  
            cout << "|  |   TECHNOLOGIES    |  | \n";
            cout << "|  |                   |  | \n";
            cout << "|  +-------------------+  | \n";
            cout << "|        RENT  $35        | \n";
            cout << "|  With 1 House   $ 175.  | \n";
            cout << "|  With 2 Houses    500.  | \n";
            cout << "|  With 3 Houses   1100.  | \n";
            cout << "|  With 4 Houses   1300.  | \n";
            cout << "|     With HOTEL $1500    | \n";    
            cout << "|   Mortgage Value $175   | \n";
            cout << "|  Houses Cost $200 Each  | \n";
            cout << "|Hotels $200 Plus 4 Houses|\n";
            cout << "+-------------------------+\n";
            break;
        default:
            cout << "Your Location Is Not Known To The Output Tile Function";
    }
    cout << endl << endl;     
}
