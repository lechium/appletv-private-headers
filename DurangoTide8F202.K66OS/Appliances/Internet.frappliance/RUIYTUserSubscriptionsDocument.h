/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSArray, NSString;

@interface RUIYTUserSubscriptionsDocument : RUIYTDocument {
	NSString *_accessToken;	// 52 = 0x34
	NSArray *_subscriptions;	// 56 = 0x38
}
@property(retain) NSString *accessToken;	// G=0x20c91; S=0x20ca9; @synthesize=_accessToken
@property(readonly, assign) NSArray *subscriptions;	// G=0x208b9; @synthesize=_subscriptions
- (id)URLRequest;	// 0x208c9
// declared property getter: - (id)accessToken;	// 0x20c91
- (void)dealloc;	// 0x209ed
- (void)documentLoaded;	// 0x20a49
// declared property setter: - (void)setAccessToken:(id)token;	// 0x20ca9
// declared property getter: - (id)subscriptions;	// 0x208b9
@end

