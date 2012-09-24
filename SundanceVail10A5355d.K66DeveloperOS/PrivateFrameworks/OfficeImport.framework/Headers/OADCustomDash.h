/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDash.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray;

@interface OADCustomDash : OADDash {
	NSMutableArray *mStops;	// 12 = 0xc
	unsigned mAreStopsOverridden : 1;	// 16 = 0x10
}
@property(retain) id stops;	// G=0x31dd47fd; S=0x31c5286d; converted property
+ (id)defaultProperties;	// 0x31c527dd
- (id)initWithDefaults;	// 0x31c52825
- (void)addStopWithDash:(float)dash space:(float)space;	// 0x31c528d1
- (BOOL)areStopsOverridden;	// 0x31dd482d
- (id)copyWithZone:(NSZone *)zone;	// 0x31dd4785
- (float)dashAtIndex:(unsigned)index;	// 0x31c52a2d
- (void)dealloc;	// 0x31c52b2d
- (unsigned)hash;	// 0x31dd4865
- (BOOL)isEqual:(id)equal;	// 0x31dd489d
// converted property setter: - (void)setStops:(id)stops;	// 0x31c5286d
- (float)spaceAtIndex:(unsigned)index;	// 0x31c52a75
- (unsigned)stopCount;	// 0x31c52a0d
// converted property getter: - (id)stops;	// 0x31dd47fd
@end
