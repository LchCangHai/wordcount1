#include "head.h"
typedef pair<string, int> PAIR;

// 对map中value值进行排序
struct CmpByValue {
    bool operator()(const PAIR& lhs, const PAIR& rhs) {
        return rhs.second < lhs.second;
    }
};

int main() {
    char buffer[500]; //读出文件中的一行
    fun myfun;

    int charCnt = 0,
        wordCnt = 0,
        lineCnt = 0;

    while (cin >> buffer) {
        string str = buffer;
        ++lineCnt;
        charCnt += strlen(buffer);
        wordCnt += myfun.countWord(str);
        myfun.getWord(str);
    }
    //myfun.showWord(); //输出所有单词及其出现次数

    // 前3行
    cout << "行数为：" << lineCnt << endl;
    cout << "字符数为：" << charCnt << endl;
    cout << "单词数为：" << wordCnt << endl;

    vector<PAIR> mymapvec(myfun.mymap.begin(), myfun.mymap.end());
    sort(mymapvec.begin(), mymapvec.end(), CmpByValue());
    int length1 = mymapvec.size();
    // 后10行
    if (length1 <= 10) {
        for (int i = 0; i != mymapvec.size(); ++i) {
            cout << mymapvec[i].first << endl;
        }
    }
    else {
        for (int i = 0; i < 10; ++i) {
            cout << mymapvec[i].first << endl;
        }
    }
    return 0;
}



