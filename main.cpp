#include <iostream>
#include <fstream>
#include <string>
#include <map>

#include "FileHelper.h"
#include "ConsoleHelper.h"
#include "phoneBook.h"

using namespace std;

int main() {

    map<string, string> phoneBook = ImportFromFile("export.psv");

    ShowAll(phoneBook);

    return 0;
}
