#ifndef TRANSPORTSESSION_H
#define TRANSPORTSESSION_H

class CompanySession {
private:
    bool IsLoggedIn;
    int LoggedInID;
public:
    CompanySession() {
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
extern CompanySession companysession;

#endif // TRANSPORTSESSION_H
