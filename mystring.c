#include <stddef.h>

// strlen
int mystrlen(char *s) {
    int sum = 0;
    while(*s) {
        s++;
        sum++;
    }
    return sum;
}

// strncpy
char * mystrncpy(char *dest, char *source, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(dest + i) = *(source + i);
    }
    return dest;
}
// strcat
char * mystrcat(char *dest, char *source) {
    int l1 = mystrlen(dest);
    int l2 = mystrlen(source);
    int i;
    for (i = 0; i < l2; i++) {
        *(dest + l1 + i) = *(source + i);
    }
    *(dest + l1 + l2) = '\0';
    return dest;
}

// strcmp
int mystrcmp(char *s1, char *s2) {
    int l;
    if (mystrlen(s1) > mystrlen(s2)) l = mystrlen(s1);
    else l = mystrlen(s2);
    int i;
    for (i = 0; i < l; i++) {
        if (s1[i] < s2[i]) return -1;
        if (s1[i] > s2[i]) return 1;
    }
    return 0;
}
// strchr
char * mystrchr(char *s, char c) {
    if (c == 0) return s + mystrlen(s);
    while(*s) {
        if (*s == c) return s;
        s++;
    }
    return 0;
}
