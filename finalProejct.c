// Caitlin Campbell and Shanti Polara Final Project
//Beta version
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
#include <sys/types.h> // For pid_t
#include <sys/wait.h>  // For wait()


double mean(double[] data);
double[] sort(double[] data);
double[] minMedMax(double[] data); //returns array of min, median, and max
double quartile(double[] data); //returns
double sd(double[] data);

int main (){
    /*
     PLAN: by default, will return everything, if give input, then will only do some things
     */
	printf("Choose one or more of the following operations on the data by\n"
		"typing the coresponding number(s) seperated by a space"
		"1) Mean \n2)Median \n3)Mode \n4)Standard Deviation \n5)Maximum Value"
		"\n6)Minimum Value \n7)sorted list \n8)First Quartile \n9)Third Quartile")
	gets(line);
	args[0] = strtok(line, " ");
	while (args[i] != NULL){
		args[++i] = strtok(NULL, " ");
	}
	operations [9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}
	
	
}

double mean(double[] data) {
    return 0;
}

double[] sort(double[] data) {
    return data;
}

double[] minMedMax(double[] data) { //returns array of min, median, and max
    return data;
}

double quartile(double[] data) {
    return 0;
}

double sd(double[] data) {
    return 0;
}
