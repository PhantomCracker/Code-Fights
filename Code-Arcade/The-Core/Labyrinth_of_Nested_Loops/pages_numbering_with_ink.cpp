int dig(int a) {
    int cc = 0;
    while(a) {
        cc++;
        a /= 10;
    }
    return cc;
}

int solution(int current, int numberOfDigits) {
    while(numberOfDigits >= dig(current)) {
        numberOfDigits -= dig(current);
        current++;
    }
    return current - 1;
}
