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
#define STATE_SALES_TAX 0.053

//The state sales tax is assumed to be 5.3% just
//like in lab 2
using namespace std;

int main()
{
   const double TVUNITPRICE = 500.00;
   const double DVDPLAYERUNITPRICE = 380.00;
   const double REMOTECONTROLLERPLAYERUNITPRICE = 35.20;
   const double CDPLAYERUNITPRICE = 74.50;
   const double AUDIOVISUALPROCESSORUNITPRICE = 1500.00;
   int TVs, DVDPlayers, RemoteController, CDPlayer, AudioVisualProcessor;

   cout << "How many TVs were sold?";
   cin >> TVs;
   cout << "How many DVD players were sold?";
   cin >> DVDPlayers;
   cout << "How many Remote Controller units were sold?";
   cin >> RemoteController;
   cout << "How many CD Players were sold?";
   cin >> CDPlayer;
   cout << "How many AV Processors were sold?";
   cin >> AudioVisualProcessor;
   

   double TotalTVPrice = TVUNITPRICE * TVs;
   double TotalDVDPlayersPrice = DVDPLAYERUNITPRICE * DVDPlayers;
   double TotalRemoteControllerPrice = REMOTECONTROLLERPLAYERUNITPRICE * RemoteController;
   double TotalCDPlayerPrice = CDPLAYERUNITPRICE * CDPlayer;
   double TotalAudioVisualProcessor = AUDIOVISUALPROCESSORUNITPRICE * AudioVisualProcessor;
   double subtotal = TotalTVPrice + TotalDVDPlayersPrice + TotalRemoteControllerPrice + TotalCDPlayerPrice + TotalAudioVisualProcessor;
   double tax = STATE_SALES_TAX * subtotal;
   double total = tax + subtotal;

   cout << setprecision(2) << fixed << endl;
   cout << "QTY" << setw(3) << "Description" << setw(17) << "Unit Price" << setw(10) << "Total Price" << endl;
   if (TVs != 0)
      cout << TVs << setw(3) << "TV" << setw(17) << TVUNITPRICE << setw(10) << TotalTVPrice << endl;
   if (DVDPlayers != 0)
      cout << DVDPlayers << setw(3) << "DVD" << setw(17) << DVDPLAYERUNITPRICE << setw(10) << TotalDVDPlayersPrice << endl;
   if (RemoteController != 0)
      cout << RemoteController << setw(3) << "REMOTE CONTROLLER" << setw(17) << REMOTECONTROLLERPLAYERUNITPRICE << setw(10) << TotalRemoteControllerPrice << endl;
   if (CDPlayer != 0)
      cout << CDPlayer << setw(3) << "CD PLAYER" << setw(17) << CDPLAYERUNITPRICE << setw(10) << TotalCDPlayerPrice << endl;
   if (AudioVisualProcessor != 0)
      cout << AudioVisualProcessor << setw(3) << "AV PROCESSOR" << setw(17) << AUDIOVISUALPROCESSORUNITPRICE << setw(10) << TotalAudioVisualProcessor << endl << endl;
   cout << setw(20) << "SUBTOTAL" << setw(3) << subtotal << endl;
   cout << setw(20) << "TAX" << setw(6) << tax << endl;
   cout << setw(20) << "TOTAL" << setw(4) << total << endl;

      return 0;
}

