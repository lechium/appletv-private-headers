/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UIAttributedStringView : UIView {
@private
	NSAttributedString *_string;	// 48 = 0x30
}
+ (Class)layerClass;	// 0x35a0dc3d
- (id)initWithFrame:(CGRect)frame;	// 0x35a0dc59
- (void)_updateContentsScale:(id)scale;	// 0x35a0de19
- (void)dealloc;	// 0x35a0dd51
- (void)didMoveToSuperview;	// 0x35a0dea9
- (void)setFrame:(CGRect)frame;	// 0x35a0ddcd
- (void)setString:(id)string;	// 0x35a0df25
- (void)setTextRotationAngle:(float)angle;	// 0x35a0df8d
@end

