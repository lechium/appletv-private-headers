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
@private
	UIImageView *_leftImageView;	// 48 = 0x30
	UIImageView *_middleImageView;	// 52 = 0x34
	UIImageView *_rightImageView;	// 56 = 0x38
	NSArray *_activeImages;	// 60 = 0x3c
	NSArray *_inactiveImages;	// 64 = 0x40
	unsigned _isActive : 1;	// 68 = 0x44
	unsigned _centerHandleEnabled : 1;	// 68 = 0x44
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x32f18551; S=0x32f18415; 
- (id)initWithFrame:(CGRect)frame;	// 0x32f17a7d
- (float)_bounceValueForFraction:(float)fraction;	// 0x32f18a4d
- (void)bounce;	// 0x32f18565
- (void)dealloc;	// 0x32f17e8d
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x32f18061
// declared property getter: - (BOOL)isEditing;	// 0x32f18551
- (CGRect)leftHandleBounds;	// 0x32f1826d
- (CGRect)leftHandleFrame;	// 0x32f18289
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x32f17fd9
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x32f17f15
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x32f17f5d
- (CGRect)rightHandleBounds;	// 0x32f1830d
- (CGRect)rightHandleFrame;	// 0x32f18369
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x32f17eed
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x32f18415
@end
