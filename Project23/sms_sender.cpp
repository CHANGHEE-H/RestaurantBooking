#pragma once
#include <iostream>
#include "gmock/gmock.h"
#include "schedule.cpp"

class SmsSender {
public:
	virtual void send(Schedule* schedule) {
		//send message to PhoneNumber
	}
};

class TestableSmsSender : public SmsSender {
public:
	MOCK_METHOD(void, send, (Schedule*), (override));
};