/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class UITextRenderingAttributes, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel {
	float _boundsWidth;	// 144 = 0x90
	UITextRenderingAttributes *_attributes;	// 148 = 0x94
	_UITabBarItemAppearanceStorage *_appearanceStorage;	// 152 = 0x98
	BOOL _isSelected;	// 156 = 0x9c
}
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x3049c6ed
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x302d8cf1
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x302d8c61
- (id)_attributes;	// 0x302ab001
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x302d8ce1
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x3049c6f1
- (void)dealloc;	// 0x3049c685
- (void)setSelected:(BOOL)selected;	// 0x302ac609
- (void)sizeToFitBounds:(CGRect)fitBounds;	// 0x302afef9
- (void)updateTextColorsForSelection;	// 0x302aae1d
@end

