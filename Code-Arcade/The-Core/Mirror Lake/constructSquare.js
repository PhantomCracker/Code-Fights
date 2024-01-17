function solution(s) {
    const numberOfDigits = Math.pow(10, s.length);

    return squares(numberOfDigits, s);
}

function squares(n, s) {
    let perfectSquares = [];
    let differentChars = checkDifferentDigitsOfString(s);
    let sumOfDifferentChars = differentChars.reduce((partiamSum, a) => partiamSum + a, 0)

    for (let i = 0; i * i < n; i++) {
        perfectSquares.push(i * i);
    }

    for (let i = perfectSquares.length - 1; i >= 0; i--) {
        let differentDigits = checkDifferentDigitsOfNumber(perfectSquares[i]);
        let sumOfDifferentDigits = differentDigits.reduce((partialSum, a) => partialSum + a, 0);
        let checkIfArraysAreEqual = arraysAreEqual(differentChars, differentDigits);

        if (sumOfDifferentChars - sumOfDifferentDigits === 0 && checkIfArraysAreEqual) {
            return perfectSquares[i];
        }
    }

    return -1;
}

function checkDifferentDigitsOfString(s) {
    let occurances = new Array(10).fill(0);

    for (let char of s) {
        occurances[char.charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }

    return occurances.sort((a, b) => b - a);
}

function checkDifferentDigitsOfNumber(n) {
    let occurances = new Array(10).fill(0);
    let number = new String(n);

    for (let digit of number) {
        occurances[digit]++;
    }

    return occurances.sort((a, b) => b - a);
}

function arraysAreEqual(a, b) {
    return  Array.isArray(a) && Array.isArray(b) &&
        a.length === b.length &&
        a.every((val, index) => val === b[index]);
}