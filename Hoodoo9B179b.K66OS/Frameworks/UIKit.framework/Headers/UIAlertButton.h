/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"


__attribute__((visibility("hidden")))
@interface UIAlertButton : UIButton {
@private
	float _imageOffset;	// 140 = 0x8c
}
@property(assign, nonatomic) float imageOffset;	// G=0x3320d2b5; S=0x3320d2c5; @synthesize=_imageOffset
@property(retain) id title;	// G=0x32ff5f4d; S=0x3320d19d; converted property
- (id)initWithTitle:(id)title;	// 0x32f95b01
- (id)image;	// 0x32ff2d7d
// declared property getter: - (float)imageOffset;	// 0x3320d2b5
- (void)layoutSubviews;	// 0x32f95bfd
- (void)setEnabled:(BOOL)enabled;	// 0x3320d251
- (void)setHighlighted:(BOOL)highlighted;	// 0x32ff4631
- (void)setImage:(id)image forState:(unsigned)state;	// 0x3320d1fd
// declared property setter: - (void)setImageOffset:(float)offset;	// 0x3320d2c5
// converted property setter: - (void)setTitle:(id)title;	// 0x3320d19d
// converted property getter: - (id)title;	// 0x32ff5f4d
@end

