#include "io.h"

#include <fstream>
#include <vector>

using namespace std;

static std::vector<char> readFile(const string& filename)
{
    ifstream file(filename, ios::ate | ios::binary);

    if (!file.is_open())
        throw runtime_error("failed to open file!");

    size_t fileSize = (size_t) file.tellg();
    vector<char> buffer(fileSize);

    file.seekg(0);
    file.read(buffer.data(), fileSize);

    file.close();

    return buffer;
}
