/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSPredicate.h> // Unknown library

@class NSString;

@interface EKCalendarItemsWithExternalIdentifierPredicate : NSPredicate {
	NSString *_externalIdentifier;	// 8 = 0x8
}
- (id)initWithCoder:(id)coder;	// 0x30e3d379
- (id)initWithExternalIdentifier:(id)externalIdentifier;	// 0x30e3d2c9
- (id)copyWithZone:(NSZone *)zone;	// 0x30e3d31d
- (void)dealloc;	// 0x30e3d32d
- (void)encodeWithCoder:(id)coder;	// 0x30e3d3e9
- (BOOL)evaluateWithObject:(id)object;	// 0x30e3d445
@end

