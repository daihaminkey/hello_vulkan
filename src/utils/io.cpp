#include "io.h"

using namespace std;

vector<char> readFile(const string& filename)
{
    ifstream file(filename, ios::ate | ios::binary);

    if (!file.is_open())
    {
        std::stringstream error_message;
        error_message << "failed to open file " << filename << "!";
        throw runtime_error(error_message.str());
    }

    size_t fileSize = (size_t) file.tellg();
    vector<char> buffer(fileSize);

    file.seekg(0);
    file.read(buffer.data(), fileSize);

    file.close();

    return buffer;
}
