/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTF_OIXMLNode.h"


__attribute__((visibility("hidden")))
@interface RTF_OIXMLElement : RTF_OIXMLNode {
	id _attributes;	// 16 = 0x10
	id _children;	// 20 = 0x14
	BOOL _hasMultipleAttributes;	// 24 = 0x18
	BOOL _hasMultipleChildren;	// 25 = 0x19
}
@property(retain) id objectValue;	// G=0x32bc2dd1; S=0x32bc2d0d; converted property
+ (void)_initEmptyHTMLNames;	// 0x32bc297d
+ (BOOL)isEmptyHTMLElement:(id)element;	// 0x32bc2a61
- (id)initWithName:(id)name stringValue:(id)value;	// 0x32bc27c9
- (void)_appendXMLStringToString:(CFStringRef)string;	// 0x32bc2fb1
- (void)addAttribute:(id)attribute;	// 0x32bc2ab1
- (void)addChild:(id)child;	// 0x32bc2b79
- (int)attributeCount;	// 0x32bc2f75
- (int)childrenCount;	// 0x32bc2f39
- (id)closingTagString;	// 0x32bc339d
- (id)contentString;	// 0x32bc32d9
- (id)copyWithZone:(NSZone *)zone;	// 0x32bc288d
- (void)dealloc;	// 0x32bc2829
- (void)insertChild:(id)child atIndex:(unsigned)index;	// 0x32bc2c41
// converted property getter: - (id)objectValue;	// 0x32bc2dd1
- (id)openingTagString;	// 0x32bc31ad
// converted property setter: - (void)setObjectValue:(id)value;	// 0x32bc2d0d
- (id)stringValue;	// 0x32bc2de1
@end
