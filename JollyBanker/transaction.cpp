#include "transaction.h"

Transaction::Transaction(char type, int primaryAccountId, int primaryFundId, int amount)
{
	this->type_ = type;
	this->primaryAccountId_ = primaryAccountId;
	this->primaryFundId_ = primaryFundId;
	this->amount_ = amount;
}

Transaction::Transaction(char type, int primaryAccountId, int primaryFundId, int secondaryAccountId, int secondaryFundId, int amount)
{
	this->type_ = type;
	this->primaryAccountId_ = primaryAccountId;
	this->primaryFundId_ = primaryFundId;
	this->secondaryAccountId_ = secondaryAccountId;
	this->secondaryFundId_ = secondaryFundId;
	this->amount_ = amount;

}

Transaction::Transaction(char type, int primaryAccountId)
{
	this->type_ = type;
	this->primaryAccountId_ = primaryAccountId;
}

Transaction::Transaction(char type, int primaryAccountId, int primaryFundId)
{
	this->type_ = type;
	this->primaryAccountId_ = primaryAccountId;
	this->primaryFundId_ = primaryFundId;
}

Transaction::Transaction(char type, int primaryAccountId, string firstName, string lastName)
{
	this->type_ = type;
	this->primaryAccountId_ = primaryAccountId;
	this->firstName_ = firstName;
	this->lastName_ = lastName;
}

int Transaction::getType(){
	return type_;
}
int Transaction::getPrimaryAccountId(){
	return primaryAccountId_;
}
int Transaction::getPrimaryFundId(){
	return primaryFundId_;
}
int Transaction::getSecondaryAccountId(){
	return secondaryAccountId_;
}
int Transaction::getSecondaryFundId(){
	return secondaryFundId_;
}
int Transaction::getAmount(){
	return amount_;
}
string Transaction::getFirstName(){
	return firstName_;
}
string Transaction::getLastName(){
	return lastName_;
}
bool Transaction::getError(){
	return error_;
}

void Transaction::display(){
	if(this->type_ == 'D' || this->type_ == 'W'){
		cout << this->type_ << " " << this-> primaryAccountId_ << " " << this->primaryFundId_ << " " << this->amount_;
	}

	if(this->type_ == 'T'){
		cout << this->type_ << " " << this-> primaryAccountId_ << " " << this->primaryFundId_ << " " << this->secondaryAccountId_ << " " << this->secondaryFundId_ << " " << this->amount_;
	}

	if(this->type_ == 'A'){
		cout << this->type_ << " " << this->primaryAccountId_;
	}

	if(this->type_ == 'F'){
		cout << this->type_ << " " << this-> primaryAccountId_ << " " << this->primaryFundId_;
	}

	if(this->type_ == 'O'){
		cout << this->type_ << " " << this->primaryAccountId_ << " " << this->firstName_ << " " << this->lastName_;
	}

	if(this->error_){
		cout << " (Failed)" << endl;
	}else{
		cout << endl;
	}

}