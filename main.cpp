constexpr char digits[] = "0123456789abcdef0123456789ABCDEF";
constexpr int base = 16;
constexpr size_t outOffset = sizeof(char)*4;

//Solution works on both arm and x86
void hexdump(char *out, const unsigned char *in, const size_t n) {
    for (size_t index = 0; index < n; ++index) {
        out[0] = '\\';
        out[1] = 'x';
        out[2] = digits[((int(in[index])) / base) % base];
        out[3] = digits[(int(in[index]) % base)];
        out += outOffset;
    }
}
