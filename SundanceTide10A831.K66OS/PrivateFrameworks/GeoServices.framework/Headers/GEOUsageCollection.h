/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOUsageCollection : PBCodable {
	XXStruct_t9EeIA _probeID;	// 4 = 0x4
	XXStruct_t9EeIA _sessionID;	// 20 = 0x14
	XXStruct_2ta5gB *_tileUsages;	// 36 = 0x24
	unsigned _tileUsagesCount;	// 40 = 0x28
	unsigned _tileUsagesSpace;	// 44 = 0x2c
	double _timestamp;	// 48 = 0x30
	int _cellWifi;	// 56 = 0x38
	NSString *_countryCode;	// 60 = 0x3c
	int _geoService;	// 64 = 0x40
	NSString *_hwMachine;	// 68 = 0x44
	int _requestDataSize;	// 72 = 0x48
	int _responseDataSize;	// 76 = 0x4c
	int _responseTime;	// 80 = 0x50
	struct {
		unsigned course : 1;
		unsigned heading : 1;
		unsigned horizontalAccuracy : 1;
		unsigned speed : 1;
		unsigned timestamp : 1;
		unsigned verticalAccuracy : 1;
		unsigned altitude : 1;
		unsigned type : 1;
	} _has;	// 84 = 0x54
}
@property(assign, nonatomic) int cellWifi;	// G=0x302a5791; S=0x30241425; @synthesize=_cellWifi
@property(retain, nonatomic) NSString *countryCode;	// G=0x302a57a1; S=0x302413a9; @synthesize=_countryCode
@property(assign, nonatomic) int geoService;	// G=0x302a5751; S=0x302412f9; @synthesize=_geoService
@property(assign, nonatomic) BOOL hasCellWifi;	// G=0x302a3e15; S=0x302a3df5; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x302a3e29; 
@property(assign, nonatomic) BOOL hasGeoService;	// G=0x302a3d49; S=0x302a3d29; 
@property(readonly, assign, nonatomic) BOOL hasHwMachine;	// G=0x302a404d; 
@property(assign, nonatomic) BOOL hasProbeID;	// G=0x302a3e91; S=0x302a3e75; 
@property(assign, nonatomic) BOOL hasRequestDataSize;	// G=0x302a3d7d; S=0x302a3d5d; 
@property(assign, nonatomic) BOOL hasResponseDataSize;	// G=0x302a3db1; S=0x302a3d91; 
@property(assign, nonatomic) BOOL hasResponseTime;	// G=0x302a3de1; S=0x302a3dc5; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x302a3e61; S=0x302a3e41; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x302a3ec9; S=0x302a3ea9; 
@property(retain, nonatomic) NSString *hwMachine;	// G=0x302a5811; S=0x302a5821; @synthesize=_hwMachine
@property(assign, nonatomic) XXStruct_t9EeIA probeID;	// G=0x302a57d5; S=0x30241475; @synthesize=_probeID
@property(assign, nonatomic) int requestDataSize;	// G=0x302a5761; S=0x30241325; @synthesize=_requestDataSize
@property(assign, nonatomic) int responseDataSize;	// G=0x302a5771; S=0x30241351; @synthesize=_responseDataSize
@property(assign, nonatomic) int responseTime;	// G=0x302a5781; S=0x3024137d; @synthesize=_responseTime
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x302a57b1; S=0x302414b9; @synthesize=_sessionID
@property(readonly, assign, nonatomic) XXStruct_2ta5gB *tileUsages;	// G=0x302a3eed; 
@property(readonly, assign, nonatomic) unsigned tileUsagesCount;	// G=0x302a3edd; 
@property(assign, nonatomic) double timestamp;	// G=0x302a57f9; S=0x302414fd; @synthesize=_timestamp
- (void)addTileUsage:(XXStruct_2ta5gB)usage;	// 0x302474c9
// declared property getter: - (int)cellWifi;	// 0x302a5791
- (void)clearTileUsages;	// 0x302a3efd
- (void)copyTo:(id)to;	// 0x302a4ea9
// declared property getter: - (id)countryCode;	// 0x302a57a1
- (void)dealloc;	// 0x302a3cc1
- (id)description;	// 0x302a4065
- (id)dictionaryRepresentation;	// 0x302a40d5
// declared property getter: - (int)geoService;	// 0x302a5751
// declared property getter: - (BOOL)hasCellWifi;	// 0x302a3e15
// declared property getter: - (BOOL)hasCountryCode;	// 0x302a3e29
// declared property getter: - (BOOL)hasGeoService;	// 0x302a3d49
// declared property getter: - (BOOL)hasHwMachine;	// 0x302a404d
// declared property getter: - (BOOL)hasProbeID;	// 0x302a3e91
// declared property getter: - (BOOL)hasRequestDataSize;	// 0x302a3d7d
// declared property getter: - (BOOL)hasResponseDataSize;	// 0x302a3db1
// declared property getter: - (BOOL)hasResponseTime;	// 0x302a3de1
// declared property getter: - (BOOL)hasSessionID;	// 0x302a3e61
// declared property getter: - (BOOL)hasTimestamp;	// 0x302a3ec9
- (unsigned)hash;	// 0x302a54f1
// declared property getter: - (id)hwMachine;	// 0x302a5811
- (BOOL)isEqual:(id)equal;	// 0x302a520d
// declared property getter: - (XXStruct_t9EeIA)probeID;	// 0x302a57d5
- (BOOL)readFrom:(id)from;	// 0x302a4b39
// declared property getter: - (int)requestDataSize;	// 0x302a5761
// declared property getter: - (int)responseDataSize;	// 0x302a5771
// declared property getter: - (int)responseTime;	// 0x302a5781
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x302a57b1
// declared property setter: - (void)setCellWifi:(int)wifi;	// 0x30241425
// declared property setter: - (void)setCountryCode:(id)code;	// 0x302413a9
// declared property setter: - (void)setGeoService:(int)service;	// 0x302412f9
// declared property setter: - (void)setHasCellWifi:(BOOL)wifi;	// 0x302a3df5
// declared property setter: - (void)setHasGeoService:(BOOL)service;	// 0x302a3d29
// declared property setter: - (void)setHasProbeID:(BOOL)anId;	// 0x302a3e75
// declared property setter: - (void)setHasRequestDataSize:(BOOL)size;	// 0x302a3d5d
// declared property setter: - (void)setHasResponseDataSize:(BOOL)size;	// 0x302a3d91
// declared property setter: - (void)setHasResponseTime:(BOOL)time;	// 0x302a3dc5
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x302a3e41
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x302a3ea9
// declared property setter: - (void)setHwMachine:(id)machine;	// 0x302a5821
// declared property setter: - (void)setProbeID:(XXStruct_t9EeIA)anId;	// 0x30241475
// declared property setter: - (void)setRequestDataSize:(int)size;	// 0x30241325
// declared property setter: - (void)setResponseDataSize:(int)size;	// 0x30241351
// declared property setter: - (void)setResponseTime:(int)time;	// 0x3024137d
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x302414b9
- (void)setTileUsages:(XXStruct_2ta5gB *)usages count:(unsigned)count;	// 0x302a3ffd
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x302414fd
- (XXStruct_2ta5gB)tileUsageAtIndex:(unsigned)index;	// 0x302a3f3d
// declared property getter: - (XXStruct_2ta5gB *)tileUsages;	// 0x302a3eed
// declared property getter: - (unsigned)tileUsagesCount;	// 0x302a3edd
// declared property getter: - (double)timestamp;	// 0x302a57f9
- (void)writeTo:(id)to;	// 0x302a4b45
@end
