#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class Car
{
public:
    string id;
    int x, y;
    Car(string id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int distance() const
    {
        return x * x + y * y;
    }
};

class CarCompare
{
public:
    bool operator()(const Car a, const Car b) { return a.distance() < b.distance(); }
};

void printKNearestCars(vector<Car> cars, int k)
{
    //create a max heap of size K
    priority_queue<Car, vector<Car>, CarCompare> firstKCars(cars.begin(), cars.begin() + k);

    //iterate over the remaining cars
    for (int i = k; i < cars.size(); i++)
    {
        auto car = cars[i];
        //if the car is closer to the origin than the first K, add it to the heap
        if (car.distance() < firstKCars.top().distance())
        {
            firstKCars.pop();
            firstKCars.push(car);
        }
    }

    vector<Car> output;
    //print all the cars inside the heap
    while (!firstKCars.empty())
    {
        output.push_back(firstKCars.top());
        firstKCars.pop();
    }

    reverse(output.begin(), output.end());

    for (auto i : output)
    {
        cout << i.id << " ";
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n, k;
    cin >> n >> k;

    string id;
    int x, y;
    vector<Car> cars;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> x >> y;
        Car car(id, x, y);
        cars.push_back(car);
    }
    printKNearestCars(cars, k);
}