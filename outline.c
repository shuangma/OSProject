# include <stdio.h>
#include <string.h>


typedef struct Process{
	process* next;
	process* pre;
	
} process;

//globle viriable
process* processes;


/*find out all or most of the running processes and 
	store them into a kind of data structure */
void initiation() {
	int totalProcessNum;
	processes = (process*) malloc(sizeof(process) * totalProcessNum);

}


int checkValidnput(char* input) {
	for (int i = 0; *(input+i) != '/0'; i++) {
		if (*(input+i) < '0' or *(input+i) > '9') {
			return -1;
		}
	}
	int powerNum = atoi(input);
	if (powerNum < 0 or powerNum > 100) {
		return -1;
	}
	return powerNum;
}


//
int getPowerComsumption() {

}


void simulateProcess(int power) {
	//normal mode
	while (power >= 80) {
		time.sleep(30);
		int usedPower = getPowerComsumption();
		power -= usedPower;
	}

	//power saving mode
	while (power > 0) {

	}
}


int main(int argv, char*[] argc) {
	if (argv <= 1) return -1;
	int powerNum = checkValidnput(argc[1]);
	if (powerNum == -1) {
		return -1;
	}

	simulateProcess(powerNum);

}