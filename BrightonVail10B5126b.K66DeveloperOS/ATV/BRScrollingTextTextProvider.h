/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString, BRTypesetter;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRScrollingTextTextProvider : XXUnknownSuperclass <BRProvider> {
	BRTypesetter *_typesetter;	// 4 = 0x4
	NSAttributedString *_string;	// 8 = 0x8
	id<BRControlFactory> _factory;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
}
@property(retain) id attributedString;	// G=0x306c81; S=0x306c29; converted property
+ (id)providerWithAttributedString:(id)attributedString;	// 0x306ae9
- (id)init;	// 0x306b49
- (void)_updateTypesetter;	// 0x306d3d
// converted property getter: - (id)attributedString;	// 0x306c81
- (id)controlFactory;	// 0x306ce9
- (id)dataAtIndex:(long)index;	// 0x306d19
- (long)dataCount;	// 0x306cf9
- (void)dealloc;	// 0x306bb1
- (id)hashForDataAtIndex:(long)index;	// 0x306d39
// converted property setter: - (void)setAttributedString:(id)string;	// 0x306c29
- (void)setTextBoxSize:(CGSize)size;	// 0x306c91
@end

