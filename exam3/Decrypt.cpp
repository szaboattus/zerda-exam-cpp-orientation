/*
 * Decrypt.cpp
 *
 *  Created on: 2017 jan. 11
 *      Author: win7
 */

#include "Decrypt.h"

Decrypt::Decrypt() {}

string Decrypt::make_decrypt(string text, int _shiftnumber) {
  for (unsigned int i = 0; i < text.length(); i++) {
    if ((text[i] > 64 && text[i] < 91) || (text[i] > 96 && text[i] < 123)) {
      text[i] = text[i]+_shiftnumber;
    }
  }
  return text;
}

//TEST_CASE("make_decrypt give back a string") {
//  Decrypt decrypt;
//  REQUIRE(decrypt.make_decrypt == "");
//}
