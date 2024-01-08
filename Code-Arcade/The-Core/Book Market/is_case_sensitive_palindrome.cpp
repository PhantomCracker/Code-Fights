bool solution(string inputString) {
    for (int i = 0; i < inputString.Length / 2; i++) {
        char[] c = {
            inputString[i],
            inputString[inputString.Length - i - 1]
        };
        for (int j = 0; j < 2; j++) {
            if (c[j] >= 'a' && c[j] <= 'z') {
                c[j] = (char) (c[j] - 'a' + 'A');
            }
        }
        if (c[0] != c[1]) {
            return false;
        }
    }

    return true;
}