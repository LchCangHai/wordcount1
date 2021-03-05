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
    cout << "请输入读入文件和输出文件的路径：\n";
    cin >> filename;
    //cin.clear();
    cin >> outFile;

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
    //myfun.showWord(); //输出所有单词及其出现次数
    fclose(point);

    ofstream outfile(outFile);
    string temp2 = "characters: " + to_string(charCnt) + "\n";
    string temp3 = "words: " + to_string(wordCnt) + "\n";
    string temp1 = "lines: " + to_string(lineCnt) + "\n";

    cout << "characters: " << charCnt << endl;
    cout << "words: " << wordCnt << endl;
    cout << "lines: " << lineCnt << endl;

    // 前3行
    outfile << temp1 << temp2 << temp3;
    vector<PAIR> mymapvec(myfun.mymap.begin(), myfun.mymap.end());
    sort(mymapvec.begin(), mymapvec.end(), CmpByValue());
    int length1 = mymapvec.size();
    // 后10行
    if (length1 <= 10) {
        for (int i = 0; i != mymapvec.size(); ++i) {
            outfile << mymapvec[i].first << ": " << mymapvec[i].second << endl;
            cout << mymapvec[i].first << ": " << mymapvec[i].second << endl;
        }
    }
    else {
        for (int i = 0; i < 10; ++i) {
            outfile << mymapvec[i].first << ": " << mymapvec[i].second << endl;
            cout << mymapvec[i].first << ": " << mymapvec[i].second << endl;
        }
    }
    outfile.close();
    return 0;
}



