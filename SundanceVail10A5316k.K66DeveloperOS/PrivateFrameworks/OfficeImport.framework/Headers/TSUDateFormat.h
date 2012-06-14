/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUDataFormat.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUDateFormat : NSObject <NSCopying, TSUDataFormat> {
@private
	NSString *mFormat;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(retain) id formatName;	// G=0x312d5ef1; S=0x312d5f01; converted property
+ (id)formatWithFormat:(id)format name:(id)name;	// 0x312d5c29
- (id)initWithFormat:(id)format name:(id)name;	// 0x312d5c69
- (id)copyWithZone:(NSZone *)zone;	// 0x312d5ce1
- (void)dealloc;	// 0x312d5d39
- (id)description;	// 0x312d5e8d
- (id)format;	// 0x312d5ee1
// converted property getter: - (id)formatName;	// 0x312d5ef1
- (unsigned)hash;	// 0x312d5e4d
- (BOOL)isEqual:(id)equal;	// 0x312d5db1
// converted property setter: - (void)setFormatName:(id)name;	// 0x312d5f01
@end

