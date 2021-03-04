#include "head.h"

int main() {
    FILE* point;      //文件指针
    char buffer[500]; //读出文件中的一行
    char filename[100];//读取文件路径
    char outFile[100];//写入结果的文件路径
    fun myfun;

    int charCnt = 0,
        wordCnt = 0,
        lineCnt = 0;
    cout << "请输入读入文件和输出文件的路径：";
    cin >> filename;
    //cin.clear();
    cin >> outFile;
    cout << filename << endl;
    cout << outFile << endl;

    if ((point = fopen(filename, "rb")) == NULL) {
        perror(filename);
        return NULL;
    }
    while (fgets(buffer, 500, point) != NULL) {
        string str = buffer;
        ++lineCnt;
        charCnt += strlen(buffer);
        wordCnt += myfun.countWord(str);
        myfun.getWord(str);
    }
    myfun.showWord();



    return 0;
}



