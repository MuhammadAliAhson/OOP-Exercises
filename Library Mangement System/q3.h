/*
Muhammad Ali Ahson
i21-2535
Section -C
Assignment 04
*/
#include <iostream>
#include "string.h"
using namespace std;

class stocks {
public:
	string symbol;
	int total_share;
	int total_cost;
	int current_price;
	int profit;

	stocks() : symbol(""), total_share(0), total_cost(0), current_price(0) {
	}
	stocks(string sym,int total_share_1,int total_cost_1,int current_price_1): symbol(sym),total_share(total_share_1),total_cost(total_cost_1), current_price(current_price_1) {

	}
	void setsymbol(string sym) {
		this->symbol = sym;
	}
	void settotal_share(int tot) {
		this->total_share = tot;
	}
	void settotal_cost(int tot) {
		this->total_cost = tot;
	}
	void setcurrent_price(int tot) {
		this->current_price = tot;
	}
	void addsymbol(string sym) {
		this->symbol=this->symbol + sym;
	}
	void addtotal_share(int tot) {
		this->total_share=this->total_share + tot;
	}
	void addtotal_cost(int tot) {
		this->total_cost=this->total_cost + tot;
	}
	void addcurrent_price(int tot) {
		this->current_price=this->current_price + tot;
		
	}
	void subtracttotal_share(int tot) {
		this->total_share = this->total_share - tot;
	}
	void subtracttotal_cost(int tot) {
		this->total_cost = this->total_cost - tot;
	}
	void subtractcurrent_price(int tot) {
		this->current_price = this->current_price - tot;
	}

	string getsymbol() {
		return this->symbol;
	}
	int gettotal_share() {
		return this->total_share;
	}
	int gettotal_cost() {
		return this->total_cost;
	}
	int getcurrent_price() {
		return this->current_price;
	}
	int getmarketvalue() {
		return this->getmarketvalue();
	}
	
	int profit_return() {
		int profit_1 = 0;
		profit_1 = getcurrent_price() - gettotal_cost();
		cout << "Profit earned   " << profit_1 << endl;
		this->profit = profit_1;
		return profit_1;
	}
	~stocks() {

	}
};
class simplestock:public stocks {
	int profit_return() {
		int profit = 0;
		profit = getcurrent_price() - gettotal_cost();
		if (profit > 0 || profit == 0) {
			cout << "Profit earned   " << profit << endl;
		}
		else {
			cout << "No Profit earned " << endl;
		}
		
		return profit;
	}
	~simplestock() {

}
};
class Dividendstocks : public stocks{
	int profit_sharing_payments() {
		int profit=0;
		if (gettotal_share() != 0) {
			profit = 10 * gettotal_share();
			cout << "Profit earned   " << profit << endl;
		}
		else
		return profit;
	}
	~Dividendstocks() {

	}
};

class real_state {
public:
	string location, area;
	int year_of_purc, cost, market_value;
	int profit;

	real_state():location(""), area(""), year_of_purc(0), cost(0), market_value(0) {}
	real_state(string a,string b,int year,int cost_1,int mar):location(a), area(b), year_of_purc(year), cost(cost_1), market_value(mar) {}
	
	void setlocation(string loc) {
		this->location = loc;
	}
	void setarea(string area_1) {
		this->area = area_1;
	}
	void setyear_of_purc(int yaer) {
		this->year_of_purc = yaer;
	}
	void setcost(int cost_1) {
		this->cost = cost_1;
}
	void setmarket_value(int val) {
		this->market_value = val;
	}
	void addlocation(string loc) {
		this->location =this->location + loc;
		
	}
	void addarea(string area_1) {

		this->area=this->area + area_1;
	}
	void addcost(int cost_1) {
		this->cost =this->cost + cost_1;
	}
	void addmarket_value(int val) {
		this->market_value=this->market_value + val;
	}
	
	void subtractcost(int cost_1) {
		this->cost = this->cost - cost_1;
	}
	void subtractmarket_value(int val) {
		this->market_value = this->market_value - val;
	}
	string getlocation() {
		return this->location;
	}
	string getarea() {
		return this->area;
	}
	int getyear_of_purc() {
		return this->year_of_purc;
	}
	int getcost() {
		return this->cost;
	}
	int getmarket_value() {
		return this->market_value;
	}
	int profit_return() {
		int profit_1 = 0;
		profit_1 = this->market_value - this->cost;
		if ((profit_1 > 0 )|| (profit_1 == 0)) {
			cout << "Profit earned  " << profit_1 << endl;
			this->profit = profit_1;
		}
		else {
			cout << "No Profit Earned " << endl;
		}
		
		return profit_1;
	}
	int marketvalue() {
		return this->getmarket_value();
	}
	~real_state() {

	}

};

class currency {
	int amount;
public:
	currency() : amount(0) {}
	currency(int am):amount(am) {}
	void setamount(int am) {
		this->amount = am;
	}
	void addcurrency(int add) {
		this->amount=this->amount + add;
	}
	void subtractcurrency(int add) {
		this->amount = this->amount + add;
	}
	int getamount() {
		return this->amount;
	}
	int marketvalue() {
		return this->amount;
	}
	~currency() {

	}
};
class Profit {
public: 
	Profit() {
	}
	void Profit_max(real_state&obj,stocks& copy) {

		if (obj.profit > copy.profit) {
			cout << "Real Estate is providing us more profit then the Stocks " << endl;
			cout << "The Profit is " << obj.profit;
		}
		else {
			cout << " Stocks is providing us more profit then the Real Estate" << endl;
			cout << "The Profit is " << copy.profit;
		}
	}
};
