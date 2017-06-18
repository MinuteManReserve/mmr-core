// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "assert.h"

#include "chainparams.h"
#include "main.h"
#include "util.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

//
// Main network
//

// Convert the pnSeeds6 array into usable address objects.
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
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 20);

        const char* pszTimestamp = "CNN 08/Jun/2017 For Trump, the ‘Cloud’ Just Grew That Much Darker ";
        std::vector<CTxIn> vin;
        vin.resize(1);
        vin[0].scriptSig = CScript() << 1497789329 << CBigNum(42) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        std::vector<CTxOut> vout;
        vout.resize(1);
        vout[0].nValue = (1 * COIN);
        vout[0].scriptPubKey = CScript() << ParseHex("04ffff001d010446434e4e2030382f4a756e2f3230313720466f72205472756d702c2074686520e28098436c6f7564e28099204a75737420477265772054686174204d756368204461726b657220") << OP_CHECKSIG;
        CTransaction txNew(1, 1497789328, vin, vout, 0);
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime    = 1497789329;
        genesis.nBits    = 0x1e00ffff;
        genesis.nNonce   = 157153;

        hashGenesisBlock = genesis.GetHash();
        /*
        while (hashGenesisBlock > bnProofOfWorkLimit.getuint256()){
         if (++genesis.nNonce==0) break;
         hashGenesisBlock = genesis.GetHash();
        }
        printf("GenesisBlock: %s\n", hashGenesisBlock.ToString().c_str());
        printf("MerkleRoot: %s\n", genesis.hashMerkleRoot.ToString().c_str());
        printf("Nonce: %d\n", genesis.nNonce);
        */
        assert(hashGenesisBlock == uint256("0x000001ca1fce223864d28e35fcc17efbcefa821df65a8e0679e43b18ded28b76"));
        assert(genesis.hashMerkleRoot == uint256("0xc9c4cf11bac63d8a0ef79c4960aaff65d1a75fa1a1295678fb21c31dbafd3273"));

        vSeeds.push_back(CDNSSeedData("blockchain.freedom.social", "blockchain.freedom.social"));
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,51); // M
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,110); // m
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,61); // R
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x88)(0xB2)(0x1E).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x88)(0xAD)(0xE4).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        nLastPOWBlock = 1000000;
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
        pchMessageStart[0] = 0xcc;
        pchMessageStart[1] = 0xcb;
        pchMessageStart[2] = 0xd2;
        pchMessageStart[3] = 0x7f;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 16);
        vAlertPubKey = ParseHex("047fd61d8df73107614672d908cc51774dd7382cf4e71e1241160df9c8df1c37774d6c940c542728f11723757de6c3cedecd801097e762d");
        nDefaultPort = 6771;
        nRPCPort = 8771;
        strDataDir = "testnet";

        // Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nBits  = bnProofOfWorkLimit.GetCompact();
        genesis.nNonce = 63214;
        genesis.nTime = 1497789329;

        hashGenesisBlock = genesis.GetHash();
        /*
        while (hashGenesisBlock > bnProofOfWorkLimit.getuint256()){
         if (++genesis.nNonce==0) break;
         hashGenesisBlock = genesis.GetHash();
        }
        printf("GenesisBlock: %s\n", hashGenesisBlock.ToString().c_str());
        printf("MerkleRoot: %s\n", genesis.hashMerkleRoot.ToString().c_str());
        printf("Nonce: %d\n", genesis.nNonce);
        */
        assert(hashGenesisBlock == uint256("0x00003193881d2c604a6f4fc0316b9a8b71f059efd86c77266beabcfc5c188e34"));

        vSeeds.push_back(CDNSSeedData("blockchain.freedom.social", "blockchain.freedom.social"));

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,111);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,196);
        base58Prefixes[SECRET_KEY]     = std::vector<unsigned char>(1,239);
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        nLastPOWBlock = 0x7fffffff;
    }
    virtual Network NetworkID() const { return CChainParams::TESTNET; }
};
static CTestNetParams testNetParams;


//
// Regression test
//
class CRegTestParams : public CTestNetParams {
public:
    CRegTestParams() {
        pchMessageStart[0] = 0xdd;
        pchMessageStart[1] = 0x13;
        pchMessageStart[2] = 0x9f;
        pchMessageStart[3] = 0x27;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 1);
        genesis.nTime = 1497789329;
        genesis.nBits  = bnProofOfWorkLimit.GetCompact();
        genesis.nNonce = 1;

        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 27506;
        strDataDir = "regtest";


        hashGenesisBlock = genesis.GetHash();
        /*
        while (hashGenesisBlock > bnProofOfWorkLimit.getuint256()){
         if (++genesis.nNonce==0) break;
         hashGenesisBlock = genesis.GetHash();
        }
        printf("GenesisBlock: %s\n", hashGenesisBlock.ToString().c_str());
        printf("MerkleRoot: %s\n", genesis.hashMerkleRoot.ToString().c_str());
        printf("Nonce: %d\n", genesis.nNonce);
        */
        assert(hashGenesisBlock == uint256("0x79780ac78e4d0455c4da11051b1f3a750be15b5082b4b94ffb722e00d8f41c13"));

        vSeeds.clear();  // Regtest mode doesn't have any DNS seeds.
    }

    virtual bool RequireRPCPassword() const { return false; }
    virtual Network NetworkID() const { return CChainParams::REGTEST; }
}; 
static CRegTestParams regTestParams;

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
        case CChainParams::REGTEST:
            pCurrentParams = &regTestParams;
            break;
        default:
            assert(false && "Unimplemented network");
            return;
    }
}

bool SelectParamsFromCommandLine() {
    bool fRegTest = GetBoolArg("-regtest", false);
    bool fTestNet = GetBoolArg("-testnet", false);

    if (fTestNet && fRegTest) {
        return false;
    }

    if (fRegTest) {
        SelectParams(CChainParams::REGTEST);
    } else if (fTestNet) {
        SelectParams(CChainParams::TESTNET);
    } else {
        SelectParams(CChainParams::MAIN);
    }
    return true;
}
