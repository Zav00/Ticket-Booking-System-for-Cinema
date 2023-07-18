#ifndef TICKET_BOOKING_SYSTEM_USER_H
#define TICKET_BOOKING_SYSTEM_USER_H
#include <string>
class User {
private:
    std::string name;
    std::string vehicleSize;
public:
    User(const std::string &name, const std::string &vehicleSize)
            : name(name), vehicleSize(vehicleSize) {}

    const std::string &getName() const {
        return name;
    }

    const std::string &getVehicleSize() const {
        return vehicleSize;
    }
};

#endif //TICKET_BOOKING_SYSTEM_USER_H
