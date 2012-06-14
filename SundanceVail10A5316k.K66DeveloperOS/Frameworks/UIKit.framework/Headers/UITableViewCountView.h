/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILabel.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCountView : UILabel {
@private
	NSString *_countString;	// 156 = 0x9c
	int _count;	// 160 = 0xa0
}
@property(assign) int count;	// G=0x3011fd45; S=0x3011fcc5; converted property
- (id)initWithFrame:(CGRect)frame withCountString:(id)countString withCount:(int)count;	// 0x3011fb71
// converted property getter: - (int)count;	// 0x3011fd45
- (void)dealloc;	// 0x301dea69
// converted property setter: - (void)setCount:(int)count;	// 0x3011fcc5
- (void)setCountString:(id)string withCount:(int)count;	// 0x3011fc69
@end

