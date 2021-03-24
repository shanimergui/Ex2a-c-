#include <string>
#include "Direction.hpp"
namespace ariel
{
    class Board
    {
        public:
            void post(int row, int col, ariel::Direction e, std::string name);
            std::string read(int row, int col, ariel::Direction e, int name);
            void show();
    };
}
