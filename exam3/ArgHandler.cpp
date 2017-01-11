/*
 * ArgHandler.cpp
 *
 *  Created on: 2017 jan. 11
 *      Author: win7
 */

#include "ArgHandler.h"
#include <iostream>

ArgHandler::ArgHandler(int _argc, char** _argv) {
  this->argc = _argc;
  this->argv = _argv;
  if (is_arguments_ok()) {
    this->shiftnumber = atoi(argv[3]);
    this->input_file_name = argv[1];
    this->output_file_name = argv[5];
  }
  else {
    //error
  }
}

bool ArgHandler::is_arguments_ok(){
  if (is_arguments_length_ok()) {
    if (argv[2][1] == 's' && argv[3] > 0 && argv[4][1] == 'o' ) {
      return true;
    }
    else {
      return false;
    }
  }
  else {
    return false;
  }
}

bool ArgHandler::is_arguments_length_ok(){
  return argc > 4 && argc < 7;
}

bool ArgHandler::is_filename_ok(string str) {
  string temp="";
  for (unsigned int i = 1; i < 4; i++) {
    temp += str[str.length() - i];
  }
  return temp == "txt";
}

string ArgHandler::get_input_file_name() {
  return input_file_name;
}
string ArgHandler::get_output_file_name() {
  return output_file_name;
}

int ArgHandler::get_shiftnumber() {
  return shiftnumber;
}
