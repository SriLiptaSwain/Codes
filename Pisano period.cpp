long long pisanoPeriod(long long m){   
    long long previous = 0;
    long long current  = 1;
    long long tmp_previous = 0+1;
    for(long long i=0;i< m * m;i++){ 
    	tmp_previous = (previous + current)%m;
        previous = current;
        current =tmp_previous;
        if (previous == 0 && current == 1) 
            return i + 1;
    }
}
