#include <stdio.h>
#include <string.h>

//Function to determine Chinese Zodiac sign based on year
const char* getZodiacSign(int year){
	const char* zodiacSigns[] = {
		"Monkey","Rooster","Dog","Pig",
		"Rat","Ox","Tiger","Rabbit",
		"Dragon","Snake","Horse","Goat"
	};
	return zodiacSigns[year % 12];
}
// Function to provide fortune for each zodiac sign
const char* getFortune(const char* zodiacSign) {
    if (strcmp(zodiacSign, "Monkey") == 0) {
        return "Adventure is on your horizon. Be ready to take risks!";
    } else if (strcmp(zodiacSign, "Rooster") == 0) {
        return "Focus on your goals, and success will follow.";
    } else if (strcmp(zodiacSign, "Dog") == 0) {
        return "Trust your instincts and stay loyal to your principles.";
    } else if (strcmp(zodiacSign, "Pig") == 0) {
        return "Enjoy the simple pleasures in life; prosperity is near.";
    } else if (strcmp(zodiacSign, "Rat") == 0) {
        return "Resourcefulness will be your greatest asset this year.";
    } else if (strcmp(zodiacSign, "Ox") == 0) {
        return "Hard work will pay off in unexpected ways.";
    } else if (strcmp(zodiacSign, "Tiger") == 0) {
        return "Courage will lead you to exciting opportunities.";
    } else if (strcmp(zodiacSign, "Rabbit") == 0) {
        return "Kindness and patience will bring harmony to your life.";
    } else if (strcmp(zodiacSign, "Dragon") == 0) {
        return "Embrace your charisma and take charge of your destiny.";
    } else if (strcmp(zodiacSign, "Snake") == 0) {
        return "Wisdom and careful planning will guide you to success.";
    } else if (strcmp(zodiacSign, "Horse") == 0) {
        return "Your energy and enthusiasm will inspire those around you.";
    } else if (strcmp(zodiacSign, "Goat") == 0) {
        return "Creativity and compassion will bring joy to your endeavors.";
    }
    return "Your future is a mystery. Stay curious!";
}
int main(){
	int year;
	printf("Welcome to the Fortune Cookie Program!\n");
	printf("Enter your birth year: ");
	scanf("%d",&year);

	const char* zodiacSign = getZodiacSign(year);
	const char* fortune = getFortune(zodiacSign);

	printf("\nYour Chinese Zodiac sign is: %d\n",zodiacSign);
	printf("Your fortune: %s\n",fortune);
}

