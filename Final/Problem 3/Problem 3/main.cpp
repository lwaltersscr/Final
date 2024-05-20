
//  Final Problem 3: Birthday meaning
//
#include <iostream>
#include <string>

using namespace std;

string getMonthMeaning(int month) {
    switch (month) {
        case 1: return "Janus";
        case 2: return "Februa";
        case 3: return "Mars";
        case 4: return "Aphrodite";
        case 5: return "Maia";
        case 6: return "Juno";
        case 7: return "Julius Caesar";
        case 8: return "Augustus";
        case 9: return "Septem";
        case 10: return "Octo";
        case 11: return "Novem";
        case 12: return "Decem";
        default: return "Unknown month";
    }
}

string getDayMeaning(int day) {
    switch (day) {
        case 1: return "Self-Starter";
        case 2: return "Soultion Finder";
        case 3: return "Expressive";
        case 4: return "Rationality";
        case 5: return "Flexibility";
        case 6: return "Helper";
        case 7: return "Curious";
        case 8: return "Self-sufficient";
        case 9: return "Compassion";
        case 10: return "Leader";
        case 11: return "Intuitive";
        case 12: return "Creativity";
        case 13: return "Conscientious";
        case 14: return "Open-minded";
        case 15: return "Loving";
        case 16: return "Inquisitive";
        case 17: return "Independent";
        case 18: return "Open-hearted";
        case 19: return "Independent";
        case 20: return "Harmonious";
        case 21: return "Social";
        case 22: return "Determined";
        case 23: return "Adventurous";
        case 24: return "Heart of Gold";
        case 25: return "World awareness";
        case 26: return "Thoughtful";
        case 27: return "Tolerant";
        case 28: return "Team player";
        case 29: return "Awareness";
        case 30: return "Innovative thinking";
        case 31: return "Practical";
        default: return "Unknown day";
    }
}

string getYearMeaning(int year) {
    switch (year) {
        case 2000: return "Millennial";
        case 2001: return "Technologically Savvy";
        case 2002: return "Socially Conscious";
        case 2003: return "Innovative";
        case 2004: return "Resilient";
        case 2005: return "Adventurous";
        case 2006: return "Thoughtful";
        case 2007: return "Ambitious";
        case 2008: return "Creative";
        case 2009: return "Determined";
        case 2010: return "Optimistic";
        case 2011: return "Innovative";
        case 2012: return "Resourceful";
        case 2013: return "Forward-Thinking";
        case 2014: return "Inventive";
        case 2015: return "Practical";
        case 2016: return "Charismatic";
        case 2017: return "Empathetic";
        case 2018: return "Dynamic";
        case 2019: return "Passionate";
        case 2020: return "Resilient";
        case 2021: return "Adaptable";
        case 2022: return "Visionary";
        case 2023: return "Hopeful";
        default: return "Unknown year";
    }
}

void displayOutput(int month, int day, int year) {
    string monthMeaning = getMonthMeaning(month);
    string dayMeaning = getDayMeaning(day);
    string yearMeaning = getYearMeaning(year);

    cout << "The month of " << month << " means " << monthMeaning << endl;
    cout << "The " << day << "th day means " << dayMeaning << endl;
    cout << "The year " << year << " means that you are " << yearMeaning << endl;
}

void getInput(int &month, int &day, int &year) {
    cout << "Please enter the month of your birthday (1-12): ";
    cin >> month;
    cout << "Please enter the day of your birthday (1-31): ";
    cin >> day;
    cout << "Please enter the year of your birthday (2000-2023): ";
    cin >> year;
}

int main() {
    string repeat;
    cout << "Welcome to Birthday Date Meaning Generator!" << endl;

    do {
        int month, day, year;
        getInput(month, day, year);
        displayOutput(month, day, year);

        cout << "Would you like to try another one? (y/n): ";
        cin >> repeat;
    } while (repeat == "y" || repeat == "Y");

    cout << "Thanks for playing!" << endl;

    return 0;
}
