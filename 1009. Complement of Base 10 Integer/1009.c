int bitwiseComplement(int N){
	int i;
	int j = 1;
	int a=0;
    if (N==0){
        return 1;
    }
	while(N>0) {
		i=N%2;
		N=N/2;
		if(i==0) {
			i=1;
		}
		else{
			i=0;
		}
    a=a+i*j;
    j*=2;
	}
	return a;
}