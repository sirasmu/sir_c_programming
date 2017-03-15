#include <stdio.h>
int main()
{	
	FILE *fp;
	char buff[255];

	fp = fopen("C:/OneDrive/one/ICT/VIA/hand-ins/sem3/CAL/IHA/C_handin1/main_assigment/cal_stuteacou_database/cal_stuteacou_database/stuteacou.txt", "r");
	fgets(buff, 255, (FILE*)fp);
	printf("1: %s", buff);
	fgets(buff, 255, (FILE*)fp);
	printf("2: %s", buff);
	printf("\n");
	fclose(fp);

	return 0;
}
