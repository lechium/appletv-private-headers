/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSJoin : NSObject <NSCoding, NSCopying> {
@private
	NSString *_sourceAttributeName;	// 4 = 0x4
	NSString *_destinationAttributeName;	// 8 = 0x8
}
@property(readonly, retain) NSString *destinationAttributeName;	// G=0x32b3cc39; converted property
@property(readonly, retain) NSString *sourceAttributeName;	// G=0x32b3cc29; converted property
+ (id)joinWithSourceAttributeName:(id)sourceAttributeName destinationAttributeName:(id)name;	// 0x32b3ccc9
- (id)initWithCoder:(id)coder;	// 0x32b3cd89
- (id)initWithSourceAttributeName:(id)sourceAttributeName destinationAttributeName:(id)name;	// 0x32b3cc49
- (id)copyWithZone:(NSZone *)zone;	// 0x32b3cd09
- (void)dealloc;	// 0x32b3ced1
// converted property getter: - (id)destinationAttributeName;	// 0x32b3cc39
- (void)encodeWithCoder:(id)coder;	// 0x32b3cd19
- (unsigned)hash;	// 0x32b3cde5
- (BOOL)isEqual:(id)equal;	// 0x32b3ce29
// converted property getter: - (id)sourceAttributeName;	// 0x32b3cc29
@end

