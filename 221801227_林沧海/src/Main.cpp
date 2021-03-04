#include "head.h"
typedef pair<string, int> PAIR;

// 对map中value值进行排序
struct CmpByValue {
    bool operator()(const PAIR& lhs, const PAIR& rhs) {
        return rhs.second < lhs.second;
    }
};

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
    string temp1 = "行数为：" + to_string(lineCnt) + "\n";
    string temp2 = "字符数为：" + to_string(charCnt) + "\n";
    string temp3 = "单词数为：" + to_string(wordCnt) + "\n";
    cout << "行数为：" << lineCnt << endl;
    cout << "字符数为：" << charCnt << endl;
    cout << "单词数为：" << wordCnt << endl;
    // 前3行
    outfile << temp1 << temp2 << temp3;
    vector<PAIR> mymapvec(myfun.mymap.begin(), myfun.mymap.end());
    sort(mymapvec.begin(), mymapvec.end(), CmpByValue());
    int length1 = mymapvec.size();
    // 后10行
    if (length1 <= 10) {
        for (int i = 0; i != mymapvec.size(); ++i) {
            outfile << mymapvec[i].first << endl;
            cout << mymapvec[i].first << endl;
        }
    }
    else {
        for (int i = 0; i < 10; ++i) {
            outfile << mymapvec[i].first << endl;
            cout << mymapvec[i].first << endl;
        }
    }
    outfile.close();
    return 0;
}



