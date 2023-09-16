#include <iostream>
#include <unordered_map>
#include <map>
#include <string>

// Structure to store daily COVID-19 data
struct DailyData {
    int cases;
    int deaths;
    int vaccinated;
};

int main() {
    // Create an unordered map to store data by state
    std::unordered_map<std::string, std::map<std::string, DailyData>> covidData;

    // Example: Adding data for California on a specific date
    std::string state = "California";
    std::string date = "150921";  // Date in "DDMMYY" format

    DailyData dailyStats;
    dailyStats.cases = 1000;
    dailyStats.deaths = 10;
    dailyStats.vaccinated = 500;

    // Insert data into the map
    covidData[state][date] = dailyStats;

    // To access data for California on that date
    DailyData retrievedData = covidData[state][date];
    
    std::cout << "Cases: " << retrievedData.cases << std::endl;
    std::cout << "Deaths: " << retrievedData.deaths << std::endl;
    std::cout << "Vaccinated: " << retrievedData.vaccinated << std::endl;

    return 0;
}
