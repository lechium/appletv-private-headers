/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface DAResolveRecipientsRequest : NSObject {
	NSArray *_emailAddresses;	// 4 = 0x4
}
@property(readonly, retain) NSArray *emailAddresses;	// G=0x33b3bc91; converted property
- (id)initWithEmailAddresses:(id)emailAddresses;	// 0x33b3ba51
- (void)dealloc;	// 0x33b3bc45
- (id)description;	// 0x33b3bbdd
// converted property getter: - (id)emailAddresses;	// 0x33b3bc91
- (unsigned)hash;	// 0x33b3baa5
- (BOOL)isEqual:(id)equal;	// 0x33b3bb6d
@end
