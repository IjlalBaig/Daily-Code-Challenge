#include <iostream>

//......................... (Base-class) ..........................//
class BaseCash{
private:
	BaseCash* next;

protected:
	int out;
public:
	BaseCash(void){
		out = 0;
		next = 0;
	}
	void addNode(BaseCash* n){
		if (next) {
			next->addNode(n);
		}
		else{
			next = n;
		}
	}
	virtual void handle(int i){
		next->handle(i);
	}
};

//............. Handler for 100 Euro (Derived-class) ..............//
class Cash100 : public BaseCash{
public:
	void handle(int i){
		this->out = (i > 100) ? (i-i%100)/100: 0;
		std::cout << "100 Euro bills: " << this->out <<'\n';
		i = i - 100*this->out;
		BaseCash::handle(i);


	}
};

//.............. Handler for 50 Euro (Derived-class) ..............//
class Cash50 : public BaseCash{
public:
	void handle(int i){
		this->out = (i > 50) ? (i-i%50)/50: 0;
		std::cout << " 50 Euro bills: " << this->out <<'\n';
		i = i - 50*this->out;
		BaseCash::handle(i);

	}
};

//.............. Handler for 20 Euro (Derived-class) ..............//
class Cash20 : public BaseCash{
public:
	void handle(int i){
		this->out = (i > 20) ? (i-i%20)/20: 0;
		std::cout << " 20 Euro bills: " << this->out <<'\n';
		i = i - 20*this->out;
		BaseCash::handle(i);

	}
};

//.............. Handler for 10 Euro (Derived-class) ..............//
class Cash10 : public BaseCash{
public:
	void handle(int i){
		this->out = (i > 10) ? (i-i%10)/10: 0;
		std::cout << " 10 Euro bills: " << this->out <<'\n';
		i = i - 10*this->out;
		BaseCash::handle(i);

	}
};

//............... Handler for 5 Euro (Derived-class) ..............//
class Cash5 : public BaseCash{
public:
	void handle(int i){
		this->out = (i > 5) ? (i-i%5)/5: 0;
		std::cout <<  "  5 Euro bills: "  << this->out <<'\n';
		i = i - 5*this->out;
		BaseCash::handle(i);

	}
};

//......................... Main Routine .........................//
int main(int argc, char const *argv[]) {
	int withdrawl = 295;

    // Instantiate handler objects
	Cash100 H1;
	Cash50 H2;
	Cash20 H3;
	Cash10 H4;
	Cash5 H5;

	// Add handlers to chain
	H1.addNode(&H2);
	H1.addNode(&H3);
	H1.addNode(&H4);
	H1.addNode(&H5);

	// Push data into chain
	H1.handle(withdrawl);
	return 0;
}
