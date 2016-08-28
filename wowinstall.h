#ifndef WOWINSTALL_H
#define WOWINSTALL_H


class WowInstall
{
public:
    WowInstall();

    void GetVersionServer(); // Get the server version
    bool CheckVersion(); // Check if our version is up-to-date
    void Update(); // Start the update
    void UpdateNews(); // Update news
private:
    int version; // Local version
    int version_server;
    int stateUpdate; // 0: init 1: Updating 2: Game can be launched
};


#endif // WOWINSTALL_H
