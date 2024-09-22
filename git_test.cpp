#include <iostream>
#define log(f, args...) do { printf("%s %d: ", __FUNCTION__, __LINE__); printf(f, ##args); } while (0)

int main() {
    int mod = 998244353;
    log("TEST, %d", mod);
    return 0;
}