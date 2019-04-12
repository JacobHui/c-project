#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class fileHandler
{
public:
	string fileRead(string path);
	void fileWrite(string path, string str);
};
#endif
