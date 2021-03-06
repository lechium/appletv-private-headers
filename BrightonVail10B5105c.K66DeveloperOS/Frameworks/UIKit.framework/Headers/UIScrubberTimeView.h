/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSString;

__attribute__((visibility("hidden")))
@interface UIScrubberTimeView : UIView {
	NSString *_time;	// 84 = 0x54
	UIColor *_timeColor;	// 88 = 0x58
	UIColor *_timeShadowColor;	// 92 = 0x5c
	unsigned _align : 2;	// 96 = 0x60
}
@property(retain) NSString *time;	// G=0x34776d9d; S=0x34776c79; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x34776b31
- (void)dealloc;	// 0x34776c01
- (void)drawRect:(CGRect)rect;	// 0x34776dad
// converted property setter: - (void)setTime:(id)time;	// 0x34776c79
- (void)setTimeColor:(id)color;	// 0x34776ced
- (void)setTimeShadowColor:(id)color;	// 0x34776d45
// converted property getter: - (id)time;	// 0x34776d9d
@end

