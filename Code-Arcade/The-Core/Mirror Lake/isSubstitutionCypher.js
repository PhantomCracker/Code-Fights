function solution(string1, string2) {
    let occurancesInString1 = occurancesInString(string1).sort((a, b) => b - a);
    let occurancesInString2 = occurancesInString(string2).sort((a, b) => b - a);

    if (checkIfArraysAreEqual(occurancesInString1, occurancesInString2)) {
        return true;
    }
    return false;
}

function occurancesInString(s) {
    let occurances = new Array(26).fill(0);

    for (let char of s) {
        occurances[char.charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }

    return occurances;
}

function checkIfArraysAreEqual(a1, a2) {
    return  Array.isArray(a1) && Array.isArray(a2) &&
        a1.length === a2.length &&
        a1.every((val, index) => val === a2[index])
}