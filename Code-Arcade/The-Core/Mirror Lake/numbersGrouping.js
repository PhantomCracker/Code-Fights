function solution(a) {
    let eachGroup = Array(Math.pow(10, 5) + 1).fill(0);
    let sum = a.length;
    const divideWith = Math.pow(10, 4);

    for (let i = 0; i < a.length; i++) {
        let division = a[i] / divideWith;
        let module = a[i] % divideWith;

        if (division < 1) {
            eachGroup[1]++;
        } else {
            if (module == 0) {
                eachGroup[parseInt(division)]++;
            } else {
                eachGroup[parseInt(division + 1)]++;
            }
        }
    }

    eachGroup.map((v, i) => {
        if (v > 0) {
            sum++;
        }
    })

    return sum;
}