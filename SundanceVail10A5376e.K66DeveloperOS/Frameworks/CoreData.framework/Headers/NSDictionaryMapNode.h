/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapNode.h"
#import "NSCoding.h"


@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {
	id *_attributes;	// 24 = 0x18
	id _attributesAsEncoded;	// 28 = 0x1c
}
+ (void)initialize;	// 0x35c1b8a5
- (id)initWithCoder:(id)coder;	// 0x35c1b901
- (id)initWithValues:(id *)values objectID:(id)anId;	// 0x35c1b8c1
- (void)_doAttributeDecoding;	// 0x35c1b99d
- (const id *)attributeValues;	// 0x35c1bdfd
- (void)dealloc;	// 0x35c1bd25
- (void)encodeWithCoder:(id)coder;	// 0x35c1bbc5
- (id)valueForKey:(id)key;	// 0x35c1be35
@end

