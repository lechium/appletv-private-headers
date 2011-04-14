/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellDeleteConfirmationControl : UIControl {
@private
	NSString *_title;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) CGSize size;	// G=0x307c6d5d; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x307c6445; 
+ (id)_backgroundImage;	// 0x307c69ad
+ (id)_highlightedBackgroundImage;	// 0x307c6961
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x307c6899
- (id)initWithTitle:(id)title;	// 0x307c6e2d
- (void)dealloc;	// 0x307c67e1
- (void)drawBackgroundInRect:(CGRect)rect;	// 0x307c6755
- (void)drawRect:(CGRect)rect;	// 0x307c6b99
// declared property getter: - (CGSize)size;	// 0x307c6d5d
// declared property getter: - (id)title;	// 0x307c6445
@end

