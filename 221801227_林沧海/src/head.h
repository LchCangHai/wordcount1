#pragma once
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <map>
#include <regex>
using namespace std;


class fun {
public:
	int countWord(string str); //计算一行（一个字符串中）的单词数
	void getWord(string str, map<string, int>& mymap);
	map<string, int> getWordTest(string str);
};