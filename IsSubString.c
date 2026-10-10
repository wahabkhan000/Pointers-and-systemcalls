#include <stdio.h>

int isSubstring(const char *txt,const char *pt) {
    int index = 0;
    int last_index = -1;
    int backup_index = 0;

    while (txt[index] != '\0') {
        if (txt[index] == pt[0]) {
            int index_copy = index;
            backup_index = last_index;
            last_index = index;
            int pt_index = 0;
            while (pt[pt_index] != '\0') {
                if (pt[pt_index] != txt[index_copy]) {
                    last_index = backup_index;
                    break;
                }
                pt_index++;
                index_copy++;
            }
        }
        index++;
    }
    return last_index;
}

int main() {
    char str[100];
    scanf("%s",str);
    char pt[100];
    scanf("%s",pt);
    int index = isSubstring(str,pt);
    if (index == -1) {
        printf("Not a subString\n");
    }
    else {
        printf("Present at %d\n",index);
    }
}
