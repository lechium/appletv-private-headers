/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView {
	UILabel *_titleLabel;	// 84 = 0x54
	float _titleLabelMaxX;	// 88 = 0x58
	int _alignment;	// 92 = 0x5c
	struct {
		unsigned hasAutomaticAnimationItems : 1;
	} _datePickerContentViewFlags;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL isAmPm;	// G=0x330117cd; S=0x330117e1; 
@property(assign, nonatomic) int titleAlignment;	// G=0x33011841; S=0x32e3f60d; @synthesize=_alignment
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x32e3f585; @synthesize=_titleLabel
@property(assign, nonatomic) float titleLabelMaxX;	// G=0x33011831; S=0x33011811; @synthesize=_titleLabelMaxX
- (id)initWithFrame:(CGRect)frame;	// 0x32e3f459
- (void)dealloc;	// 0x32e43485
// declared property getter: - (BOOL)isAmPm;	// 0x330117cd
- (void)layoutSubviews;	// 0x32e40af9
// declared property setter: - (void)setIsAmPm:(BOOL)pm;	// 0x330117e1
// declared property setter: - (void)setTitleAlignment:(int)alignment;	// 0x32e3f60d
// declared property setter: - (void)setTitleLabelMaxX:(float)x;	// 0x33011811
// declared property getter: - (int)titleAlignment;	// 0x33011841
// declared property getter: - (id)titleLabel;	// 0x32e3f585
// declared property getter: - (float)titleLabelMaxX;	// 0x33011831
@end
