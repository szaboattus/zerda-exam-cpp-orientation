#include "FileHandler.h"

FileHandler::FileHandler() {
}

string FileHandler::get_input(string filename) {
  string text;
  std::ifstream myfile;
  myfile.open(filename);
  if (myfile.is_open()) {
    (getline(myfile, text));
  }
  else {
    //error
  }
  myfile.close();
  return text;
}

void FileHandler::make_output(string filename, string text) {
  ofstream myfile;
  myfile.open(filename);
  if (myfile.is_open()) {
    myfile << text;
  }
  else {
    //error
  }
  myfile.close();
}
