#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;
	string type;
	int age;
	double weight;
	string food;
public:
	Animal() { age = 0; weight = 0.0; }
	Animal(string n, string t, int a, double w, string f)
	{
		name = n;
		type = t;
		age = a;
		weight = w;
		food = f;
	}
	void Eat() {
		cout << "Animal Eat: boars, deer, moose, or bulls" << endl;
	}
	void Move() {
		cout << "Animal Move: The tiger moves silently and gracefully, using the soft pads on its paws to stalk its prey without making a sound. It moves with large but quiet steps, placing its hind paws exactly in the tracks of its front paws to minimize noise and tracks. When hunting, the tiger can make quick bursts over short distances, reaching speeds of up to 60 km/h." << endl;
	}

	void Print() {

		cout << "Type: " << type << "\tAge: " << age << "\tWeight: " << weight << "\tFood: " << food << endl;
	}
};

class Elephant : public Animal
{
	string mainland;
public:
	Elephant() {}
	Elephant(string n, string t, int a, double w, string f, string m) : Animal(n, t, a, w, f)
	{
		mainland = m;
	}

	void Print() {

		Animal::Print();
		cout << "Mainland: " << mainland << endl;
	}

	void Eat() {
		cout << "Animal Eat: herbs, leaves, fruits, branches, bark, and roots" << endl;
	}

	void Move() {
		cout << "Animal Move: Elephants move on land by walking or ambling; they cannot trot, jump, or gallop. They can move both forward and backward. Transporting elephants usually involves sedating the animal, restraining it, moving it to a special box where an antidote is administered, and then transferring it to a transport trailer." << endl;
	}

};


class Penguin : public Animal
{
	string mainland;
public:
	Penguin() {}
	Penguin(string n, string t, int a, double w, string f, string m) : Animal(n, t, a, w, f)
	{
		mainland = m;
	}

	void Print() {

		Animal::Print();
		cout << "Mainland: " << mainland << endl;
	}

	void Eat() {
		cout << "Animal Eat: krill, squid, and fish" << endl;
	}

	void Move() {
		cout << "Animal Move: Penguins move slowly. They can only walk at a speed of about 2.5 km/h. By sliding on sleds, penguins can move faster without the risk of falling. On horizontal ice, they slide on their bellies, using their flippers and feet to move, steer, and brake." << endl;
	}

};

class Shark : public Animal
{
	int bite_force;
public:
	Shark() { bite_force = 0; }
	Shark(string n, string t, int a, double w, string f, int bf) : Animal(n, t, a, w, f)
	{
		bite_force = bf;
	}

	void Print() {

		Animal::Print();
		cout << "Bite Force: " << bite_force << endl;
	}

	void Eat() {
		cout << "Animal Eat: fish, marine mammals, squid, turtles" << endl;
	}

	void Move() {
		cout << "Animal Move: The shark moves by undulating its body from side to side and using its tail to generate thrust." << endl;
	}

};

class Parrot : public Animal
{
	bool talk;
public:
	Parrot() {}
	Parrot(string n, string t, int a, double w, string f, bool ta) : Animal(n, t, a, w, f)
	{
		talk = ta;
	}

	void Print() {

		Animal::Print();

		if (talk == true)
			cout << "Talking Parrot: Yes" << endl;
		else if (talk == false) {
			cout << "Talking Parrot: No" << endl;
		}
	}

	void Eat() {
		cout << "Animal Eat: grain feed, fresh vegetables, fruits, berries, as well as greens and porridge." << endl;
	}

	void Move() {
		cout << "Animal Move: Parrots mainly move around by flying, as well as climbing and jumping. To move around on the ground and branches, they use their feet and beak, which helps them grip and maintain balance. Some parrots, such as cockatoos, are known for walking on two legs, while others, such as macaws, use their beak as a “third limb,” transferring their weight to it when climbing." << endl;
	}

};


int main() {

	Animal* Animal = nullptr;
	int choice = 0;

	cout << "1. Elephant" << endl;
	cout << "2. Penguin" << endl;
	cout << "3. Shark" << endl;
	cout << "4. Parrot" << endl;
	cout << "Make your choice: ";

	cin >> choice;

	switch (choice)
	{
	case 1:
		Animal = new Elephant;
		break;
	case 2:
		Animal = new Penguin;
		break;
	case 3:
		Animal = new Shark;
		break;
	case 4:
		Animal = new Parrot;
		break;
	}

	Animal->Eat();
	Animal->Move();

	delete Animal;
	return 0;

	/*Animal obj1("Tiger", "Mammals", 2, 30.2, "deer, wild boars, moose, and roe deer.");
	obj1.Print();
	obj1.Eat();
	obj1.Move();

	cout << "\n";

	Elephant obj2("Elephant", "Mammals", 8, 60.5, "deer, wild boars, moose, and roe deer.", "Africa");
	obj2.Print();
	obj2.Eat();
	obj2.Move();

	cout << "\n";

	Penguin obj3("Penguin", "Mammals", 6, 15.33, "deer, wild boars, moose, and roe deer.", "Antarctica");
	obj3.Print();
	obj3.Eat();
	obj3.Move();

	cout << "\n";

	Shark obj4("Shark", "Mammals", 3, 10.5, "deer, wild boars, moose, and roe deer.", 18000);
	obj4.Print();
	obj4.Eat();
	obj4.Move();

	cout << "\n";

	Parrot obj5("Shark", "Mammals", 3, 50.1, "deer, wild boars, moose, and roe deer.", true);
	obj5.Print();
	obj5.Eat();
	obj5.Move();*/

}
