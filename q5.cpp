#include <iostream>

class Activity {
public:
    virtual double calculateCaloriesBurned() = 0;
    virtual ~Activity() {}
};

class Running : public Activity {
private:
    double distance; 
    double time;    

public:
    Running(double d, double t) : distance(d), time(t) {}

    double calculateCaloriesBurned() override {
        return distance * 62.0; 
    }
};

class Cycling : public Activity {
private:
    double speed; 
    double time;  

public:
    Cycling(double s, double t) : speed(s), time(t) {}

    double calculateCaloriesBurned() override {
        return speed * time * 12.0; 
    }
};

int main() {
    Running run(5.0, 30.0);
    Cycling cycle(20.0, 1.5);

    std::cout << run.calculateCaloriesBurned() << "\n";
    std::cout << cycle.calculateCaloriesBurned() << "\n";

    return 0;
}
