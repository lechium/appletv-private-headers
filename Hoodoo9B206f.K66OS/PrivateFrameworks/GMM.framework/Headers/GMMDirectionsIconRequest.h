/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library
#import "GMM-Structs.h"

@class GMMClientCapabilities;

__attribute__((visibility("hidden")))
@interface GMMDirectionsIconRequest : PBRequest {
	GMMClientCapabilities *_capabilities;	// 4 = 0x4
	BOOL _hasCachedIconVersion;	// 8 = 0x8
	int _cachedIconVersion;	// 12 = 0xc
	XXStruct_19EQxD _cachedIconIDs;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) long long *cachedIconIDs;	// G=0x33ccab11; 
@property(readonly, assign, nonatomic) unsigned cachedIconIDsCount;	// G=0x33ccaafd; 
@property(assign, nonatomic) int cachedIconVersion;	// G=0x33ccaab5; S=0x33ccaad9; @synthesize=_cachedIconVersion
@property(retain, nonatomic) GMMClientCapabilities *capabilities;	// G=0x33ccb0bd; S=0x33ccb0cd; @synthesize=_capabilities
@property(assign, nonatomic) BOOL hasCachedIconVersion;	// G=0x33ccb0f1; S=0x33ccb101; @synthesize=_hasCachedIconVersion
@property(readonly, assign, nonatomic) BOOL hasCapabilities;	// G=0x33ccaa9d; 
- (void)addCachedIconID:(long long)anId;	// 0x33ccab35
- (long long)cachedIconIDAtIndex:(unsigned)index;	// 0x33ccab4d
// declared property getter: - (long long *)cachedIconIDs;	// 0x33ccab11
// declared property getter: - (unsigned)cachedIconIDsCount;	// 0x33ccaafd
// declared property getter: - (int)cachedIconVersion;	// 0x33ccaab5
// declared property getter: - (id)capabilities;	// 0x33ccb0bd
- (void)clearCachedIconIDs;	// 0x33ccab21
- (void)dealloc;	// 0x33ccaa49
- (id)description;	// 0x33ccac0d
- (id)dictionaryRepresentation;	// 0x33ccac7d
// declared property getter: - (BOOL)hasCachedIconVersion;	// 0x33ccb0f1
// declared property getter: - (BOOL)hasCapabilities;	// 0x33ccaa9d
- (BOOL)readFrom:(id)from;	// 0x33ccad59
- (void)setCachedIconIDs:(long long *)ids count:(unsigned)count;	// 0x33ccabf5
// declared property setter: - (void)setCachedIconVersion:(int)version;	// 0x33ccaad9
// declared property setter: - (void)setCapabilities:(id)capabilities;	// 0x33ccb0cd
// declared property setter: - (void)setHasCachedIconVersion:(BOOL)version;	// 0x33ccb101
- (void)writeTo:(id)to;	// 0x33ccaf9d
@end
