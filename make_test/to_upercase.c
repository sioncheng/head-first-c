char uper_case(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c;
	} else if (c >= 'a' && c <= 'z') {
		return c - 32;
	} else {
		return c;
	}
}