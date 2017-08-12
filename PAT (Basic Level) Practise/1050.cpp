#include<iostream> 
#include<algorithm> 
#include<cmath> 
using namespace std;

int main(){
	int lmax,rmin = 0,tmin = 0,bmax,N,m = 1,n = 1,min = 10000000;
	cin >> N;
	for(int i = 1; i <= sqrt(N); i++){
		if(N%i==0){
			if(N/i-i<min){
				n = i;
				m = N / n;
				min = m - n;
			}
		}
	}
	bmax = m;
	lmax = n;
	int a[N] ,b[bmax][lmax] ,i = N - 1;
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]) ;
	}
	sort(a,a+N);
	int x = -1, y = 0;
	lmax--;bmax--;
	while(lmax >= rmin && tmin <= bmax){
		if(x < lmax && y == tmin){
			x ++ ;
			if(x == lmax && y == tmin)
				tmin++;
		}else if( x == lmax && y < bmax){
			y++;
			if(x == lmax && y == bmax)
				lmax--;
		}else if( x > rmin && y == bmax ){
			x--;
			if(x == rmin && y == bmax)
				bmax--;
		}else if( x == rmin && y > tmin ){
			y--;
			if(x == rmin && y == tmin)
				rmin++;
		}
		b[y][x] = a[i--] ;
	}
	for(int i = 0; i < m ; i++){
		for(int j = 0; j < n ; j++ ){
			if(j == n -1)
				cout << b[i][j];
			else
				cout << b[i][j] << " ";
		}
		if( i != m-1 )
			cout << endl; 
	}
	return 0;
}
