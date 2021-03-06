/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRShimmerControl : BRControl {
	BRControl *_base;	// 84 = 0x54
	BRImageControl *_shimmer;	// 88 = 0x58
	float _offset;	// 92 = 0x5c
}
@property(assign) float offset;	// G=0x35c36d; S=0x35c31d; converted property
+ (id)shimmerWithOffset:(float)offset;	// 0x35c0e9
- (id)init;	// 0x35c309
- (id)initWithOffset:(float)offset;	// 0x35c14d
- (id)_calculateKeyTimes;	// 0x35c70d
- (id)_calculatePositionValues;	// 0x35c621
- (void)dealloc;	// 0x35c37d
- (void)layoutSubcontrols;	// 0x35c3e1
// converted property getter: - (float)offset;	// 0x35c36d
// converted property setter: - (void)setOffset:(float)offset;	// 0x35c31d
@end

