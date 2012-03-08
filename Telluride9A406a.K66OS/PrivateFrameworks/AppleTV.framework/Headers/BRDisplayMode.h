/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class CADisplayMode;

@interface BRDisplayMode : NSObject {
@private
	CADisplayMode *_displayMode;	// 4 = 0x4
	double _refreshRate;	// 8 = 0x8
	BOOL _isVirtual;	// 16 = 0x10
}
@property(readonly, retain) CADisplayMode *displayMode;	// G=0x3304ba51; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x3304bac9; converted property
@property(readonly, assign) double refreshRate;	// G=0x3304bab1; converted property
- (id)initWithDisplayMode:(id)displayMode refreshRate:(double)rate isVirtual:(BOOL)aVirtual;	// 0x3304b845
- (unsigned long)bitsPerPixel;	// 0x3304baa9
- (void)dealloc;	// 0x3304b8d9
- (id)description;	// 0x3304b9e5
// converted property getter: - (id)displayMode;	// 0x3304ba51
- (unsigned long)height;	// 0x3304ba89
- (BOOL)interlaced;	// 0x3304baad
- (BOOL)isEqual:(id)equal;	// 0x3304b925
// converted property getter: - (BOOL)isVirtual;	// 0x3304bac9
// converted property getter: - (double)refreshRate;	// 0x3304bab1
- (BOOL)safe;	// 0x3304ba61
- (BOOL)safeForHardware;	// 0x3304ba65
- (unsigned long)width;	// 0x3304ba69
@end

