#include "head.h"

int main() {
    FILE* point;      //文件指针
    char buffer[500]; //读出文件中的一行
    char filename[50];//读取文件路径
    char outFile[50];//写入结果的文件路径
    fun myfun;

    int charCnt = 0,
        wordCnt = 0,
        lineCnt = 0;

    cin >> filename >> outFile;

    if ((point = fopen(filename, "rb")) == NULL) {
        perror(filename);
        return NULL;
    }
    while (fgets(buffer, 500, point) != NULL) {
        string str = buffer;
        ++lineCnt;
        charCnt += strlen(buffer);
        wordCnt += myfun.countWord(str);
    }

    return 0;
}



