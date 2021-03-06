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
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x355ac1a9; S=0x355ac06d; 
- (id)initWithFrame:(CGRect)frame;	// 0x355ab6d5
- (float)_bounceValueForFraction:(float)fraction;	// 0x355ac6a5
- (void)bounce;	// 0x355ac1bd
- (void)dealloc;	// 0x355abae5
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x355abcb9
// declared property getter: - (BOOL)isEditing;	// 0x355ac1a9
- (CGRect)leftHandleBounds;	// 0x355abec5
- (CGRect)leftHandleFrame;	// 0x355abee1
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x355abc31
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x355abb6d
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x355abbb5
- (CGRect)rightHandleBounds;	// 0x355abf65
- (CGRect)rightHandleFrame;	// 0x355abfc1
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x355abb45
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x355ac06d
@end

