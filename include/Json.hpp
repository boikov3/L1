//Copyright 2019 <boikov3>
#ifndef INCLUDE_JSON_HPP_
#define INCLUDE_JSON_HPP_

#include <any>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <typeinfo>
#include <fstream>


using std::cout;
using std::cin;
using std::string;
using std::any;
using std::vector;
using std::map;
using std::any_cast;

class Json {
private:
    map <string, any> json_map;
    vector <any> json_arr;

    bool is_json_array = false;
    bool is_json_object = false;

    void sozdaybt_massiva(const string& s);
    void sozdaybt_map(const string& s);

public:
    explicit Json(const string& s);

    bool is_array() const;

    bool is_object() const;

    std::any& operator[](const string& key);

    std::any& operator[](int index);

    static Json parse(const string& s);

    static Json parseFile(const string& path_to_file);

    static unsigned int uberi_probely(unsigned int i, const string& s);

    static string slovo(unsigned int &i, const string& s);

    static unsigned int Nalichie_skobok(unsigned int i, const string& s);

    static string vyrizaem_chislo(unsigned int i, const string& s);
};

#endif // INCLUDE_JSON_HPP_
