#pragma once
#include "schedule.cpp"

class MailSender {
public:
	virtual void sendMail(Schedule* schedule) {
		//send mail
	}
};

class TestableMailSender : public MailSender {
public:
	void sendMail(Schedule* schedule) override {
		countSendMailMethodIsCalled++;
	}

	int getCountSendMailMethodIsCalled() {
		return countSendMailMethodIsCalled;
	}
private:
	int countSendMailMethodIsCalled = 0;
};