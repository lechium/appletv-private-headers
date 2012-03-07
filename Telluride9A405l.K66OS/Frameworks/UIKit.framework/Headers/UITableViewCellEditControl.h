/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl {
@private
	UITableViewCell *_cell;	// 72 = 0x48
	unsigned _style : 2;	// 76 = 0x4c
	unsigned _rotated : 1;	// 76 = 0x4c
	unsigned _rotating : 1;	// 76 = 0x4c
	unsigned _hiding : 1;	// 76 = 0x4c
	unsigned _reserved : 27;	// 76 = 0x4c
}
@property(assign, nonatomic, getter=isHiding) BOOL hiding;	// G=0x32f23229; S=0x32f23211; 
@property(assign, nonatomic, getter=isRotated) BOOL rotated;	// G=0x32dbc329; S=0x32f231e9; 
+ (id)_deleteImage;	// 0x32da76a1
+ (id)_deleteImageBackground;	// 0x32cdc535
+ (id)_insertImage;	// 0x32da637d
+ (CGRect)_minusRect;	// 0x32da777d
+ (id)_multiSelectHighlightedImage;	// 0x32f23179
+ (id)_multiSelectNotSelectedImage;	// 0x32f230d1
+ (id)_multiSelectSelectedImage;	// 0x32f23109
+ (CGSize)defaultSize;	// 0x32cdc4cd
- (id)initWithTableViewCell:(id)tableViewCell editingStyle:(int)style;	// 0x32da47dd
- (id)_currentImage;	// 0x32da4b8d
- (id)_minusView;	// 0x32dbc131
- (void)_multiselectColorChanged;	// 0x32f2323d
- (void)_toggleRotate;	// 0x32dbc109
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x32dbd425
- (void)_updateImageView;	// 0x32db8c59
// declared property getter: - (BOOL)isHiding;	// 0x32f23229
// declared property getter: - (BOOL)isRotated;	// 0x32dbc329
- (BOOL)isRotating;	// 0x32f231fd
- (void)layoutSubviews;	// 0x32da49d1
- (void)setFrame:(CGRect)frame;	// 0x32da4989
// declared property setter: - (void)setHiding:(BOOL)hiding;	// 0x32f23211
- (void)setHighlighted:(BOOL)highlighted;	// 0x32db8c19
// declared property setter: - (void)setRotated:(BOOL)rotated;	// 0x32f231e9
- (void)setRotated:(BOOL)rotated animated:(BOOL)animated;	// 0x32da5425
- (void)setSelected:(BOOL)selected;	// 0x32e127ed
@end
