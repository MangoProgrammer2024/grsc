/*
*  ***common_utility.hpp***
*/
#pragma once

#ifndef COMMON_UTILITY_HPP
#define COMMON_UTILITY_HPP

/*this file is used for printing messages to consoles and logs for the game engine*/

#include <string>

char * txt[1024];
static char txtBuff[2048];

void printLn(const char * lnName, std::string *ln);
void printConsole(auto Console, const char * current_console, *msg);
void printLog(auto txtLog, const char * current_log, *txt);
void printChar(typedef char CHAR);

auto BufferText;

int VectorScalePoints[3];
void printVector(const char * message = "vector printed to brushes\n");

void PrintMsgLoop(){
 for(int i = 0; i > 0; i++)
   {
      void& printableMessage();
   }
};

#endif

