/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject {
@private
	double timestamp;	// 4 = 0x4
	int phase;	// 12 = 0xc
	unsigned tapCount;	// 16 = 0x10
	UIWindow *window;	// 20 = 0x14
	CGPoint locationInWindow;	// 24 = 0x18
	unsigned char _pathIndex;	// 32 = 0x20
	unsigned char _pathIdentity;	// 33 = 0x21
	float _pathMajorRadius;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned char _pathIdentity;	// G=0x30318c65; @synthesize
@property(readonly, assign, nonatomic) unsigned char _pathIndex;	// G=0x30318c55; @synthesize
@property(assign, nonatomic) float _pathMajorRadius;	// G=0x30318c75; S=0x30318c85; @synthesize
@property(assign, nonatomic) CGPoint locationInWindow;	// G=0x30318c3d; S=0x30318bbd; @synthesize
@property(assign, nonatomic) int phase;	// G=0x30318bfd; S=0x3020e78d; @synthesize
@property(assign, nonatomic) unsigned tapCount;	// G=0x30318c0d; S=0x30318c1d; @synthesize
@property(assign, nonatomic) double timestamp;	// G=0x30318bd1; S=0x30318be9; @synthesize
@property(retain, nonatomic) UIWindow *window;	// G=0x3020e77d; S=0x30318c2d; @synthesize
+ (id)syntheticTouchWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x3020e695
- (id)initWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x3020e6f1
// declared property getter: - (unsigned char)_pathIdentity;	// 0x30318c65
// declared property getter: - (unsigned char)_pathIndex;	// 0x30318c55
// declared property getter: - (float)_pathMajorRadius;	// 0x30318c75
- (CGPoint)getLocationInWindow;	// 0x30318ba5
- (CGPoint)locationInView:(id)view;	// 0x3020e79d
// declared property getter: - (CGPoint)locationInWindow;	// 0x30318c3d
// declared property getter: - (int)phase;	// 0x30318bfd
- (CGPoint)previousLocationInView:(id)view;	// 0x30318b4d
// declared property setter: - (void)setLocationInWindow:(CGPoint)window;	// 0x30318bbd
// declared property setter: - (void)setPhase:(int)phase;	// 0x3020e78d
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x30318c1d
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x30318be9
// declared property setter: - (void)setWindow:(id)window;	// 0x30318c2d
// declared property setter: - (void)set_pathMajorRadius:(float)radius;	// 0x30318c85
// declared property getter: - (unsigned)tapCount;	// 0x30318c0d
// declared property getter: - (double)timestamp;	// 0x30318bd1
// declared property getter: - (id)window;	// 0x3020e77d
@end

