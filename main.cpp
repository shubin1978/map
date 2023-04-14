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

    UpdateName(phoneBook,"L","SS");
    ShowAll(phoneBook);
    cout << "---" << endl;

    UpdateName(phoneBook,"K","SS");
    ShowAll(phoneBook);
    cout << "---" << endl;

    map<string,string> Name = FindByName(phoneBook,"AA");
    for (auto item : Name){
        cout << item.first << " : " << item.second << endl;
    }
    cout << "---" << endl;


    UpdatePhone(phoneBook,"C", "CC", "G");
    ShowAll(phoneBook);
    cout << "---" << endl;

    Insert(phoneBook,"F","FF");
    ShowAll(phoneBook);
    cout << "---" << endl;

    Delete(phoneBook,"F");
    ShowAll(phoneBook);
    cout << "---" << endl;

    auto name1 = FindByPhone(phoneBook,"K");
    cout << name1 << endl;
    cout << "---" << endl;

    auto name2 = FindByPhone(phoneBook,"N");
    cout << name2 << endl;
    cout << "---" << endl;

    auto result = FindByName(phoneBook,"AA");
    for(auto item : result){
        cout << item.first << " : " << item.second << endl;
    }

    return 0;
}
