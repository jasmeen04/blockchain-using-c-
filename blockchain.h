#define TESTCHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void AddBlock(Block bNew);


    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};
