#include <iostream>
using namespace std;


class Engine {
public:
	void start() {
		cout << "display engine is started" << endl;
	}
	void stop() {
		cout << "display engine is off" << endl;
	}
};
class Window {
public:
	void rollup() {
		cout << "display window is rollup" << endl;
	}
	void rolldown() {
		cout << "display window is rolldown" << endl;
	}
};
class Door {
public:
	Window window;
};
class Car {
public:
	Engine engine;
	Door left;
	Door right;


};
int main() {
	Car car;
	car.engine.start();
	car.left.window.rollup();
	car.engine.stop();
	return 0;
}