/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface UIPopoverBackgroundView : UIView {
}
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x303ec475; S=0x303ec485; 
@property(assign, nonatomic) float arrowOffset;	// G=0x303ec3f5; S=0x303ec46d; 
+ (id)_shadowPathForRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x303ec4d1
+ (float)arrowBase;	// 0x303ec4a1
+ (float)arrowHeight;	// 0x303ec48d
+ (UIEdgeInsets)contentViewInsets;	// 0x303ec4b5
- (CGRect)_contentViewFrame;	// 0x303ec8c5
- (id)_shadowPath;	// 0x303ec619
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x303ec739
- (void)_updateShadow;	// 0x303ec68d
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x303ec791
// declared property getter: - (unsigned)arrowDirection;	// 0x303ec475
// declared property getter: - (float)arrowOffset;	// 0x303ec3f5
- (int)backgroundStyle;	// 0x303ecaed
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x303ec485
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x303ec46d
@end

