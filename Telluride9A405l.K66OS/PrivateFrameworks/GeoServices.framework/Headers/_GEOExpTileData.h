/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"


__attribute__((visibility("hidden")))
@interface _GEOExpTileData : NSObject {
	id _data;	// 4 = 0x4
	ExpEntry *_entry;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) id data;	// G=0x3143b999; @synthesize=_data
@property(assign, nonatomic) ExpEntry *entry;	// G=0x3143b9a9; S=0x3143b9b9; @synthesize=_entry
- (id)initWithData:(id)data entry:(ExpEntry *)entry;	// 0x3143b8e9
// declared property getter: - (id)data;	// 0x3143b999
- (void)dealloc;	// 0x3143b94d
// declared property getter: - (ExpEntry *)entry;	// 0x3143b9a9
// declared property setter: - (void)setEntry:(ExpEntry *)entry;	// 0x3143b9b9
@end
