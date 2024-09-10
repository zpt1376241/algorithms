#include <stdio.h>
#include <string.h>
#define maxd 10000
// 定义结构体
struct Cmd {
	char c[5];
	int r1, c1, r2, c2;
	int a, x[20];
} cmd[maxd];
// 因为只运行单个程序,选择设置全局变量
int r, c, n;
// 模拟指令进行,使用了'引用'
int simulate(int &r0, int &c0) {
	 for (int i = 0; i < n; i++) {
         // 交换
	 	if (cmd[i].c[0] == 'E') {
	 		if (cmd[i].r1 == r0 && cmd[i].c1== c0) {
	 			r0 = cmd[i].r2;
	 			c0 = cmd[i].c2;
	 		} else if (cmd[i].r2 == r0 && cmd[i].c2 == c0) {
	 			r0 = cmd[i].r1;
	 			c0 = cmd[i].c1;
	 		} 
		} else {
 			int dr = 0;
 			int dc = 0;
 			for (int j = 0; j < cmd[i].a; j++) {
 				int x = cmd[i].x[j];
                // 插入
 				if (cmd[i].c[0] == 'I') {
                    // 记录查询的行或列要怎么移动
 					if (cmd[i].c[1] == 'R' && x <= r0) {
 						dr++; 
 					} else if (cmd[i].c[1] == 'C' && x <= c0) {
 						dc++;
 					}
 				} else {
                    // 删除
 					if (cmd[i].c[1] == 'R' && x == r0) {
 						return 0;
 					} else if (cmd[i].c[1] == 'C' && x == c0) {
 						return 0;
 					} else if (cmd[i].c[1] == 'R' && x < r0) {
 						dr--;
 					} else if (cmd[i].c[1] == 'C' && x < c0) {
 						dc--;
 					}
 				}
 			}
            // 移动
            c0 = c0 + dc;
            r0 = r0 + dr;	
 		}
 	}
	 return 1;
}
int main() {
	int kase = 0;
	int q, r0, c1;
	while (scanf("%d%d%d", &r, &c, &n) == 3 && r) {
		for (int i = 0; i < n; i++) {
			scanf("%s", cmd[i].c);
			if (cmd[i].c[0] == 'E') {
				scanf("%d%d%d%d", &cmd[i].r1,&cmd[i].c1, &cmd[i].r2, &cmd[i].c2);
			} else {
				scanf("%d", &cmd[i].a);
				for (int j = 0; j < cmd[i].a; j++) {
					scanf("%d", &cmd[i].x[j]);
				}
			}
		}
        // 注意要有空行
		if (kase > 0) {
			printf("\n");
		}
		printf("Spreadsheet #%d\n", ++kase);
		scanf("%d", &q);
		while (q--) {
			int c0, r0;
			scanf("%d%d", &r0, &c0);
			printf("Cell data in (%d,%d) ", r0, c0);
            // 模拟移动
			if (simulate(r0, c0) == 0) {
				printf("GONE\n");
			} else {
				printf("moved to (%d,%d)\n", r0, c0);
			}
		}
	} 
	return 0;
}
