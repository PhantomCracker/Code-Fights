def magic(number, count, previous_number):
	if number in previous_number and count != 1:
		return count

	new_number = 0;
	for digit in str(number):
		new_number += int(digit) ** 2
	previous_number.append(number)
	return magic(new_number, count + 1, previous_number)

def solution(a0):
	return magic(a0, 1, [a0])

