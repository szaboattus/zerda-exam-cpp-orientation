#ifndef FILEHANDLER_H_
#define FILEHANDLER_H_
#include "ArgHandler.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class FileHandler {
public:
  FileHandler();
  string get_input(string filename);
  void make_output(string filename, string text);
};

#endif /* FILEHANDLER_H_ */
