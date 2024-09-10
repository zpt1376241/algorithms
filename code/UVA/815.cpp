#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define maxn 1005
int high[maxn];
// 计算k个柱子有水需要多少水
int sum(int k) {
	int all = 0;
	for (int i = 0; i < k; i++) {
		all= all + (high[k] - high[i]) * 100;
	}
	return all;
}
int main() {
	int n, m;
	int kase = 0;
    // 注意循环退出条件
	while (scanf("%d%d", &n, &m) == 2 && n) {
 		// 注意初始化
		memset(high, 0, sizeof(high));
		int i;
		for (i = 0; i < n * m; i++) {
			scanf("%d", high + i);
		}
		int v;
		scanf("%d", &v);
        // 进行二分前,需要排序
		sort(high, high + i);
		int left = 0;
		int right = i - 1;
		int all;
		int mid;
		while (left < right) {
            // 移动right,需要加1,不然会死循环
			mid = (left + right + 1) / 2;
			all = sum(mid);
            // 小于等于时,把left设置为mid
			if (all <= v) {
				left = mid;
			} else {
				right = mid - 1;
			}
		}
		all = sum(left);
		double h = (double)(v - all) / (double)((right + 1) * 100) + (double)high[right];
		printf("Region %d\n", ++kase);
		printf("Water level is %.2f meters.\n", h);
        // 注意输出完后需要一个空行
		printf("%.2f percent of the region is under water.\n\n", (double)(right + 1) / i * 100);
	}
	return 0;
}