#pragma once
#include <vector>
class Ant
{
private:

	std::vector<int> visited;
	int startCity;
	int currentCity;
	int** map;
	double** pheromoneMap;
	int numOfCities;

	bool notVisited(int nextCity);

public:
	
	Ant(int** map, double** pheromoneMap, int numOfCities);
	~Ant();

	void setStartCity(int city);
	void clearVisited();
	void run(double alfa, double beta);
	void showMap();
	void showPheromoneMap();
	void showPath();
	std::vector<int> getPath();
};

