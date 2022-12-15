int z = 10;

void func() {
    int z = 4;
    printf("%p\n", &z);
}
int main() {
    int x = 5;
    int y = 5;
    printf("%p\n", &x);
    printf("%p\n", &y);
    printf("%p\n", &z);
    func();
    return 0;
}