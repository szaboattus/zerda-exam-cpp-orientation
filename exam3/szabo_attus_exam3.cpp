//============================================================================
// Name        : szabo_attus_exam3.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "ErrorHandler.h"
#include "ArgHandler.h"
#include "FileHandler.h"
#include "Decrypt.h"
using namespace std;

int main(int argc, char** argv) {
  ErrorHandler errorhandler;
  ArgHandler arghandler(argc, argv);
  FileHandler filehandler;
  Decrypt decrypt;
  filehandler.make_output(arghandler.get_output_file_name(),decrypt.make_decrypt(filehandler.get_input(arghandler.get_input_file_name()),arghandler.get_shiftnumber()));
  return 0;
}
