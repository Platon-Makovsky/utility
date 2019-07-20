/* 
 * This header file contains bitwise operations, such as writing, inverting or returning the value of a specific bit 
 * in an unsigned int. If required, more complex operations such as storing or retrieving a smaller value from a bigger
 * variable will be implemented further down the line.
*/



void invert_bit(unsigned int* num, size_t pos);
void write_bit(unsigned int* num, size_t pos, bool val);
bool get_bit(unsigned int num, size_t pos);


void invert_bit(unsigned int* num, size_t pos) {
	if (num != nullptr) {
		int mask = 1 << pos;
		*num ^= mask;
	}
}

void write_bit(unsigned int* num, size_t pos, bool val) {
	if (num != nullptr) {
		if (val) {
			*num |= 1 << pos;
		}
		else {
			*num &= ~(1 << pos);
		}
	}
}

bool get_bit(unsigned int num, size_t pos) {
	bool res = (num >> pos) & 1U;
	return res;
}