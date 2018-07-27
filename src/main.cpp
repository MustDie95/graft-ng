#include "server.h"

int main(int argc, const char** argv)
{
    try
    {
        graft::GraftServer gserver;
        bool res = gserver.init(argc, argv);
        if(!res) return -1;
        gserver.serve();
    } catch (const std::exception & e) {
        std::cerr << "Exception thrown: " << e.what() << std::endl;
        return -1;
    } catch(...) {
        std::cerr << "Exception of unknown type!\n";
        return -1;
    }

    return 0;
}
