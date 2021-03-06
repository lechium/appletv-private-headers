/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextPlane : BRControl {
	NSAttributedString *_string;	// 80 = 0x50
	float _pursuitGap;	// 84 = 0x54
	CGSize _cachedNaturalTextSize;	// 88 = 0x58
}
@property(retain) id attributedString;	// G=0x2bea01; S=0x2be971; converted property
+ (Class)layerClass;	// 0x2be909
// converted property getter: - (id)attributedString;	// 0x2bea01
- (void)dealloc;	// 0x2be925
- (void)drawRect:(CGRect)rect;	// 0x2beb25
- (CGSize)naturalTextSize;	// 0x2bea79
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2be971
- (void)setPursuitGap:(float)gap;	// 0x2bea11
- (void)setTileSize:(CGSize)size;	// 0x2bea49
@end

