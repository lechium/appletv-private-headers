/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextField.h"

@class UIThreePartImageView;

__attribute__((visibility("hidden")))
@interface UIAlertSheetTextField : UITextField {
@private
	UIThreePartImageView *_sheetBackgroundView;	// 344 = 0x158
}
@property(retain) id backgroundView;	// G=0x303c4031; S=0x303c3fed; converted property
// converted property getter: - (id)backgroundView;	// 0x303c4031
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0x303c4041
- (void)dealloc;	// 0x303c3fa1
// converted property setter: - (void)setBackgroundView:(id)view;	// 0x303c3fed
@end

