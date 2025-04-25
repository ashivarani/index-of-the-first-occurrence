int strStr(char* haystack, char* needle) {
    int index = 0;
    while (*haystack) {
        char* h = haystack;
        char* n = needle;
        while ( *h == *n && *n){
        *h++;
        *n++;}
        if (*n == '\0') {
         return index;}
         *haystack++;
         index++;
    }
    return -1;
}