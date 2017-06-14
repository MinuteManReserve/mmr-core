#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
QT_TRANSLATE_NOOP("bitcoin-core", " Insufficient funds."),
QT_TRANSLATE_NOOP("bitcoin-core", " Signing transaction failed"),
QT_TRANSLATE_NOOP("bitcoin-core", " Transaction too large"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
" Darksend uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
" InstantX requires inputs with at least 10 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
" Unable to locate enough Darksend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
" Unable to locate enough Darksend non-denominated funds for this transaction "
"that are not equal 1000 MMR."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
" Unable to locate enough Darksend non-denominated funds for this transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=ionrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"MMR Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Acceptable ciphers (default: TLSv1.2+HIGH:TLSv1+HIGH:!SSLv3:!SSLv2:!aNULL:!"
"eNULL:!3DES:@STRENGTH)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Cannot obtain a lock on data directory %s. MMR is probably already running."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Disable all Darksend and Stealth Messaging related functionality (0-1, "
"default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Enable instantx, show confirmations for locked transactions (bool, default: "
"true)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Enable use of automated darksend for funds stored in this wallet (0-1, "
"default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly. This is intended for regression testing tools and app "
"development."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: The transaction was rejected.  This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds  "),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when a relevant alert is received (%s in cmd is replaced by "
"message)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Output debugging information (default: 0, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Provide liquidity to Darksend by infrequently mixing coins on a continual "
"basis (0-100, default: 0, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Set external address:port to get to this masternode (example: address:port)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: "
"27000)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Sync time with other nodes. Disable if time on your system is precise e.g. "
"syncing with NTP (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Transfercoin will not work properly."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"When creating transactions, ignore inputs with value less than this "
"(default: 0.01)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("bitcoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("bitcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("bitcoin-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Already have that input."),
QT_TRANSLATE_NOOP("bitcoin-core", "Always query for peer addresses via DNS lookup (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "Bind to given address. Use [host]:port notation for IPv6"),
QT_TRANSLATE_NOOP("bitcoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("bitcoin-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("bitcoin-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Clear list of wallet transactions (diagnostic tool; implies -rescan)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Collateral is not valid."),
QT_TRANSLATE_NOOP("bitcoin-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("bitcoin-core", "Darksend is idle."),
QT_TRANSLATE_NOOP("bitcoin-core", "Darksend options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Darksend request complete:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Darksend request incomplete:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("bitcoin-core", "Enable the client to act as a masternode (0-1, default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Entries are full."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat: Wallet requires newer version of MMR"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Wallet locked, unable to create transaction  "),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Wallet unlocked for staking only, unable to create transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: You already have pending entries in the Darksend pool"),
QT_TRANSLATE_NOOP("bitcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("bitcoin-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("bitcoin-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", "Find peers using internet relay chat (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("bitcoin-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Get help for a command"),
QT_TRANSLATE_NOOP("bitcoin-core", "How many blocks to check at startup (default: 500, 0 = all)"),
QT_TRANSLATE_NOOP("bitcoin-core", "How thorough the block verification is (0-6, default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("bitcoin-core", "Ignore masternodes less than version (example: 61401; default : 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Importing..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Imports blocks from external blk000?.dat file"),
QT_TRANSLATE_NOOP("bitcoin-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("bitcoin-core", "Incompatible version."),
QT_TRANSLATE_NOOP("bitcoin-core", "Information"),
QT_TRANSLATE_NOOP("bitcoin-core", "Initialization sanity check failed. MMR is shutting down."),
QT_TRANSLATE_NOOP("bitcoin-core", "Input is not valid."),
QT_TRANSLATE_NOOP("bitcoin-core", "InstantX options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -tor address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -mininput=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid private key."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid scriptPubKey"),
QT_TRANSLATE_NOOP("bitcoin-core", "MMR version"),
QT_TRANSLATE_NOOP("bitcoin-core", "Keep N MMR anonymized (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Keep at most <n> unconnectable blocks in memory (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Last Darksend was too recent."),
QT_TRANSLATE_NOOP("bitcoin-core", "Last successful Darksend action was too recent."),
QT_TRANSLATE_NOOP("bitcoin-core", "List commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Listen for JSON-RPC connections on <port> (default: 12705)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Listen for connections on <port> (default: 12700)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("bitcoin-core", "Lock masternodes from masternode configuration file (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Masternode options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("bitcoin-core", "Masternode:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("bitcoin-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("bitcoin-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("bitcoin-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("bitcoin-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("bitcoin-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("bitcoin-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("bitcoin-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("bitcoin-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("bitcoin-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rebuilding address index..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Require a confirmations for change (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send command to -server or mmrd"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("bitcoin-core", "Sending..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Session not complete!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Session timed out."),
QT_TRANSLATE_NOOP("bitcoin-core", "Set database cache size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set database disk log size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set key pool size to <n> (default: 1000) (litemode: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set maximum block size in bytes (default: 250000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set the number of threads to service RPC calls (default: 4)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Signing failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "Signing timed out."),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify configuration file (default: mmr.conf)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify masternode configuration file (default: masternode.conf)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify pid file (default: mmrd.pid)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "This help message"),
QT_TRANSLATE_NOOP("bitcoin-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("bitcoin-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction not valid, please try again"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("bitcoin-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to bind to %s on this computer. MMR is probably already running."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to sign masternode payment winner, wrong key?"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown transaction type"),
QT_TRANSLATE_NOOP("bitcoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("bitcoin-core", "Usage:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use N separate masternodes to anonymize funds  (2-8, default: 2)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use proxy to reach tor hidden services (default: same as -proxy)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("bitcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Value more than Darksend pool maximum allows."),
QT_TRANSLATE_NOOP("bitcoin-core", "Verifying database integrity..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Wait for RPC server to start"),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet %s resides outside data directory %s."),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet needed to be rewritten: restart MMR to complete"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: Deprecated argument -debugnet ignored, use -debug=net"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Will retry..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("bitcoin-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "wallet.dat corrupt, salvage failed"),
};