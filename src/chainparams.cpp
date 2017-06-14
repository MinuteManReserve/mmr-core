// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Bitcoin developers
// Copyright (c) 2017 Empinel/The MMR Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "assert.h"

#include "chainparams.h"
#include "main.h"
#include "util.h"
#include "amount.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress> &vSeedsOut, const SeedSpec6 *data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7*24*60*60;
    for (unsigned int i = 0; i < count; i++)
    {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

class CMainParams : public CChainParams {
public:
    CMainParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0xc1;
        pchMessageStart[1] = 0xe3;
        pchMessageStart[2] = 0xd7;
        pchMessageStart[3] = 0xed;
        vAlertPubKey = ParseHex("04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f");
        nDefaultPort = 17760;
        nRPCPort = 17780;
        nProofOfWorkLimit = uint256S("000000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        nProofOfStakeLimit = uint256S("00000fffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");

        char* pszTimestamp = "CNN 08/Jun/2017 For Trump, the ‘Cloud’ Just Grew That Much Darker ";
        std::vector<CTxIn> vin;
        vin.resize(1);
        vin[0].scriptSig = CScript() << 1497398963 << CScriptNum(4) << std::vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        std::vector<CTxOut> vout;
        vout.resize(1);
        vout[0].nValue = (1 * COIN);
        vout[0].scriptPubKey = CScript() << ParseHex("04ffff001d010446434e4e2030382f4a756e2f3230313720466f72205472756d702c2074686520e28098436c6f7564e28099204a75737420477265772054686174204d756368204461726b657220") << OP_CHECKSIG;
        CTransaction txNew(1, 1497398962, vin, vout, 0);
            
        CBlock genesis;
        genesis.nTime    = 1497398963;
        genesis.nBits    = 0x1e00ffff;
        genesis.nNonce   = 40615963;
        genesis.nVersion = 1;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock.SetNull();
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();

		hashGenesisBlock = genesis.GetHash();
        while (hashGenesisBlock > nProofOfWorkLimit){
         if (++genesis.nNonce==0) break;
         hashGenesisBlock = genesis.GetHash();
        }
        //printf("GenesisBlock: %s\n", hashGenesisBlock.ToString().c_str());
        //printf("MerkleRoot: %s\n", genesis.hashMerkleRoot.ToString().c_str());
        //printf("POW: %x\n", nProofOfWorkLimit.GetCompact());
        //printf("Nonce: %d\n", genesis.nNonce);
        assert(hashGenesisBlock == uint256("0x000000275ba4f71cb7819b3bfa5b9cac1027100f4c62f7329b4337a0a443e1d8"));
        assert(genesis.hashMerkleRoot == uint256("0x4696ce2a2e7fd2a09ec2dc62f45183677b8d9544e9efabe6a09e5400dda039eb"));

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,51); // M
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,110); // m
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,61); // R
        base58Prefixes[STEALTH_ADDRESS] = std::vector<unsigned char>(1,123); // r
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x88)(0xB2)(0x1E).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x88)(0xAD)(0xE4).convert_to_container<std::vector<unsigned char> >();

		vSeeds.push_back(CDNSSeedData("blockchain.freedom.social", "blockchain.freedom.social"));
        
        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

		nPoolMaxTransactions = 3;
        strDarksendPoolDummyAddress = "MZTD9ZHQfuRGTDvURAToa9YgB3WHuXZjw9";
        nLastPOWBlock 	= 100000;
    }

    virtual const CBlock& GenesisBlock() const { return genesis; }
    virtual Network NetworkID() const { return CChainParams::MAIN; }

    virtual const vector<CAddress>& FixedSeeds() const {
        return vFixedSeeds;
    }
protected:
    CBlock genesis;
    vector<CAddress> vFixedSeeds;
};
static CMainParams mainParams;


//
// Testnet
//

class CTestNetParams : public CMainParams {
public:
    CTestNetParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0xdb;
        pchMessageStart[1] = 0x86;
        pchMessageStart[2] = 0xfc;
        pchMessageStart[3] = 0x69;
        vAlertPubKey = ParseHex("");
        nDefaultPort = 27170;
        nRPCPort = 27175;
        strDataDir = "testnet";
   
        nProofOfWorkLimit = uint256S("000000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        nProofOfStakeLimit = uint256S("00000fffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
/*
	CBlock genesis;// = CreateGenesisBlock(1491737471, 1603027, 0x1e00ffff, 1, (1 * COIN));
        
	hashGenesisBlock = genesis.GetHash();
	
	assert(hashGenesisBlock == uint256("0x0000002bed128b6b2a62bd8edd4e6f8a414eac38e256aa0194adb8c93fe18132"));		
	assert(genesis.hashMerkleRoot == uint256("0x24c7b9bada3984f99ec9072672d3f7180af711b5eed5b82b321848b973b4a41e"));

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,97);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,196);
        base58Prefixes[SECRET_KEY]     = std::vector<unsigned char>(1,239);
        base58Prefixes[STEALTH_ADDRESS] = std::vector<unsigned char>(1,40);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();
*/
        vFixedSeeds.clear();
        vSeeds.clear();
	vSeeds.push_back(CDNSSeedData("seeder.baseserv.com", "testnet.seeder.baseserv.com"));
        vSeeds.push_back(CDNSSeedData("seeder.uksafedns.net", "testnet.seeder.uksafedns.net"));
        
        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

	nPoolMaxTransactions = 3;
        strDarksendPoolDummyAddress = "gCJDCcmcVZcfnwAZdEt7dg5s5jjAbDp9dZdhXAmP5NM";
        nLastPOWBlock 	= 300;
    }

    virtual const CBlock& GenesisBlock() const { return genesis; }
    virtual Network NetworkID() const { return CChainParams::TESTNET; }

    virtual const vector<CAddress>& FixedSeeds() const {
        return vFixedSeeds;
    }
protected:
    CBlock genesis;
    vector<CAddress> vFixedSeeds;

};
static CTestNetParams testNetParams;


static CChainParams *pCurrentParams = &mainParams;

const CChainParams &Params() {
    return *pCurrentParams;
}

void SelectParams(CChainParams::Network network) {
    switch (network) {
        case CChainParams::MAIN:
            pCurrentParams = &mainParams;
            break;
        case CChainParams::TESTNET:
            pCurrentParams = &testNetParams;
            break;
        default:
            assert(false && "Unimplemented network");
            return;
    }
}

bool SelectParamsFromCommandLine() {
    
    bool fTestNet = GetBoolArg("-testnet", false);
    
    if (fTestNet) {
        SelectParams(CChainParams::TESTNET);
    } else {
        SelectParams(CChainParams::MAIN);
    }
    return true;
}
