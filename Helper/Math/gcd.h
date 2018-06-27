int gcdInt(int x, int y) {
    if (0 == y) {
        return x;
    } else {
        return gcdInt(y, x % y);
    }
}