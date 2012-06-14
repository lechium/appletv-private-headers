/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewCell.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIPickerTableViewWrapperCell : UITableViewCell {
@private
	UIView *_wrappedView;	// 296 = 0x128
	CGSize _wrappedViewSize;	// 300 = 0x12c
}
@property(retain, nonatomic) UIView *wrappedView;	// G=0x30203665; S=0x3020399d; 
- (id)initWithFrame:(CGRect)frame;	// 0x303e7141
- (void)_updateWrappedView;	// 0x30203a0d
- (void)_updateWrappedViewFrame;	// 0x30203b3d
- (void)prepareForReuse;	// 0x30204cb1
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x30203c21
// declared property setter: - (void)setWrappedView:(id)view;	// 0x3020399d
// declared property getter: - (id)wrappedView;	// 0x30203665
@end

