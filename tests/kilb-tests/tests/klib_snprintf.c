#include "klibtest.h"
#include <limits.h>

long long testset[] = {0, INT_MAX / 17, INT_MAX, INT_MIN, INT_MIN + 1,
              UINT_MAX / 17, INT_MAX / 17, UINT_MAX};
char * ans[] = {"Number: 0","Number: 126322567","Number: 2147483647",
        "Number: -2147483648","Number: -2147483647","Number: 252645135",
        "Number: 126322567","Number: -1"};

void test_snprintf() {
    for(int i = 0;i<8;i++) {
        snprintf(dest,N,"Number: %d",(int)testset[i]);
        assert(strcmp(dest, ans[i]) == 0);
    }

    const char *str1 = "Hello";
    snprintf(dest,N,"String: %s", str1);
    assert(strcmp(dest, "String: Hello") == 0);

    const char *str2 = "";
    snprintf(dest,N,"String: %s", str2);
    assert(strcmp(dest, "String: ") == 0);

    const char *str3 = "This is a longer string for testing.";
    snprintf(dest,N,"String: %s", str3);
    assert(strcmp(dest, "String: This is a longer string for testing.") == 0);

    char buffer[20];
    int num1 = 42;
    int num2 = 12345678;
    snprintf(buffer, sizeof(buffer), "Num1: %d, Num2: %d", num1, num2);
    assert(strcmp(buffer, "Num1: 42, Num2: 123") == 0);
}


int main() {
    test_snprintf();
    return 0;
}