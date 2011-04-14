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
@private
	NSString *_time;	// 44 = 0x2c
	UIColor *_timeColor;	// 48 = 0x30
	UIColor *_timeShadowColor;	// 52 = 0x34
	unsigned _align : 2;	// 56 = 0x38
}
@property(retain) NSString *time;	// G=0x30740a4d; S=0x30741c79; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x30741d49
- (void)dealloc;	// 0x30741cdd
- (void)drawRect:(CGRect)rect;	// 0x30742249
// converted property setter: - (void)setTime:(id)time;	// 0x30741c79
- (void)setTimeColor:(id)color;	// 0x30741c2d
- (void)setTimeShadowColor:(id)color;	// 0x30741be1
// converted property getter: - (id)time;	// 0x30740a4d
@end

