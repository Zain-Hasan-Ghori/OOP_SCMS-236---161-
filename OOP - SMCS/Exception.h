#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>
#include <string>

class CapacityExceededException : public std::exception {
private:
	std::string message;

public:
	CapacityExceededException(const std::string& msg) : message(msg) {}

	const char* what() const noexcept override {
		return message.c_str();
	}
};

#endif