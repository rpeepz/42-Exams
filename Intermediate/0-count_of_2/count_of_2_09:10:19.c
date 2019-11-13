int		intlen(int n){
	int len = 1;
	while (n / 10){
		len++;
		n /= 10;
	}
	return (len);
}
int    count_of_2(int n){
	int count = 0, len = 0, tmp = 0;
	for (int i = 0; i <= n; i++){
		tmp = i;
		len = intlen(i);
		for (int l = 1; l < len; l++){
			if (tmp % 10 == 2)
				count ++;
			tmp /= 10;
		}
		if (tmp % 10 == 2)
			count++;
	}
	return (count);
}
