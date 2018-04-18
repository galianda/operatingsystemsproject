// Caitlin Campbell and Shanti Polara Final Project
//Beta version

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <ctype.h>

/*in order for the threads to function, they must be joined all at once, but called 
one by one, they should have seperate variables they modify*/
double mean(double data[]);
double * sort(double data[]);
double * minMedMax(double data[]); //returns array of min, median, and max
double quartile(double data[]); //returns
double sd(double data[]);

int main (){
    /*
     PLAN: by default, will return everything, if give input, then will only do some things
     */
	char line[50];
	char *args[30];
	int i = 0;
	int ops[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int badinput = 0;
	int holder = 0;
	int threadcount = 0;
	printf("Choose one or more of the following operations on the data by\n"
			"typing the coresponding number(s) seperated by a space"
			"0)all options \n1) Mean \n2)Median \n3)Mode \n4)Standard Deviation \n5)Maximum Value"
			"\n6)Minimum Value \n7)sorted list \n8)First Quartile \n9)Third Quartile");
	gets(line);
	args[0] = strtok(line, " ");
		
	while (args[i] != NULL){
		args[++i] = strtok(NULL, " ");
	}

	for (i = 0; i < sizeof(args); i++){ 
		if(isdigit(args[i])){ //checks if input valid
			holder = args[i];
			if (holder <= 9 && holder >= 0) //lets program know what operations are desired
				ops[holder] = 1; // uses 1 for the boolean value of true
		}
		else
			badinput = 1;
	}
	if (badinput){
		printf("Error: Bad input");
		return -1;
	}
	if (ops[0]){
		for (i = 1; i < sizeof(ops); i++)
			ops[i] = 1;
	}
	
	if (ops[1]){ //mean
		printf("mean\n");
	}
	
	if ((ops[2] || ops[5]) || ops[6]){ //median, max, min
		
		if (ops[2])//median
			printf("median\n");
		if (ops[6]) //minumum
			printf("minimum\n");
		if (ops[5])//maximum
			printf("maximum\n");	
	}
	
	if (ops[3]){ //mode
		printf("mode\n");
	}
	
	if (ops[4]){ //standard deviation
		printf("standard dev\n");
	}
	
	if (ops[7]){ //sorted list
		double list[3] = {1.0, 2.0, 3.0};
		for (i = 0; i < sizeof(list); i++){//replace with data set when sort method ready
			printf("%.2f ", list[i]);
		}
	}
	
	if (ops[8] || ops[9]){ //first quartile, second quartile
		if(ops[8]){
			printf("first quartile\n");
		}
		
		if(ops[9]){
			printf("second quartile\n");
		}
	}
		
	return 0;
	
	
	
}

double mean(double data[]) {
    return 0;
}

double * sort(double data[]) { //note: must use this notation to return array
    return data;
}

double * minMedMax(double data[]) { //returns array of min, median, and max
    return data;
}

double quartile(double data[]) {
    return 0;
}

double sd(double data[]) {
    return 0;
}
