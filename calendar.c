#include"findingday.h"
#include<time.h>
#include<string.h>
#include"zodiacsign.h"
int get_lst_weekday(int year)
{
	int d;
	d=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7; 
	return d;
}
void calender()
{
	int year,month,daysInMonth,day,weekDay=0,startingDay;
	printf("Enter your desired year:");
	scanf("%d",&year);
					
	char *months[]={"JANUARY","FEBRAURAY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
	int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
					
	if(year%4==0 && year%100!=0	)
	  monthDay[1]=29;
	else if(year%400==0)
	  monthDay[1]=29;
					
	startingDay=get_lst_weekday(year);
					
	for(month=0;month<12;month++)
	{
	   daysInMonth=monthDay[month];
				    	
	   printf("\n\n******************%s********************\n",months[month]);
	   printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
				    	
    	for(weekDay=0;weekDay<startingDay;weekDay++)
		   printf("     ");
				    	   
		for(day=1;day<=daysInMonth;day++)
		{
			printf("%5d",day);
			if(++weekDay>6)
		    	{
				   	printf("\n");
				   	weekDay=0;
				}
				startingDay=weekDay;
		}
	}
	
}
void time_date()
{
	time_t t;
	time(&t);
	printf("Current Date and time:\n");
	printf("%s",ctime(&t));
}
void addNote() {
    FILE *file;
    int day, month, year;
    char note[200];  
    file = fopen("calendar.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    getchar();  
    printf("Enter your note: ");
    fgets(note, sizeof(note), stdin);
    note[strcspn(note, "\n")] = '\0';  
    fprintf(file, "%02d %02d %04d - %s\n", day, month, year, note);
    fclose(file);

    printf("Note added successfully!\n");
}
void viewNotes() {
    FILE *file;
    int day, month, year;
    int fileDay, fileMonth, fileYear;
    char note[200];
    int found = 0;

    file = fopen("calendar.txt", "r");
    if (file == NULL) {
        printf("No notes found!\n");
        return;
    }

    // Ask for the date to search
    printf("Enter date to view notes (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    printf("\nNotes for %02d/%02d/%04d:\n", day, month, year);
    while (fscanf(file, "%d %d %d - %[^\n]", &fileDay, &fileMonth, &fileYear, note) != EOF) {
        if (fileDay == day && fileMonth == month && fileYear == year) {
            printf("- %s\n", note);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No notes found for this date!\n");
    }

    fclose(file);
}
int main()
{
	int n,i,choice;
	while(1)
	{
	printf("\n1.Find out 12 months calener for any year\n2.Find out corresponding day for given date,month,year\n3.Find time and current date\n4.Add a remainder\n5.View remainder for a specific date(dd mm yyyy)\n6.Zodiac sign\n7.Exit\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		       	calender();
				printf("\nEnter any key to continue:");
				getchar();
				break;
		case 2: 
		        finding_day();
			    break;
		case 3:
			    time_date();
			    break;
	    case 4:
	    	   addNote();
	    	   break;
		case 5:
				viewNotes();
				break;	   
	    case 6:
	    	  zodiac_sign();
	    	  break;
	    	  
	    case 7:
		     printf("You have exited the application");
	    	 return 0;
	    	 break;
		default:   printf("Enter a valid choice");
    }
    }
	return 0;
}
