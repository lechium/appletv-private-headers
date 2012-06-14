/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UIKBCacheableView.h"

@class NSMutableDictionary, NSTimer, UIKeyboardLayoutStar, UIKBTree, UIKBKeyView;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView : UIView <UIKBCacheableView> {
@private
	UIKBTree *_keyboard;	// 84 = 0x54
	UIKBTree *_keyplane;	// 88 = 0x58
	UIKeyboardLayoutStar *_layout;	// 92 = 0x5c
	UIView *_splitRight;	// 96 = 0x60
	UIKBKeyView *_candidateGapView;	// 100 = 0x64
	NSMutableDictionary *_states;	// 104 = 0x68
	NSMutableDictionary *_subviewIndex;	// 108 = 0x6c
	NSMutableDictionary *_activeViewIndex;	// 112 = 0x70
	NSMutableDictionary *_renderedKeyViews;	// 116 = 0x74
	NSMutableDictionary *_delayedDeactivationKeys;	// 120 = 0x78
	NSTimer *_activatedTimer;	// 124 = 0x7c
	BOOL _performingDeactivation;	// 128 = 0x80
	BOOL _shouldDrawRect;	// 129 = 0x81
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x304352a5; 
@property(readonly, assign, nonatomic) float cachedWidth;	// G=0x304352a9; 
@property(retain, nonatomic) UIKBTree *keyplane;	// G=0x30435e7d; S=0x30435e8d; @synthesize=_keyplane
@property(assign, nonatomic) UIKeyboardLayoutStar *layout;	// G=0x30435e9d; S=0x301705ad; @synthesize=_layout
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard keyplane:(id)keyplane;	// 0x301702f5
- (BOOL)_shouldDrawLowResBackground;	// 0x3043538d
- (void)activateKeys;	// 0x30435d8d
- (void)addKeyToDelayedDeactivationSet:(id)delayedDeactivationSet;	// 0x30192d01
// declared property getter: - (BOOL)cacheDeferable;	// 0x304352a5
- (id)cacheIdentifierForKey:(id)key;	// 0x304357e5
- (id)cacheIdentifierForKey:(id)key withState:(int)state;	// 0x30171325
- (id)cacheKey;	// 0x30176081
// declared property getter: - (float)cachedWidth;	// 0x304352a9
- (void)cancelDelayedDeactivation;	// 0x301960b5
- (Class)classForKey:(id)key;	// 0x30172169
- (id)containingViewForKey:(id)key withState:(int)state;	// 0x30170f59
- (int)cornerMaskForKey:(id)key recursive:(BOOL)recursive;	// 0x304358e9
- (void)deactivateKey:(id)key;	// 0x30170ec5
- (void)deactivateKeys;	// 0x30196c2d
- (void)dealloc;	// 0x30198c61
- (void)displayLayer:(id)layer;	// 0x30175d95
- (void)drawRect:(CGRect)rect;	// 0x304353d9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x301884b1
// declared property getter: - (id)keyplane;	// 0x30435e7d
// declared property getter: - (id)layout;	// 0x30435e9d
- (void)performDelayedDeactivation:(id)deactivation;	// 0x30195f11
- (void)purgeKeyViews;	// 0x3019768d
- (void)purgeSubviews;	// 0x3019790d
- (void)removeFromSuperview;	// 0x301978c9
- (void)removeKeyFromDelayedDeactivationSet:(id)delayedDeactivationSet;	// 0x30170de1
- (void)scheduleDelayedDeactivation;	// 0x30192e69
// declared property setter: - (void)setKeyplane:(id)keyplane;	// 0x30435e8d
// declared property setter: - (void)setLayout:(id)layout;	// 0x301705ad
- (void)setState:(int)state forKey:(id)key;	// 0x30170955
- (int)stateForKey:(id)key;	// 0x301737d1
- (void)updateDecorationViewsIfNeeded;	// 0x30435c01
- (BOOL)validForKeyplane:(id)keyplane withVisualStyle:(int)visualStyle;	// 0x30198389
- (id)viewForKey:(id)key;	// 0x301d85dd
- (id)viewForKey:(id)key state:(int)state;	// 0x30435bc5
@end

