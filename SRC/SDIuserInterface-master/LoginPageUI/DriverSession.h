#ifndef DRIVERSESSION_H
#define DRIVERSESSION_H

class DriverSession {
private:
    bool IsLoggedIn;
    int LoggedInID;
public:
    DriverSession() {
        IsLoggedIn = false;
        LoggedInID = -1;
    }
    void SetIsLoggedIn(bool value) {
        IsLoggedIn = value;
    }
    bool GetIsLoggedIn() const {
        return IsLoggedIn;
    }
    void SetLoggedInID(int id) {
        LoggedInID = id;
    }
    int GetLoggedInID() const {
        return LoggedInID;
    }
};
extern DriverSession driversession;


#endif // DRIVERSESSION_H
