int nok(int a, int b, int c)
{
    int maxs = std::max({a, b, c});
    while (true) {
        if (maxs % a == 0 && maxs % b == 0 && maxs % c == 0) {
            break;
        }
        ++maxs;
    }
    return maxs;
}
