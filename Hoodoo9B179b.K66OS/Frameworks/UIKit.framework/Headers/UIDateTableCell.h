/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageAndTextTableCell.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIDateTableCell : UIImageAndTextTableCell {
@private
	float _horizontalOffset;	// 72 = 0x48
	float _verticalOffset;	// 76 = 0x4c
}
- (id)initWithFrame:(CGRect)frame;	// 0x33067e19
- (CGRect)contentBounds;	// 0x33067edd
- (void)layoutSubviews;	// 0x33067fad
- (void)setHorizontalOffset:(float)offset;	// 0x33067ebd
- (void)setVerticalOffset:(float)offset;	// 0x33067ecd
- (id)shadowColor;	// 0x33067f91
@end
