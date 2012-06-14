/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "NSStoreMapNode.h"


__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {
@private
	id *_attributes;	// 24 = 0x18
	id _attributesAsEncoded;	// 28 = 0x1c
}
+ (void)initialize;	// 0x32d55b71
- (id)initWithCoder:(id)coder;	// 0x32d55bcd
- (id)initWithValues:(id *)values objectID:(id)anId;	// 0x32d55b8d
- (void)_doAttributeDecoding;	// 0x32d55c69
- (const id *)attributeValues;	// 0x32d560c9
- (void)dealloc;	// 0x32d55ff1
- (void)encodeWithCoder:(id)coder;	// 0x32d55e91
- (id)valueForKey:(id)key;	// 0x32d56101
@end

