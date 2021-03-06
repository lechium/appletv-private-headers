/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKBCacheableView.h"

@class UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyView : UIView <UIKBCacheableView> {
	UIKBTree *m_keyboard;	// 84 = 0x54
	UIKBTree *m_key;	// 88 = 0x58
	int m_state;	// 92 = 0x5c
	CGPoint m_drawOrigin;	// 96 = 0x60
	int m_clipCorners;	// 104 = 0x68
	CFBooleanRef m_allowsCaching;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x309c05a9; 
@property(readonly, assign, nonatomic) float cachedWidth;	// G=0x30bc7719; 
@property(assign, nonatomic) int clipCorners;	// G=0x309c0669; S=0x309b3541; @synthesize=m_clipCorners
@property(assign, nonatomic) CGPoint drawOrigin;	// G=0x30bc775d; S=0x309b356d; @synthesize=m_drawOrigin
@property(readonly, assign, nonatomic) UIKBTree *key;	// G=0x309d65ed; @synthesize=m_key
@property(readonly, assign, nonatomic) UIKBTree *keyboard;	// G=0x30bc774d; @synthesize=m_keyboard
@property(readonly, assign) BOOL shouldCache;	// G=0x309c01a9; 
@property(readonly, assign, nonatomic) int state;	// G=0x309ddbb5; @synthesize=m_state
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x309b337d
// declared property getter: - (BOOL)cacheDeferable;	// 0x309c05a9
- (id)cacheKey;	// 0x309c0289
// declared property getter: - (float)cachedWidth;	// 0x30bc7719
// declared property getter: - (int)clipCorners;	// 0x309c0669
- (void)dealloc;	// 0x309de9e9
- (void)displayLayer:(id)layer;	// 0x309c0119
// declared property getter: - (CGPoint)drawOrigin;	// 0x30bc775d
- (void)drawRect:(CGRect)rect;	// 0x309c05ad
// declared property getter: - (id)key;	// 0x309d65ed
// declared property getter: - (id)keyboard;	// 0x30bc774d
// declared property setter: - (void)setClipCorners:(int)corners;	// 0x309b3541
// declared property setter: - (void)setDrawOrigin:(CGPoint)origin;	// 0x309b356d
// declared property getter: - (BOOL)shouldCache;	// 0x309c01a9
// declared property getter: - (int)state;	// 0x309ddbb5
- (int)textEffectsVisibilityLevel;	// 0x309d7495
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x309b3569
@end

