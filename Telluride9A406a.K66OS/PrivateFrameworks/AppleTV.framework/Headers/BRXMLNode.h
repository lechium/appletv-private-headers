/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRXMLNode.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRXMLNode : NSObject {
@private
	xmlNode *_privateXmlNode;	// 4 = 0x4
}
@property(retain) id associatedObject;	// G=0x3312c469; S=0x3312c3a9; converted property
@property(retain) id textContent;	// G=0x3312bcb9; S=0x3312be39; converted property
- (id)XMLString;	// 0x3312aa05
- (void)_insertChild:(id)child otherChild:(id)child2 insertFunction:(/*function-pointer*/ void *)function;	// 0x3312b0e9
- (void)appendChild:(id)child;	// 0x3312b019
// converted property getter: - (id)associatedObject;	// 0x3312c469
- (id)children;	// 0x3312ae69
- (id)copyWithZone:(NSZone *)zone;	// 0x3312a441
- (id)description;	// 0x3312a601
- (id)getAttribute:(id)attribute;	// 0x3312c075
- (void)insertChild:(id)child after:(id)after;	// 0x3312b2ed
- (void)insertChild:(id)child before:(id)before;	// 0x3312b2c1
- (BOOL)isEqual:(id)equal;	// 0x3312a7ed
- (id)name;	// 0x3312b399
- (id)nextSibling;	// 0x3312b56d
- (id)nextSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x3312b6d1
- (id)nodesForXPath:(id)xpath error:(id *)error;	// 0x3312ac15
- (id)objectValue;	// 0x3312beb9
- (id)parent;	// 0x3312b861
- (id)previousSibling;	// 0x3312b9c5
- (id)previousSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x3312bb29
- (void)removeAttribute:(id)attribute;	// 0x3312c319
- (void)removeFromParent;	// 0x3312b361
- (void)replaceChild:(id)child with:(id)with;	// 0x3312b319
// converted property setter: - (void)setAssociatedObject:(id)object;	// 0x3312c3a9
- (void)setAttribute:(id)attribute withValue:(id)value;	// 0x3312c235
// converted property setter: - (void)setTextContent:(id)content;	// 0x3312be39
- (id)stringValue;	// 0x3312bec9
// converted property getter: - (id)textContent;	// 0x3312bcb9
@end

@interface BRXMLNode (Private)
+ (void)load;	// 0x3312c681
+ (id)nodeWithXmlNode:(xmlNode *)xmlNode;	// 0x3312c6b9
- (id)init;	// 0x3312c8e1
- (id)initWithXmlNode:(xmlNode *)xmlNode;	// 0x3312c74d
- (void)clearNode;	// 0x3312ccb1
- (void)dealloc;	// 0x3312c925
- (void)lockNode:(id)node;	// 0x3312cc11
- (id)ownerDocument;	// 0x3312ca65
@end

