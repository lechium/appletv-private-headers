/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UITouch, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardTouchInfo : NSObject {
	UITouch *_touch;	// 4 = 0x4
	UIKBTree *_key;	// 8 = 0x8
	UIKBTree *_keyplane;	// 12 = 0xc
	UIKBTree *_slidOffKey;	// 16 = 0x10
	CGPoint _initialPoint;	// 20 = 0x14
	int _stage;	// 28 = 0x1c
}
@property(assign, nonatomic) CGPoint initialPoint;	// G=0x304cf9b9; S=0x3033c091; @synthesize=_initialPoint
@property(retain, nonatomic) UIKBTree *key;	// G=0x3033f4e1; S=0x3033cda9; @synthesize=_key
@property(retain, nonatomic) UIKBTree *keyplane;	// G=0x3033f5e9; S=0x3033c081; @synthesize=_keyplane
@property(retain, nonatomic) UIKBTree *slidOffKey;	// G=0x304cf9a9; S=0x30343361; @synthesize=_slidOffKey
@property(assign, nonatomic) int stage;	// G=0x3033f6ad; S=0x3033c06d; @synthesize=_stage
@property(retain, nonatomic) UITouch *touch;	// G=0x3033c4f1; S=0x3033c059; @synthesize=_touch
- (void)dealloc;	// 0x303432e1
// declared property getter: - (CGPoint)initialPoint;	// 0x304cf9b9
// declared property getter: - (id)key;	// 0x3033f4e1
// declared property getter: - (id)keyplane;	// 0x3033f5e9
// declared property setter: - (void)setInitialPoint:(CGPoint)point;	// 0x3033c091
// declared property setter: - (void)setKey:(id)key;	// 0x3033cda9
// declared property setter: - (void)setKeyplane:(id)keyplane;	// 0x3033c081
// declared property setter: - (void)setSlidOffKey:(id)key;	// 0x30343361
// declared property setter: - (void)setStage:(int)stage;	// 0x3033c06d
// declared property setter: - (void)setTouch:(id)touch;	// 0x3033c059
// declared property getter: - (id)slidOffKey;	// 0x304cf9a9
// declared property getter: - (int)stage;	// 0x3033f6ad
// declared property getter: - (id)touch;	// 0x3033c4f1
@end
