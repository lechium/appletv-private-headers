/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertButton.h"

@class UIImageView, UIImage;

__attribute__((visibility("hidden")))
@interface UIAlertMediaButton : UIAlertButton {
@private
	UIImageView *_checkmarkView;	// 144 = 0x90
	UIImage *_tableIcon;	// 148 = 0x94
	UIImage *_highlightedTableIcon;	// 152 = 0x98
}
@property(readonly, assign, nonatomic) UIImageView *checkmarkView;	// G=0x33cc81d9; 
@property(retain, nonatomic) UIImage *highlightedTableIcon;	// G=0x33cc8645; S=0x33cc8655; @synthesize=_highlightedTableIcon
@property(retain, nonatomic) UIImage *tableIcon;	// G=0x33cc8611; S=0x33cc8621; @synthesize=_tableIcon
// declared property getter: - (id)checkmarkView;	// 0x33cc81d9
- (void)dealloc;	// 0x33cc859d
// declared property getter: - (id)highlightedTableIcon;	// 0x33cc8645
- (void)layoutSubviews;	// 0x33cc82b1
// declared property setter: - (void)setHighlightedTableIcon:(id)icon;	// 0x33cc8655
// declared property setter: - (void)setTableIcon:(id)icon;	// 0x33cc8621
// declared property getter: - (id)tableIcon;	// 0x33cc8611
@end

