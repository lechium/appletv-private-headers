/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView {
	BOOL _isSelected;	// 84 = 0x54
	NSString *_text;	// 88 = 0x58
	CGSize _textSize;	// 92 = 0x5c
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x33e49fdd; S=0x33e49fcd; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x33e4a339; S=0x33e4a349; @synthesize=_isSelected
@property(copy, nonatomic) NSString *text;	// G=0x33e4a325; S=0x33e49f55; @synthesize=_text
- (id)initWithFrame:(CGRect)frame;	// 0x33e49cbd
- (void)_sizeToFit;	// 0x33e49df5
- (void)drawRect:(CGRect)rect;	// 0x33e4a019
// converted property getter: - (BOOL)isHighlighted;	// 0x33e49fdd
// declared property getter: - (BOOL)isSelected;	// 0x33e4a339
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x33e49fcd
- (void)setIsSelected:(BOOL)selected;	// 0x33e49fed
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x33e4a349
// declared property setter: - (void)setText:(id)text;	// 0x33e49f55
// declared property getter: - (id)text;	// 0x33e4a325
@end

