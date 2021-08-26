#include "types.h"
#include "stat.h"
#include "user.h"


void
recur(int n){
	printf(1,"%d\n",n);
	recur(n+1);
}


int
main()
{
    int bigarr[10000];

	for(int i =0; i<10000; i++){
	   bigarr[i]=i;
	}
	printf(1,"%d\n",bigarr[9999]);
	//recur(1);
	exit(0);

}

