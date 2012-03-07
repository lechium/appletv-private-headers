/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderBootstrapParser : BRBaseParserDelegate {
@private
	NSMutableDictionary *_urlBag;	// 12 = 0xc
}
@property(readonly, retain) NSMutableDictionary *urlBag;	// G=0x339e84b5; converted property
- (id)init;	// 0x339e8355
- (void)dealloc;	// 0x339e8469
- (void)populateURLForKey:(id)key attributes:(id)attributes;	// 0x339e84c5
- (void)startAddChoiceTeamWithAttributes:(id)attributes;	// 0x339e85bd
- (void)startGetChoiceTeamWithAttributes:(id)attributes;	// 0x339e859d
- (void)startStreamWithAttributes:(id)attributes;	// 0x339e857d
- (void)startUserAuthenticationWithAttributes:(id)attributes;	// 0x339e851d
- (void)startUserAuthorizationWithAttributes:(id)attributes;	// 0x339e853d
- (void)startUserLocationWithAttributes:(id)attributes;	// 0x339e855d
// converted property getter: - (id)urlBag;	// 0x339e84b5
@end
