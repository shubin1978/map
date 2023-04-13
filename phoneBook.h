
#pragma once

#include <string>
#include <map>

using namespace std;

void Insert(map<string, string>& phoneBook, string phone, string name){
    phoneBook.insert(pair<string, string>(phone, name));
}
void UpdateName(map<string, string>& phoneBook, string phone, string name){
    auto it = phoneBook.find(phone);
    if (it != phoneBook.end()){
        it->second = name;
    }
}
void UpdatePhone(map<string, string>& phoneBook, string phone, string name, string newphone){
    for (auto item : phoneBook) {
        if (item.second == name and item.first == phone) {
            phoneBook.insert(pair<string, string>(newphone, name));
            phoneBook.erase(phone);
            return;
        }
    }
}
void Delete(map<string, string>& phoneBook, string phone){
    phoneBook.erase(phone);
}

string FindByPhone(map<string, string>& phoneBook,string phone){
    auto it = phoneBook.find(phone);
    if (it == phoneBook.end()){
        return  "no phone";
    }

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