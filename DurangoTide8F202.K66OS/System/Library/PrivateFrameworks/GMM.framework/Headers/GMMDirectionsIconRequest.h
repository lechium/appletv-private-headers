/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray, GMMClientCapabilities;

@interface GMMDirectionsIconRequest : PBRequest {
@private
	GMMClientCapabilities *_capabilities;	// 4 = 0x4
	int _cachedIconVersion;	// 8 = 0x8
	BOOL _hasCachedIconVersion;	// 12 = 0xc
	NSMutableArray *_cachedIconIDs;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *cachedIconIDs;	// G=0x30a72c31; S=0x30a732c9; @synthesize=_cachedIconIDs
@property(readonly, assign, nonatomic) int cachedIconIDsCount;	// G=0x30a731cd; 
@property(assign, nonatomic) int cachedIconVersion;	// G=0x30a72c51; S=0x30a72c11; @synthesize=_cachedIconVersion
@property(retain, nonatomic) GMMClientCapabilities *capabilities;	// G=0x30a72c61; S=0x30a732a1; @synthesize=_capabilities
@property(readonly, assign, nonatomic) BOOL hasCachedIconVersion;	// G=0x30a72c41; @synthesize=_hasCachedIconVersion
@property(readonly, assign, nonatomic) BOOL hasCapabilities;	// G=0x30a72bfd; 
- (id)init;	// 0x30a7324d
- (void)addCachedIconID:(long long)anId;	// 0x30a7308d
- (long long)cachedIconIDAtIndex:(unsigned)index;	// 0x30a730d1
// declared property getter: - (id)cachedIconIDs;	// 0x30a72c31
// declared property getter: - (int)cachedIconIDsCount;	// 0x30a731cd
// declared property getter: - (int)cachedIconVersion;	// 0x30a72c51
// declared property getter: - (id)capabilities;	// 0x30a72c61
- (void)dealloc;	// 0x30a731f1
- (id)description;	// 0x30a72c71
// declared property getter: - (BOOL)hasCachedIconVersion;	// 0x30a72c41
// declared property getter: - (BOOL)hasCapabilities;	// 0x30a72bfd
- (BOOL)readFrom:(id)from;	// 0x30a72eb1
- (unsigned)requestTypeCode;	// 0x30a72c2d
- (Class)responseClass;	// 0x30a7328d
- (void)setCachedIconID:(long long)anId atIndex:(unsigned)index;	// 0x30a73145
// declared property setter: - (void)setCachedIconIDs:(id)ids;	// 0x30a732c9
// declared property setter: - (void)setCachedIconVersion:(int)version;	// 0x30a72c11
// declared property setter: - (void)setCapabilities:(id)capabilities;	// 0x30a732a1
- (void)writeTo:(id)to;	// 0x30a72d89
@end

