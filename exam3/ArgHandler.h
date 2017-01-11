/*
 * ArgHandler.h
 *
 *  Created on: 2017 jan. 11
 *      Author: win7
 */

#ifndef ARGHANDLER_H_
#define ARGHANDLER_H_
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

class ArgHandler {
private:
  int argc;
  char** argv;
  string input_file_name;
  string output_file_name;
  int shiftnumber;
public:
  ArgHandler(int argc, char** argv);
  bool is_arguments_ok();
  bool is_arguments_length_ok();
  string get_input_file_name();
  string get_output_file_name();
  int get_shiftnumber();
  bool is_filename_ok(string str);
};

#endif /* ARGHANDLER_H_ */
