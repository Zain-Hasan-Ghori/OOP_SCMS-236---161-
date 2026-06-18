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

class OverdueException : public std::exception {
private:
	std::string message;
	double fine;
public:
	OverdueException(const std::string& msg, double fineAmount)
		: message(msg), fine(fineAmount) {
	}

	const char* what() const noexcept override {
		return message.c_str();
	}

	double getFine() const {
		return fine;
	}
};
#endif