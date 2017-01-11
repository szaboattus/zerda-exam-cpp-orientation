/*
 * ErrorHandler.cpp
 *
 *  Created on: 2017 jan. 11
 *      Author: win7
 */

#include "ErrorHandler.h"

using namespace std;

ErrorHandler::ErrorHandler() {
}

void ErrorHandler::write_errors (int type) {
  switch(type) {
    case 0 :
      cout << "Invalid parameters!" << endl;
      break;
    default :
      break;
  }
}
