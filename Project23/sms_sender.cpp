#pragma once
#include <iostream>
#include "schedule.cpp"

class SmsSender {
public:
	virtual void send(Schedule* schedule) {
		//send message to PhoneNumber
	}
};

class TestableSmsSender : public SmsSender {
public:
	void send(Schedule* schedule) override {
		std::cout << "Run SMS Sender" << std::endl;
		sendMethodIsCalled = true;
	}

	bool isSendMethodIsCalled() {
		return sendMethodIsCalled;
	}
private:
	bool sendMethodIsCalled;
};