std::pair<std::vector, int> progression(int a, int b, int c) {
    int howmany;
    int list[howmany];
    howmany = a;
    for (int i=0; i<howmany; i++)
        list[0]=b;
    for (int i=1; i<howmany; i++) {
        list[i]=list[i-1]*list[0];
    }
    int missing;
    missing = c;
    std::pair<std::vector, int> p = std::make_pair(list, missing);
    return p;
}
