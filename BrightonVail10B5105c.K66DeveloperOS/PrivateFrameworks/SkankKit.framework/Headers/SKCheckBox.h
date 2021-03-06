/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKControl.h"
#import "SkankKit-Structs.h"

@class DPTextLayer;

@interface SKCheckBox : SKControl {
	BOOL _isChecked;	// 65 = 0x41
	DPTextLayer *_title;	// 68 = 0x44
}
@property(assign) BOOL isChecked;	// G=0x34f00a61; S=0x34f00a71; converted property
- (void)adjustTitleFrame;	// 0x34f00af1
- (void)drawInContext:(CGContextRef)context;	// 0x34f00c65
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x34f00da1
// converted property getter: - (BOOL)isChecked;	// 0x34f00a61
- (CGSize)preferredFrameSize;	// 0x34f00c11
- (void)setBounds:(CGRect)bounds;	// 0x34f00c1d
// converted property setter: - (void)setIsChecked:(BOOL)checked;	// 0x34f00a71
- (void)setTitle:(id)title;	// 0x34f00b6d
- (void)toggle;	// 0x34f00ab9
@end

