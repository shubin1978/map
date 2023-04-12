
#pragma once

#include <string>
#include <map>

using namespace std;

void Insert(map<string, string>& phoneBook, string phone, string name){
    phoneBook.insert(pair<string, string>(phone, name));
}
void UpdateName(map<string, string>& phoneBook, string phone, string name){
    //TODO добавить проверку на существование телефона <phone>, перед добавлением
    //имени. Если не сущетсвует, то просто игнорируем.
    phoneBook[phone] = name;
}
void UpdatePhone(map<string, string>& phoneBook, string phone, string name){
    //TODO реализовать функцию
}
void Delete(map<string, string>& phoneBook, string phone){
    phoneBook.erase(phone);
}

string FindByPhone(map<string, string>& phoneBook,string phone){
    // TODO подумать, что возвращать в случае отсутствия номера
    return phoneBook[phone];
}
map<string,string> FindByName(map<string, string>& phoneBook,string name){
    map<string,string> result;
    for (auto item:phoneBook){
        if (item.second == name){
            result.insert(item);
        }
    }
    return result;
}