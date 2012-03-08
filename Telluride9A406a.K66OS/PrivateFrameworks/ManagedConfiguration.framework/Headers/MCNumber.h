/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSNumber;

@interface MCNumber : NSObject <NSCoding> {
@private
	NSNumber *_number;	// 4 = 0x4
}
+ (id)numberWithInt:(int)int;	// 0x36450f75
+ (id)numberWithUnsignedInt:(unsigned)unsignedInt;	// 0x36450f2d
- (id)initWithCoder:(id)coder;	// 0x3645112d
- (id)initWithInt:(int)int;	// 0x364511ed
- (id)initWithUnsignedInt:(unsigned)unsignedInt;	// 0x36451261
- (void)dealloc;	// 0x364511a1
- (id)descriptionWithLocale:(id)locale;	// 0x36450fbd
- (void)encodeWithCoder:(id)coder;	// 0x36450f09
@end

