/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library

@class CADisplay;

@interface CADisplayMode : NSObject {
@private
	void *_priv;	// 4 = 0x4
	CADisplay *_dpy;	// 8 = 0x8
	unsigned _width;	// 12 = 0xc
	unsigned _height;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) unsigned height;	// G=0x34f6fd65; 
@property(readonly, assign, nonatomic) float pixelAspectRatio;	// G=0x34eca7c1; 
@property(readonly, assign, nonatomic) unsigned width;	// G=0x34f6fd55; 
+ (id)_displayModeWithMode:(int)mode display:(id)display;	// 0x34eca349
- (id)_display;	// 0x34f6fd35
- (id)_initWithMode:(int)mode display:(id)display;	// 0x34eca389
- (int)_mode;	// 0x34f6fd45
- (void)_setWidth:(unsigned long)width height:(unsigned long)height;	// 0x34eca49d
- (void)dealloc;	// 0x34f70285
- (id)description;	// 0x34f7014d
- (unsigned)hash;	// 0x34eca4bd
// declared property getter: - (unsigned long)height;	// 0x34f6fd65
- (BOOL)isEqual:(id)equal;	// 0x34f701d5
// declared property getter: - (float)pixelAspectRatio;	// 0x34eca7c1
// declared property getter: - (unsigned long)width;	// 0x34f6fd55
@end

