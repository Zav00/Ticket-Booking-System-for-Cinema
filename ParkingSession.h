#ifndef TICKET_BOOKING_SYSTEM_PARKINGSESSION_H
#define TICKET_BOOKING_SYSTEM_PARKINGSESSION_H
#include "ParkingSpace.h"
#include "User.h"
class ParkingSession {
private:
    User user;
    ParkingSpace &space;
    std::string startTime;
    std::string endTime;
public:
    ParkingSession(const User &user, ParkingSpace &space, const std::string &startTime)
            : user(user), space(space), startTime(startTime) {}

    void endSession(const std::string &endTime) {
        this->endTime = endTime;
        space.release();
    }

    const User &getUser() const {
        return user;
    }

    const ParkingSpace &getSpace() const {
        return space;
    }

    const std::string &getStartTime() const {
        return startTime;
    }

    const std::string &getEndTime() const {
        return endTime;
    }
};
#endif //TICKET_BOOKING_SYSTEM_PARKINGSESSION_H
