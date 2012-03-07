/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {
@private
	BOOL _useDefaultModalPresentationStyle;	// 20 = 0x14
	BOOL _useDefaultModalTransitionStyle;	// 21 = 0x15
	int _modalPresentationStyle;	// 24 = 0x18
	int _modalTransitionStyle;	// 28 = 0x1c
}
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x303a4461; S=0x303a4471; @synthesize=_modalPresentationStyle
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x303a4481; S=0x303a4491; @synthesize=_modalTransitionStyle
@property(assign, nonatomic) BOOL useDefaultModalPresentationStyle;	// G=0x303a4421; S=0x303a4431; @synthesize=_useDefaultModalPresentationStyle
@property(assign, nonatomic) BOOL useDefaultModalTransitionStyle;	// G=0x303a4441; S=0x303a4451; @synthesize=_useDefaultModalTransitionStyle
- (id)initWithCoder:(id)coder;	// 0x303a41cd
- (id)defaultSegueClassName;	// 0x303a4361
- (void)encodeWithCoder:(id)coder;	// 0x303a42b9
// declared property getter: - (int)modalPresentationStyle;	// 0x303a4461
// declared property getter: - (int)modalTransitionStyle;	// 0x303a4481
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x303a436d
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x303a4471
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x303a4491
// declared property setter: - (void)setUseDefaultModalPresentationStyle:(BOOL)style;	// 0x303a4431
// declared property setter: - (void)setUseDefaultModalTransitionStyle:(BOOL)style;	// 0x303a4451
// declared property getter: - (BOOL)useDefaultModalPresentationStyle;	// 0x303a4421
// declared property getter: - (BOOL)useDefaultModalTransitionStyle;	// 0x303a4441
@end
