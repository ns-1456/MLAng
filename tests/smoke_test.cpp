#include <cassert>

extern int mlang_placeholder();

int main() {
    assert(mlang_placeholder() == 0);
    return 0;
}
