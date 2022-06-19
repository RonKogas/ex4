#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <exception>

const char* const INVALID_PLAYER_NAME_MESSAGE = "You have entered an invalid name. Please try again.";
const char* const FILE_NOT_FOUND_MESSAGE = "You have entered an invalid input. Please try again.";


class InvalidPlayerName : public std::exception
{
public:
    InvalidPlayerName() = default;
    InvalidPlayerName(const InvalidPlayerName&) = default;
    ~InvalidPlayerName() = default;
    InvalidPlayerName& operator=(const InvalidPlayerName& other) = default;
    const char* what() const noexcept override {
        return INVALID_PLAYER_NAME_MESSAGE;
    }
};

class FileNotFound : public std::exception
{
public:
    FileNotFound() = default;
    FileNotFound(const FileNotFound&) = default;
    ~FileNotFound() = default;
    FileNotFound& operator=(const FileNotFound& other) = default;
    const char* what() const noexcept override {
        return FILE_NOT_FOUND_MESSAGE;
    }
};

#endif //EXCEPTION_H
