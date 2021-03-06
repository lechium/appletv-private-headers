/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCountView : UILabel {
	NSString *_countString;	// 160 = 0xa0
	int _count;	// 164 = 0xa4
}
@property(assign) int count;	// G=0x33a8493d; S=0x33a848bd; converted property
- (id)initWithFrame:(CGRect)frame withCountString:(id)countString withCount:(int)count;	// 0x33a84769
// converted property getter: - (int)count;	// 0x33a8493d
- (void)dealloc;	// 0x33b42d2d
// converted property setter: - (void)setCount:(int)count;	// 0x33a848bd
- (void)setCountString:(id)string withCount:(int)count;	// 0x33a84861
@end

