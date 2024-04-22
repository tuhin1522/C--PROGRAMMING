nt countDigits(int n){
	// Write your code here.	
	int temp = n;
	int cnt=0;
	while(n != 0){
		int rem = temp%10;
		if(temp%rem == 0){
			cnt++;
		}
		n /= 10;
	}
	return cnt;
}