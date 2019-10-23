/* Author: Michael Karimizadeh 500831189 */
/* Description: Solves towers of hanoi with 1, 2, and 4 arguments
 */
#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n,from,dest,temp;
    if(argc==1){
    	n=3;
    	from=1;
    	dest=2;
    	towers(n, from, dest);
    }
	else if((argc==2)&&((atoi(argv[1]))>0)){
		n=atoi(argv[1]);
		from=1;
    	dest=2;
    	towers(n, from, dest);
	}
	else if((argc==4)&&((atoi(argv[1]))>0)){
		n=atoi(argv[1]);
		from=atoi(argv[2]);
		temp=atoi(argv[3]);
		if((from!=temp)&&(0<from<=3)&&(0<temp<=3)){
			dest=temp;
			towers(n, from, dest);
		}
		else{
			fprintf(stderr,"INVALID ENTRY, FROM AND DEST VARIABLE CANNOT MATCH, OR BE LESS THAN 1");
			exit(1);
		}
		
	}
	else{
		fprintf(stderr,"INVALID ENTRY, INPUT CANNOT BE NEGATIVE, CAN ONLY HAVE ARGUMENT NUMBERS 1,2, OR 4");
		exit(1);
	}
	exit(0);
}

