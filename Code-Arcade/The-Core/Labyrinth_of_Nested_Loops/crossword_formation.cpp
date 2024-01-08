int solution(std::vector<std::string> w) {
    int art[] = {0,1,2,3};
    int q = 0;
    do {
        std::string a = w[art[0]],
            b = w[art[1]],
            c = w[art[2]],
            d = w[art[3]];
        int la = a.size(), lb = b.size(),
            lc = c.size(), ld = d.size();
        int mac = std::min(la, lc);
        int mbd = std::min(lb, ld);
        for(int w = 3; w <= mac; ++w)
          for(int h = 3; h <= mbd; ++h)
            for(int A = 0; A <= la - w; ++A)
              for(int B = 0; B <= lb - h; ++B)
                for(int C = 0; C <= lc - w; ++C)
                  for(int D = 0; D <= ld - h; ++D) {
                      q += a[A + w - 1] == b[B]
                          &&
                          b[B + h - 1] == c[C + w - 1]
                          &&
                          c[C] == d[D + h - 1]
                          &&
                          d[D] == a[A];
                  }

    } while(std::next_permutation(art, art+4));
    return q;
}
