#ifndef USERSESSION_H
#define USERSESSION_H

class UserSession {
private:
    bool IsLoggedIn;
    int LoggedInID;
public:
    UserSession() {
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
extern UserSession usersession;
#endif // USERSESSION_H
