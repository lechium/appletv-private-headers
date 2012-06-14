/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBCacheableView.h"
#import "UIView.h"

@class UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyView : UIView <UIKBCacheableView> {
@private
	UIKBTree *m_keyboard;	// 48 = 0x30
	UIKBTree *m_key;	// 52 = 0x34
	int m_state;	// 56 = 0x38
	CGPoint m_drawOrigin;	// 60 = 0x3c
	CFBooleanRef m_allowsCaching;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x3560b059; 
@property(assign, nonatomic) CGPoint drawOrigin;	// G=0x3560b06d; S=0x353fc8f1; @synthesize=m_drawOrigin
@property(readonly, assign, nonatomic) UIKBTree *key;	// G=0x35414865; @synthesize=m_key
@property(readonly, assign, nonatomic) UIKBTree *keyboard;	// G=0x3560b05d; @synthesize=m_keyboard
@property(readonly, assign, nonatomic) int state;	// G=0x35422fbd; @synthesize=m_state
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x353fc72d
// declared property getter: - (BOOL)cacheDeferable;	// 0x3560b059
- (id)cacheKey;	// 0x35400bc1
- (void)dealloc;	// 0x35423871
- (void)displayLayer:(id)layer;	// 0x35400a5d
// declared property getter: - (CGPoint)drawOrigin;	// 0x3560b06d
- (void)drawRect:(CGRect)rect;	// 0x35416d11
// declared property getter: - (id)key;	// 0x35414865
// declared property getter: - (id)keyboard;	// 0x3560b05d
// declared property setter: - (void)setDrawOrigin:(CGPoint)origin;	// 0x353fc8f1
- (BOOL)shouldCache;	// 0x35400aed
// declared property getter: - (int)state;	// 0x35422fbd
- (int)textEffectsVisibilityLevel;	// 0x35416c61
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x353fc8ed
@end
