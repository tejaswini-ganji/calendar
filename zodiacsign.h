
 void zodiac_sign()
{
	int d,m,y;
	printf("Enter date of birth in (dd mm yyyy) format:");
	scanf("%d %d %d",&d,&m,&y);
	if((m==1 && d>=22 && d<=31) || (m==2 && d>=1 && d<=20))
	   printf("\nYour Zodiac sign is Aquarius :)\n");
	else if((m==2 && d>=21 && d<=29) || (m==3 && d>=1 && d<=19))
	   printf("\nYour Zodiac sign is Pisces :)\n");
	else if((m==3 && d>=20 && d<=31) || (m==4 && d>=1 && d<=20))
	   printf("\nYour Zodiac sign is Aries :)\n");
	else if((m==4 && d>=21 && d<=30) || (m==5 && d>=1 && d<=21))
	   printf("\nYour Zodiac sign is Taurus :)\n");
	else if((m==5 && d>=22 && d<=31) || (m==6 && d>=1 && d<=22))
	   printf("\nYour Zodiac sign is Gemini :)\n");
	else if((m==6 && d>=23 && d<=30) || (m==7 && d>=1 && d<=22))
	   printf("\nYour Zodiac sign is Cancer :)\n");
	else if((m==7 && d>=23 && d<=31) || (m==8 && d>=1 && d<=22))
	   printf("\nYour Zodiac sign is Leo :)\n");
	else if((m==8 && d>=23 && d<=31) || (m==9 && d>=1 && d<=22))
	   printf("\nYour Zodiac sign is Virgo :)\n");
	else if((m==9 && d>=23 && d<=30) || (m==10 && d>=1 && d<=22))
	   printf("\nYour Zodiac sign is Libra :)\n");
	else if((m==10 && d>=23 && d<=31) || (m==11 && d>=1 && d<=22))
	   printf("\nYour Zodiac sign is Scorpio :)\n");
	else if((m==11 && d>=23 && d<=30) || (m==12 && d>=1 && d<=22))
	   printf("\nYour Zodiac sign is sagittarius :)\n");
	else if((m==12 && d>=23 && d<=31) || (m==1 && d>=1 && d<=21))
	   printf("\nYour Zodiac sign is capricorn :)\n");
	
}
