#include <string>
#include <vector>

namespace Distrobox {
// functions for communicating with distrobox on the host

struct DBox {
    std::string name;
    std::string distro;
    std::string imageUrl;
    std::string ID;
    std::string status;
};

std::vector<DBox> getAllBoxes();
bool deleteBox(std::string name);
void openTerminal(std::string name);
std::vector<std::string> getLocalApplications(std::string name);
bool exportApplication(std::string boxName, std::string app);
bool exportService(std::string boxName, std::string service);
bool addToMenu(std::string boxName);
bool upgrade(std::string boxName);

} // namespace Distrobox
