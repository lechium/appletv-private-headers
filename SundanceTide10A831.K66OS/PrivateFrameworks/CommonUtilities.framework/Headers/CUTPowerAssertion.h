/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface CUTPowerAssertion : NSObject {
	unsigned _assertion;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSArray *_stack;	// 12 = 0xc
}
- (id)initWithIdentifier:(id)identifier;	// 0x365845f9
- (id)initWithIdentifier:(id)identifier timeout:(double)timeout;	// 0x365843a1
- (void)dealloc;	// 0x36584629
- (id)description;	// 0x36584781
@end

