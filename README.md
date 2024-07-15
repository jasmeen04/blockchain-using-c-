Blockchain Project
Overview
This project implements a simple blockchain using C++. It includes the basic functionality to add blocks to the blockchain with a specified difficulty for mining.

Features
Blockchain Initialization: Creates a blockchain with a genesis block.
Adding Blocks: Allows adding new blocks to the blockchain with a specified difficulty level for mining.
Files
Blockchain.h : Header file for the Blockchain class.
Blockchain.cpp : Implementation of the Blockchain class.
Classes
Blockchain
The Blockchain class is responsible for managing the chain of blocks.

Public Methods
Blockchain(): Constructor that initializes the blockchain with a genesis block.
void AddBlock(Block bNew): Adds a new block to the blockchain after mining it with the specified difficulty.
Public Members
uint32_t _nDifficulty: The difficulty level for mining new blocks.
vector<Block> _vChain: The chain of blocks.
Private Methods
Block _GetLastBlock() const: Returns the last block in the chain.
Usage
Initialization
To initialize a blockchain:

cpp
Copy code
Blockchain bChain;
Adding a Block
To add a new block to the blockchain:

cpp
Copy code
Block bNew(index, data); // index and data are example parameters
bChain.AddBlock(bNew);
Example
cpp
Copy code
#include <iostream>
#include "Blockchain.h"
#include "Block.h"

int main() {
    Blockchain bChain;

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));

    return 0;
}
Dependencies
C++11 or later
