/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"

@class NSString;

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {
	unsigned long long _onFlags;	// 8 = 0x8
	unsigned long long _offFlags;	// 16 = 0x10
	NSString *_messageID;	// 24 = 0x18
}
@property(readonly, retain) NSString *messageID;	// G=0x339597ed; converted property
@property(readonly, assign) unsigned long long offFlags;	// G=0x339597d5; converted property
@property(readonly, assign) unsigned long long onFlags;	// G=0x339597bd; converted property
- (id)initRequestWithSetFlags:(unsigned long long)setFlags unsetFlags:(unsigned long long)flags message:(id)message;	// 0x339594b9
- (void)dealloc;	// 0x33959771
- (id)description;	// 0x339596d1
- (unsigned)hash;	// 0x33959551
- (BOOL)isEqual:(id)equal;	// 0x339595fd
// converted property getter: - (id)messageID;	// 0x339597ed
// converted property getter: - (unsigned long long)offFlags;	// 0x339597d5
// converted property getter: - (unsigned long long)onFlags;	// 0x339597bd
@end

