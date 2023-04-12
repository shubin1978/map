#include <iostream>
#include <fstream>
#include <string>
#include <map>

#include "FileHelper.h"
#include "ConsoleHelper.h"
#include "phoneBook.h"

using namespace std;

int main() {

    auto phoneBook = ImportFromFile("export.psv");
    ShowAll(phoneBook);
    cout << "---" << endl;

    Insert(phoneBook,"D", "DD");
    ShowAll(phoneBook);
    cout << "---" << endl;

    UpdateName(phoneBook,"C","CC");
    ShowAll(phoneBook);
    cout << "---" << endl;

    Delete(phoneBook,"B");
    ShowAll(phoneBook);
    cout << "---" << endl;

    auto name = FindByPhone(phoneBook,"D");
    cout << name << endl;

    return 0;
}
