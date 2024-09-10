#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define maxn 1005
int high[maxn];
// ����k��������ˮ��Ҫ����ˮ
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
    // ע��ѭ���˳�����
	while (scanf("%d%d", &n, &m) == 2 && n) {
 		// ע���ʼ��
		memset(high, 0, sizeof(high));
		int i;
		for (i = 0; i < n * m; i++) {
			scanf("%d", high + i);
		}
		int v;
		scanf("%d", &v);
        // ���ж���ǰ,��Ҫ����
		sort(high, high + i);
		int left = 0;
		int right = i - 1;
		int all;
		int mid;
		while (left < right) {
            // �ƶ�right,��Ҫ��1,��Ȼ����ѭ��
			mid = (left + right + 1) / 2;
			all = sum(mid);
            // С�ڵ���ʱ,��left����Ϊmid
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
        // ע����������Ҫһ������
		printf("%.2f percent of the region is under water.\n\n", (double)(right + 1) / i * 100);
	}
	return 0;
}