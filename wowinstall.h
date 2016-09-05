#ifndef WOWINSTALL_H
#define WOWINSTALL_H

class WowInstall
{
public:
    struct ConnectionInfo {
        std::string server_ip;
        int server_port;
        std::string client_login;
        std::string client_password;
    };

    WowInstall();

    void GetVersionServer(); // Get the server version
    bool CheckVersion(); // Check if our version is up-to-date
    void Update(); // Start the update
    void UpdateNews(); // Update news

private:
    enum LauncherState {
        Initializing,
        Updating,
        Ready
    };

    int version; // Local version
    int server_version;
    ConnectionInfo connection_info;
    LauncherState update_state;
};


#endif // WOWINSTALL_H
