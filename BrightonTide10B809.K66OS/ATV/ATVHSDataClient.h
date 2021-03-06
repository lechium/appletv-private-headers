/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDataClient.h"

@class NSMutableDictionary, NSURL, NSString, ATVHSConnectionStream;

__attribute__((visibility("hidden")))
@interface ATVHSDataClient : ATVDataClient {
	FPSAPContextOpaque_Ref _fpsapContext;	// 4 = 0x4
	ATVHSConnectionStream *_connectionStream;	// 8 = 0x8
	unsigned long long _pairingID;	// 12 = 0xc
	unsigned long long _machineID;	// 20 = 0x14
	unsigned long _sessionID;	// 28 = 0x1c
	NSString *_homeShareGroupID;	// 32 = 0x20
	NSURL *_serverURL;	// 36 = 0x24
	NSURL *_serverIPURL;	// 40 = 0x28
	int _serverPort;	// 44 = 0x2c
	NSString *_databaseName;	// 48 = 0x30
	unsigned long _databaseID;	// 52 = 0x34
	unsigned long long _databasePersistentID;	// 56 = 0x38
	unsigned long _dpapDatabaseID;	// 64 = 0x40
	unsigned long long _dpapDatabasePersistentID;	// 68 = 0x44
	unsigned long _basePlaylistID;	// 76 = 0x4c
	unsigned long long _basePlaylistPersistentID;	// 80 = 0x50
	unsigned short _daapProtocolMajorVersion;	// 88 = 0x58
	unsigned short _daapProtocolMinorVersion;	// 90 = 0x5a
	unsigned short _dpapProtocolMajorVersion;	// 92 = 0x5c
	unsigned short _dpapProtocolMinorVersion;	// 94 = 0x5e
	BOOL _enhancedClient;	// 96 = 0x60
	BOOL _supportsDRMTokenEncryption;	// 97 = 0x61
	unsigned long _databaseRevision;	// 100 = 0x64
	unsigned long _drmRevision;	// 104 = 0x68
	unsigned long _photoDBRevision;	// 108 = 0x6c
	BOOL _dpapImportInProgress;	// 112 = 0x70
	NSMutableDictionary *_artworkRequestMap;	// 116 = 0x74
}
@property(retain, nonatomic) NSMutableDictionary *artworkRequestMap;	// G=0xea735; S=0xea745; @synthesize=_artworkRequestMap
@property(assign, nonatomic) unsigned long basePlaylistID;	// G=0xea5a9; S=0xea5b9; @synthesize=_basePlaylistID
@property(assign, nonatomic) unsigned long long basePlaylistPersistentID;	// G=0xea5c9; S=0xea5e1; @synthesize=_basePlaylistPersistentID
@property(assign, nonatomic) unsigned short daapProtocolMajorVersion;	// G=0xea5f5; S=0xea605; @synthesize=_daapProtocolMajorVersion
@property(assign, nonatomic) unsigned short daapProtocolMinorVersion;	// G=0xea615; S=0xea625; @synthesize=_daapProtocolMinorVersion
@property(assign, nonatomic) unsigned long databaseID;	// G=0xea511; S=0xea521; @synthesize=_databaseID
@property(retain, nonatomic) NSString *databaseName;	// G=0xea4f1; S=0xea501; @synthesize=_databaseName
@property(assign, nonatomic) unsigned long long databasePersistentID;	// G=0xea531; S=0xea549; @synthesize=_databasePersistentID
@property(assign, nonatomic) unsigned long databaseRevision;	// G=0xea6b5; S=0xea6c5; @synthesize=_databaseRevision
@property(assign, nonatomic) unsigned long dpapDatabaseID;	// G=0xea55d; S=0xea56d; @synthesize=_dpapDatabaseID
@property(assign, nonatomic) unsigned long long dpapDatabasePersistentID;	// G=0xea57d; S=0xea595; @synthesize=_dpapDatabasePersistentID
@property(assign, nonatomic) BOOL dpapImportInProgress;	// G=0xea715; S=0xea725; @synthesize=_dpapImportInProgress
@property(assign, nonatomic) unsigned short dpapProtocolMajorVersion;	// G=0xea635; S=0xea645; @synthesize=_dpapProtocolMajorVersion
@property(assign, nonatomic) unsigned short dpapProtocolMinorVersion;	// G=0xea655; S=0xea665; @synthesize=_dpapProtocolMinorVersion
@property(assign, nonatomic) unsigned long drmRevision;	// G=0xea6d5; S=0xea6e5; @synthesize=_drmRevision
@property(assign, nonatomic) BOOL enhancedClient;	// G=0xea675; S=0xea685; @synthesize=_enhancedClient
@property(retain, nonatomic) NSString *homeShareGroupID;	// G=0xea479; S=0xea489; @synthesize=_homeShareGroupID
@property(assign, nonatomic) unsigned long long machineID;	// G=0xea42d; S=0xea445; @synthesize=_machineID
@property(assign, nonatomic) unsigned long long pairingID;	// G=0xea401; S=0xea419; @synthesize=_pairingID
@property(assign, nonatomic) unsigned long photoDBRevision;	// G=0xea6f5; S=0xea705; @synthesize=_photoDBRevision
@property(copy) NSURL *serverIPURL;	// G=0xea4ad; S=0xea4c1; @synthesize=_serverIPURL
@property(assign, nonatomic) int serverPort;	// G=0xea4d1; S=0xea4e1; @synthesize=_serverPort
@property(copy, nonatomic) NSURL *serverURL;	// G=0xea499; S=0xe9941; @synthesize=_serverURL
@property(assign, nonatomic) unsigned long sessionID;	// G=0xea459; S=0xea469; @synthesize=_sessionID
@property(assign, nonatomic) BOOL supportsDRMTokenEncryption;	// G=0xea695; S=0xea6a5; @synthesize=_supportsDRMTokenEncryption
+ (id)hsDataClientWithServerURL:(id)serverURL serverName:(id)name hsGroupID:(id)anId machineID:(unsigned long long)anId4 pairingID:(unsigned long long)anId5 clientType:(unsigned long)type;	// 0xe95f1
- (id)initWithServerURL:(id)serverURL hsGroupID:(id)anId machineID:(unsigned long long)anId3 pairingID:(unsigned long long)anId4 clientName:(id)name clientType:(unsigned long)type;	// 0xe965d
- (void)_dataClientConnectionHandler:(id)handler;	// 0xea339
- (void)artworkRequestCompletedForIdentifier:(id)identifier;	// 0xf9abd
// declared property getter: - (id)artworkRequestMap;	// 0xea735
// declared property getter: - (unsigned long)basePlaylistID;	// 0xea5a9
// declared property getter: - (unsigned long long)basePlaylistPersistentID;	// 0xea5c9
- (id)baseURL;	// 0xe9afd
- (id)browseRequestWithQuery:(id)query;	// 0xf740d
- (void)cancelArtworkRequestForIdentifier:(id)identifier;	// 0xf99a9
- (void)cancelImageRequest:(id)request;	// 0xea109
- (void)concreteDataClientConnect;	// 0xe9b31
- (void)concreteDataClientDisconnect;	// 0xe9cd9
// declared property getter: - (unsigned short)daapProtocolMajorVersion;	// 0xea5f5
// declared property getter: - (unsigned short)daapProtocolMinorVersion;	// 0xea615
// declared property getter: - (unsigned long)databaseID;	// 0xea511
// declared property getter: - (id)databaseName;	// 0xea4f1
// declared property getter: - (unsigned long long)databasePersistentID;	// 0xea531
// declared property getter: - (unsigned long)databaseRevision;	// 0xea6b5
- (void)dealloc;	// 0xe97b1
- (id)description;	// 0xe9845
- (void)determineBasePlaylist;	// 0xf1e21
- (void)determineDAAPDatabase;	// 0xf1a19
- (void)determineDPAPDatabase;	// 0xf1c51
- (void)determineDPAPDatabaseOnUpdate;	// 0xf38e9
- (void)determinePhotoDatabase;	// 0xf3efd
- (void)disconnectClient;	// 0xf2e6d
// declared property getter: - (unsigned long)dpapDatabaseID;	// 0xea55d
// declared property getter: - (unsigned long long)dpapDatabasePersistentID;	// 0xea57d
// declared property getter: - (BOOL)dpapImportInProgress;	// 0xea715
// declared property getter: - (unsigned short)dpapProtocolMajorVersion;	// 0xea635
// declared property getter: - (unsigned short)dpapProtocolMinorVersion;	// 0xea655
// declared property getter: - (unsigned long)drmRevision;	// 0xea6d5
- (id)drmTokenRequestWithQuery:(id)query;	// 0xf6edd
- (void)drmUpdate;	// 0xf2f11
// declared property getter: - (BOOL)enhancedClient;	// 0xea675
- (void)establishFairPlayContextWithServerFPVer:(unsigned long)serverFPVer withSelector:(SEL)selector;	// 0xf148d
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xea001
- (FPSAPContextOpaque_Ref)fairPlayContext;	// 0xe9aed
- (BOOL)groupingSupportsProperty:(id)property;	// 0xe9f81
- (id)groupsRequestWithQuery:(id)query;	// 0xf7565
- (void)handleDAAPQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0xf7ac5
- (void)handleDPAPQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0xf8589
- (unsigned)hash;	// 0xe98c9
// declared property getter: - (id)homeShareGroupID;	// 0xea479
- (void)homeShareVerify;	// 0xf1571
- (void)iTunesDPAPDatabaseUpdate;	// 0xf35c9
- (void)iTunesDatabaseUpdate;	// 0xf2a89
- (void)iTunesPhotoDatabaseUpdate;	// 0xf3231
- (id)imageRequestWithAsset:(id)asset artworkIdentifier:(id)identifier requestedSize:(CGSize)size crop:(BOOL)crop withContext:(void *)context;	// 0xf90a1
- (id)imageRequestWithAsset:(id)asset imageID:(id)anId size:(CGSize)size crop:(BOOL)crop context:(id)context;	// 0xea0d5
- (BOOL)isEqual:(id)equal;	// 0xe9899
- (id)itemsRequestWithQuery:(id)query;	// 0xf6405
- (void)logErrorWithRequest:(id)request httpStatus:(long)status;	// 0xf2a31
- (void)loginToITunes;	// 0xf0d81
- (void)loginToPhotoApp;	// 0xf3c01
// declared property getter: - (unsigned long long)machineID;	// 0xea42d
- (void)machineVerify;	// 0xf17d5
- (void)mediaItemPropertyUpdateHandler:(id)handler;	// 0xf80f5
- (id)networkTestURLWithOptions:(id)options headers:(id *)headers;	// 0xea121
// declared property getter: - (unsigned long long)pairingID;	// 0xea401
- (void)photoAppDatabaseUpdate;	// 0xf40b1
- (id)photoDBRequestWithQuery:(id)query;	// 0xf7725
// declared property getter: - (unsigned long)photoDBRevision;	// 0xea6f5
- (BOOL)photosShared;	// 0xe9a91
- (id)playbackURLWithItemID:(unsigned long)itemID;	// 0xe99ed
- (id)playlistRequestWithQuery:(id)query;	// 0xf7935
- (BOOL)processQueryAsync:(id)async;	// 0xe9ffd
- (void)processSAPExchange:(unsigned long)exchange hwInfo:(FairPlayHWInfo_)info sapContext:(FPSAPContextOpaque_Ref)context sapBuffer:(char *)buffer bufferLength:(unsigned long)length withSelector:(SEL)selector;	// 0xf10e1
- (BOOL)queryFilterSupportsProperty:(id)property;	// 0xe9f05
- (id)rentalRequestWithQuery:(id)query;	// 0xf7269
// declared property getter: - (id)serverIPURL;	// 0xea4ad
- (void)serverInfo;	// 0xf2271
// declared property getter: - (int)serverPort;	// 0xea4d1
// declared property getter: - (id)serverURL;	// 0xea499
- (id)serverURLStr;	// 0xe99c5
// declared property getter: - (unsigned long)sessionID;	// 0xea459
// declared property setter: - (void)setArtworkRequestMap:(id)map;	// 0xea745
// declared property setter: - (void)setBasePlaylistID:(unsigned long)anId;	// 0xea5b9
// declared property setter: - (void)setBasePlaylistPersistentID:(unsigned long long)anId;	// 0xea5e1
// declared property setter: - (void)setDaapProtocolMajorVersion:(unsigned short)version;	// 0xea605
// declared property setter: - (void)setDaapProtocolMinorVersion:(unsigned short)version;	// 0xea625
// declared property setter: - (void)setDatabaseID:(unsigned long)anId;	// 0xea521
// declared property setter: - (void)setDatabaseName:(id)name;	// 0xea501
// declared property setter: - (void)setDatabasePersistentID:(unsigned long long)anId;	// 0xea549
// declared property setter: - (void)setDatabaseRevision:(unsigned long)revision;	// 0xea6c5
- (BOOL)setDatabaseWithResponse:(id)response daapResponse:(BOOL)response2;	// 0xf26ad
// declared property setter: - (void)setDpapDatabaseID:(unsigned long)anId;	// 0xea56d
// declared property setter: - (void)setDpapDatabasePersistentID:(unsigned long long)anId;	// 0xea595
// declared property setter: - (void)setDpapImportInProgress:(BOOL)progress;	// 0xea725
// declared property setter: - (void)setDpapProtocolMajorVersion:(unsigned short)version;	// 0xea645
// declared property setter: - (void)setDpapProtocolMinorVersion:(unsigned short)version;	// 0xea665
// declared property setter: - (void)setDrmRevision:(unsigned long)revision;	// 0xea6e5
// declared property setter: - (void)setEnhancedClient:(BOOL)client;	// 0xea685
// declared property setter: - (void)setHomeShareGroupID:(id)anId;	// 0xea489
// declared property setter: - (void)setMachineID:(unsigned long long)anId;	// 0xea445
// declared property setter: - (void)setPairingID:(unsigned long long)anId;	// 0xea419
// declared property setter: - (void)setPhotoDBRevision:(unsigned long)revision;	// 0xea705
// declared property setter: - (void)setServerIPURL:(id)ipurl;	// 0xea4c1
// declared property setter: - (void)setServerPort:(int)port;	// 0xea4e1
// declared property setter: - (void)setServerURL:(id)url;	// 0xe9941
// declared property setter: - (void)setSessionID:(unsigned long)anId;	// 0xea469
// declared property setter: - (void)setSupportsDRMTokenEncryption:(BOOL)encryption;	// 0xea6a5
- (void)submitPropertyUpdateQueryWithURLStr:(id)urlstr property:(id)property propertyValue:(unsigned long)value itemID:(id)anId;	// 0xf83c5
// declared property getter: - (BOOL)supportsDRMTokenEncryption;	// 0xea695
- (BOOL)supportsProperty:(id)property;	// 0xe9ed1
@end

