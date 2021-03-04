#include "head.h"

// 计算一行（一个字符串中）的单词数
int fun::countWord(string str) {
	regex words_regex("[a-zA-Z]{4}[a-za-z0-9]*"); // 判断单词的正则表达式

    auto words_begin = sregex_iterator(
        str.begin(),
        str.end(),
        words_regex);
    auto words_end = sregex_iterator();

    return distance(words_begin, words_end);
}


