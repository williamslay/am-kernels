#include "klibtest.h"

void test_strcmp() {
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    assert(strcmp(str1, str2) == 0);

    const char *str3 = "Apple";
    const char *str4 = "Banana";
    assert(strcmp(str3, str4) < 0);

    const char *str5 = "Orange";
    const char *str6 = "Grape";
    assert(strcmp(str5, str6) > 0);

    const char *str7 = "";
    const char *str8 = "Non-empty";
    assert(strcmp(str7, str8) < 0);

    const char *str9 = "";
    const char *str10 = "";
    assert(strcmp(str9, str10) == 0);
}

int main() {
    test_strcmp();
    return 0;
}