/*****************************************************************************/
//  Filename:      Lab3.cpp
//
//  Author:        Matthew Fu
//
//  Date:          2018.05.12
//
//
//  Description:   This file takes in the amount of TVs, DVD players,
//                 Remote Controller, CD players, and Audio Visual Processor
//                 sold and outputs their unit price and total price neatly.
//
//
/*****************************************************************************/

#include <iostream>
#include <iomanip>
#define STATE_SALES_TAX 0.0725

//The state sales tax is assumed to be 7.25% which is the 
//California state sales tax rate.
using namespace std;

int main()
{
   //First, I declare all the unit prices of each item with a const double.
   //They are all in dollars. Then I declare the amount sold
   const double TVUNITPRICE = 500.00;
   const double DVDPLAYERUNITPRICE = 380.00;
   const double REMOTECONTROLLERPLAYERUNITPRICE = 35.20;
   const double CDPLAYERUNITPRICE = 74.50;
   const double AUDIOVISUALPROCESSORUNITPRICE = 1500.00;
   int TVs, DVDPlayers, RemoteController, CDPlayer, AudioVisualProcessor;

   cout << "Solution provided by Matthew Fu\n" << endl;

   //I then ask for how many of each items were sold.
   cout << "How many TVs were sold? ";
   cin >> TVs;
   cout << "How many DVD players were sold? ";
   cin >> DVDPlayers;
   cout << "How many Remote Controller units were sold? ";
   cin >> RemoteController;
   cout << "How many CD Players were sold? ";
   cin >> CDPlayer;
   cout << "How many AV Processors were sold? ";
   cin >> AudioVisualProcessor;
   
   //After receiving the data, I compute the price of 
   //how many items were sold. I then add them up to get the subtotal
   //Then I compute the tax by multiplying the state sales tax rate by the subtotal
   //and add that number to the subtotal to get the total.

   double TotalTVPrice = TVUNITPRICE * TVs;
   double TotalDVDPlayersPrice = DVDPLAYERUNITPRICE * DVDPlayers;
   double TotalRemoteControllerPrice = REMOTECONTROLLERPLAYERUNITPRICE * RemoteController;
   double TotalCDPlayerPrice = CDPLAYERUNITPRICE * CDPlayer;
   double TotalAudioVisualProcessor = AUDIOVISUALPROCESSORUNITPRICE * AudioVisualProcessor;
   double subtotal = TotalTVPrice + TotalDVDPlayersPrice + TotalRemoteControllerPrice + TotalCDPlayerPrice + TotalAudioVisualProcessor;
   double tax = STATE_SALES_TAX * subtotal;
   double total = tax + subtotal;

   //Afterwards I have them displayed neatly. I use setprecision(2) and fixed to ensure
   //that the output has two decimal points. The various setw amount are to display 
   //the output neatly. If there are 0's, the information will not be displayed.

   cout << setprecision(2) << fixed << endl;
   cout << "QTY" << setw(12) << "Description" << setw(21) << "Unit Price" << setw(14) << "Total Price" << endl;
   if (TVs != 0)
      cout << TVs << setw(4) << "TV" << setw(30) << TVUNITPRICE << setw(14) << TotalTVPrice << endl;
   if (DVDPlayers != 0)
      cout << DVDPlayers << setw(6) << "DVD" << setw(29) << DVDPLAYERUNITPRICE << setw(14) << TotalDVDPlayersPrice << endl;
   if (RemoteController != 0)
      cout << RemoteController << setw(20) << "REMOTE CONTROLLER" << setw(15) << REMOTECONTROLLERPLAYERUNITPRICE << setw(14) << TotalRemoteControllerPrice << endl;
   if (CDPlayer != 0)
      cout << CDPlayer << setw(12) << "CD PLAYER" << setw(23) << CDPLAYERUNITPRICE << setw(14) << TotalCDPlayerPrice << endl;
   if (AudioVisualProcessor != 0)
      cout << AudioVisualProcessor << setw(14) << "AV PROCESSOR" << setw(20) << AUDIOVISUALPROCESSORUNITPRICE << setw(14) << TotalAudioVisualProcessor << endl;
   cout << endl;

   //At the end, I put the subtotal, tax, and total out
   cout << setw(30) << "SUBTOTAL" << setw(12) << subtotal << endl;
   cout << setw(30) << "TAX" << setw(12) << tax << endl;
   cout << setw(30) << "TOTAL" << setw(12) << total << endl;

      return 0;
}
//Output of the first dataset.
/*
Solution provided by Matthew Fu

How many TVs were sold? 13
How many DVD players were sold? 2
How many Remote Controller units were sold? 3
How many CD Players were sold? 1
How many AV Processors were sold? 21

QTY Description           Unit Price   Total Price
13  TV                        500.00       6500.00
2   DVD                       380.00        760.00
3   REMOTE CONTROLLER          35.20        105.60
1   CD PLAYER                  74.50         74.50
21  AV PROCESSOR             1500.00      31500.00

                      SUBTOTAL    38940.10
                           TAX     2823.16
                         TOTAL    41763.26

Press any key to continue . . .*/

//Output of the second data set.
/*
Solution provided by Matthew Fu

How many TVs were sold? 0
How many DVD players were sold? 2
How many Remote Controller units were sold? 0
How many CD Players were sold? 1
How many AV Processors were sold? 0

QTY Description           Unit Price   Total Price
2   DVD                       380.00        760.00
1   CD PLAYER                  74.50         74.50

                      SUBTOTAL      834.50
                           TAX       60.50
                         TOTAL      895.00
Press any key to continue . . .

Press any key to continue . . .*/

