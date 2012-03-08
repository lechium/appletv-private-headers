/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIScrubberTimeView : UIView {
@private
	NSString *_time;	// 48 = 0x30
	UIColor *_timeColor;	// 52 = 0x34
	UIColor *_timeShadowColor;	// 56 = 0x38
	unsigned _align : 2;	// 60 = 0x3c
}
@property(retain) NSString *time;	// G=0x330d1bd5; S=0x330d1ab1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x330d196d
- (void)dealloc;	// 0x330d1a3d
- (void)drawRect:(CGRect)rect;	// 0x330d1be5
// converted property setter: - (void)setTime:(id)time;	// 0x330d1ab1
- (void)setTimeColor:(id)color;	// 0x330d1b25
- (void)setTimeShadowColor:(id)color;	// 0x330d1b7d
// converted property getter: - (id)time;	// 0x330d1bd5
@end

