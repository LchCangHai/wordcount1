#include "head.h"

typedef pair<string, int> PAIR;

// 对map中value值进行排序
struct CmpByValue {
	bool operator()(const PAIR& lhs, const PAIR& rhs) {
		return rhs.second < lhs.second;
	}
};