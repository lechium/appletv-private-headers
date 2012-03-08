/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEOTileRequester, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileRequestContext : NSObject {
	GEOTileKeyList *_fullList;	// 4 = 0x4
	GEOTileKeyList *_networkList;	// 8 = 0x8
	GEOTileRequester *_tileRequester;	// 12 = 0xc
}
@property(retain, nonatomic) GEOTileKeyList *fullList;	// G=0x34bee2b5; S=0x34bee2c5; @synthesize=_fullList
@property(retain, nonatomic) GEOTileKeyList *networkList;	// G=0x34bee2e9; S=0x34bee2f9; @synthesize=_networkList
@property(retain, nonatomic) GEOTileRequester *tileRequester;	// G=0x34bee31d; S=0x34bee32d; @synthesize=_tileRequester
- (void)dealloc;	// 0x34bee249
// declared property getter: - (id)fullList;	// 0x34bee2b5
// declared property getter: - (id)networkList;	// 0x34bee2e9
// declared property setter: - (void)setFullList:(id)list;	// 0x34bee2c5
// declared property setter: - (void)setNetworkList:(id)list;	// 0x34bee2f9
// declared property setter: - (void)setTileRequester:(id)requester;	// 0x34bee32d
// declared property getter: - (id)tileRequester;	// 0x34bee31d
@end

