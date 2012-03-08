/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBCacheableView.h"
#import "UIView.h"

@class UIKeyboardLayoutStar, NSTimer, NSMutableDictionary, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView : UIView <UIKBCacheableView> {
@private
	UIKBTree *_keyboard;	// 48 = 0x30
	UIKBTree *_keyplane;	// 52 = 0x34
	UIKeyboardLayoutStar *_layout;	// 56 = 0x38
	NSMutableDictionary *_states;	// 60 = 0x3c
	NSMutableDictionary *_subviewIndex;	// 64 = 0x40
	NSMutableDictionary *_activeViewIndex;	// 68 = 0x44
	NSMutableDictionary *_renderedKeyViews;	// 72 = 0x48
	NSMutableDictionary *_delayedDeactivationKeys;	// 76 = 0x4c
	NSTimer *_activatedTimer;	// 80 = 0x50
	BOOL _performingDeactivation;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x33271dd9; 
@property(retain, nonatomic) UIKBTree *keyplane;	// G=0x33272269; S=0x33272279; @synthesize=_keyplane
@property(assign, nonatomic) UIKeyboardLayoutStar *layout;	// G=0x3327229d; S=0x32faed81; @synthesize=_layout
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard keyplane:(id)keyplane;	// 0x32faebc9
- (void)activateKeys;	// 0x33272195
- (void)addKeyToDelayedDeactivationSet:(id)delayedDeactivationSet;	// 0x32fd2e99
// declared property getter: - (BOOL)cacheDeferable;	// 0x33271dd9
- (id)cacheIdentifierForKey:(id)key;	// 0x33271fe1
- (id)cacheIdentifierForKey:(id)key withState:(int)state;	// 0x32fafac1
- (id)cacheKey;	// 0x32fb467d
- (void)cancelDelayedDeactivation;	// 0x32fd6389
- (Class)classForKey:(id)key;	// 0x32fb0849
- (id)containingViewForKey:(id)key withState:(int)state;	// 0x32faf6b5
- (void)deactivateKey:(id)key;	// 0x32faf5d9
- (void)deactivateKeys;	// 0x32fd6e85
- (void)dealloc;	// 0x32fd9675
- (void)displayLayer:(id)layer;	// 0x32fb43c5
- (void)drawRect:(CGRect)rect;	// 0x33271ddd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32fc87dd
- (BOOL)keyIsMaskable:(id)maskable;	// 0x332720dd
// declared property getter: - (id)keyplane;	// 0x33272269
// declared property getter: - (id)layout;	// 0x3327229d
- (void)performDelayedDeactivation:(id)deactivation;	// 0x32fd6225
- (void)purgeKeyViews;	// 0x32fd7841
- (void)purgeSubviews;	// 0x32fd7a95
- (void)removeFromSuperview;	// 0x32fd7a55
- (void)removeKeyFromDelayedDeactivationSet:(id)delayedDeactivationSet;	// 0x32faf4f9
- (void)scheduleDelayedDeactivation;	// 0x32fd3005
// declared property setter: - (void)setKeyplane:(id)keyplane;	// 0x33272279
// declared property setter: - (void)setLayout:(id)layout;	// 0x32faed81
- (void)setState:(int)state forKey:(id)key;	// 0x32faf119
- (int)stateForKey:(id)key;	// 0x32fb1e71
- (BOOL)validForKeyplane:(id)keyplane withVisualStyle:(int)visualStyle;	// 0x32fd85fd
- (id)viewForKey:(id)key;	// 0x3301be75
- (id)viewForKey:(id)key state:(int)state;	// 0x33272159
@end

