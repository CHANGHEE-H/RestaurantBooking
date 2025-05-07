#pragma once
#include "gmock/gmock.h"
#include "schedule.cpp"

class MailSender {
public:
	virtual void sendMail(Schedule* schedule) {
		//send mail
	}
};

class TestableMailSender : public MailSender {
public:
	MOCK_METHOD(void, sendMail, (Schedule*), (override));
};