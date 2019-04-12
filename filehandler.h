#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class fileHandler
{
private:
	
public:
	string fileRead(string path);
	void fileWrite(string path, string str);
};

#endif
