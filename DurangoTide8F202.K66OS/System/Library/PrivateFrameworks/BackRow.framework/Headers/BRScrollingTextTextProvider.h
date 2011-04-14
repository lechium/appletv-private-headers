/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSAttributedString, BRTypesetter;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRScrollingTextTextProvider : NSObject <BRProvider> {
@private
	BRTypesetter *_typesetter;	// 4 = 0x4
	NSAttributedString *_string;	// 8 = 0x8
	id<BRControlFactory> _factory;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
}
@property(retain) id attributedString;	// G=0x32907c75; S=0x32907dc9; converted property
+ (id)providerWithAttributedString:(id)attributedString;	// 0x32907ee1
- (id)init;	// 0x32907e85
- (void)_updateTypesetter;	// 0x32907c99
// converted property getter: - (id)attributedString;	// 0x32907c75
- (id)controlFactory;	// 0x32907c85
- (id)dataAtIndex:(long)index;	// 0x32907d3d
- (long)dataCount;	// 0x32907d5d
- (void)dealloc;	// 0x32907e19
- (id)hashForDataAtIndex:(long)index;	// 0x32907c95
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32907dc9
- (void)setTextBoxSize:(CGSize)size;	// 0x32907d7d
@end

