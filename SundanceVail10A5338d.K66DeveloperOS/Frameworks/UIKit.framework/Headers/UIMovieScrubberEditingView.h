/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView {
	UIImageView *_leftImageView;	// 84 = 0x54
	UIImageView *_middleImageView;	// 88 = 0x58
	UIImageView *_rightImageView;	// 92 = 0x5c
	NSArray *_activeImages;	// 96 = 0x60
	NSArray *_inactiveImages;	// 100 = 0x64
	unsigned _isActive : 1;	// 104 = 0x68
	unsigned _centerHandleEnabled : 1;	// 104 = 0x68
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x30e914c9; S=0x30e913ed; 
- (id)initWithFrame:(CGRect)frame;	// 0x30e90ab9
- (float)_bounceValueForFraction:(float)fraction;	// 0x30e91929
- (void)bounce;	// 0x30e914e1
- (void)dealloc;	// 0x30e90e11
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x30e90fe5
// declared property getter: - (BOOL)isEditing;	// 0x30e914c9
- (CGRect)leftHandleBounds;	// 0x30e91215
- (CGRect)leftHandleFrame;	// 0x30e91231
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x30e90f5d
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x30e90e99
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x30e90ee1
- (CGRect)rightHandleBounds;	// 0x30e912c9
- (CGRect)rightHandleFrame;	// 0x30e91325
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x30e90e75
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x30e913ed
@end

