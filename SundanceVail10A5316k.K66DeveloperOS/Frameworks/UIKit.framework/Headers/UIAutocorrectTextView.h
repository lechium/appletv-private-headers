/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView {
@private
	NSString *m_string;	// 84 = 0x54
	int m_type;	// 88 = 0x58
	int m_edgeType;	// 92 = 0x5c
	UIFont *m_textFont;	// 96 = 0x60
	BOOL m_animating;	// 100 = 0x64
	BOOL m_isLongString;	// 101 = 0x65
}
@property(assign, nonatomic) BOOL animating;	// G=0x302a5955; S=0x302132c9; @synthesize=m_animating
@property(assign, nonatomic) BOOL isLongString;	// G=0x302a5965; S=0x302a5975; @synthesize=m_isLongString
- (id)initWithFrame:(CGRect)frame string:(id)string type:(int)type edgeType:(int)type4;	// 0x30210431
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x302a5731
// declared property getter: - (BOOL)animating;	// 0x302a5955
- (void)dealloc;	// 0x30212769
- (void)drawRect:(CGRect)rect;	// 0x30211101
// declared property getter: - (BOOL)isLongString;	// 0x302a5965
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x302a572d
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x302a58a5
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x302a5919
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x302132c9
- (void)setEdgeType:(int)type;	// 0x302131d9
// declared property setter: - (void)setIsLongString:(BOOL)string;	// 0x302a5975
@end

