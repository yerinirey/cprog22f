#include <stdio.h>
#include <string.h>
#define LINE_SIZE 100

int main() {
    char buffer[LINE_SIZE];
    char freq[100][100], tmp[100];
    FILE *fp = fopen("london.txt", "r");
    char *token;
    char seps[] = " ,\t\n";
    int cnt[100], ch = 0, i = 0;
    int tmp2;
    if(fp == NULL) {
        printf("Failed to open file\n");
        return -1;
    }

    while(fgets(buffer, LINE_SIZE - 1, fp) != NULL) {

        
        token = strtok(buffer, seps);

        while(token != NULL) {
            for(i = 0; freq[i][0] != '\0'; i++) {
                if(!strcmp(token, freq[i])) cnt[i]++, ch = 1;
            }
            if(!ch) {
                strcpy(freq[i], token);
                cnt[i]++;
            }
            ch = 0;
            token = strtok(NULL, seps);         // 다음 문자열
        }
    }

    int len = i;
    for(i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - 1; j++) {
            if(strcmp(freq[j], freq[j + 1]) > 0) {
                strcpy(tmp, freq[j]);
                strcpy(freq[j], freq[j + 1]);
                strcpy(freq[j + 1], tmp);
                tmp2 = cnt[j];
                cnt[j] = cnt[j + 1];
                cnt[j + 1] = tmp2;
            }
        }
    }
    for(i = 0; freq[i][0] != '\0'; i++) {
            printf("%d\t", cnt[i]);
            printf("%s\n", freq[i]);
        }

    fclose(fp);
    return 0;
}