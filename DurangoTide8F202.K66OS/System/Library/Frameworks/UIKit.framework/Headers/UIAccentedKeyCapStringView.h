/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIAccentedKeyCapStringView : UIView {
@private
	BOOL m_selectedMode;	// 41 = 0x29
	int m_expansion;	// 44 = 0x2c
	int m_orientation;	// 48 = 0x30
	float m_stringWidth;	// 52 = 0x34
	NSArray *m_caps;	// 56 = 0x38
}
- (void)dealloc;	// 0x307565e9
- (void)drawRect:(CGRect)rect;	// 0x30756a55
- (void)setCaps:(id)caps;	// 0x3075650d
- (void)setExpansion:(int)expansion;	// 0x30756041
- (void)setOrientation:(int)orientation;	// 0x30756051
- (void)setSelectedMode:(BOOL)mode;	// 0x30756031
- (void)setStringWidth:(float)width;	// 0x30756061
@end

