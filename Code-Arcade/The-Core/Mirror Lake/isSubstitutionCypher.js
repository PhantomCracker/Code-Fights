function solution(string1, string2) {
    if (string1.length !== string2.length) {
        return false;
    }

    const mappings = {};

    for (let i = 0; i < string1.length; i++) {
        const char1 = string1[i];
        const char2 = string2[i];

        if (!mappings.hasOwnProperty(char1)) {
            mappings[char1] = char2;
        } else {
            if (mappings[char1] !== char2) {
                return false;
            }

            const charOccurrenceCount1 = string1.split(char1).length - 1;
            const charOccurrenceCount2 = string2.split(char2).length - 1;

            if (charOccurrenceCount1 !== charOccurrenceCount2) {
                return false;
            }
        }
    }

    for (const [char, mappedChar] of Object.entries(mappings)) {
        if (string2.indexOf(mappedChar) !== string1.indexOf(char)) {
            return false;
        }
    }

    return true;
}