/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSString, NSDictionary;

@interface FTProfileMessage : FTMessage {
	NSString *_profileID;	// 24 = 0x18
	NSString *_authToken;	// 28 = 0x1c
	NSDictionary *_responseAlert;	// 32 = 0x20
}
@property(copy) NSString *authToken;	// G=0x3473c1e5; S=0x3473c22d; @synthesize=_authToken
@property(copy) NSString *profileID;	// G=0x3473c1fd; S=0x3473c255; @synthesize=_profileID
@property(copy) NSDictionary *responseAlertInfo;	// G=0x3473c215; S=0x3473c27d; @synthesize=_responseAlert
- (id)additionalMessageHeaders;	// 0x3473c02d
// declared property getter: - (id)authToken;	// 0x3473c1e5
- (void)dealloc;	// 0x3473bf39
- (void)handleResponseDictionary:(id)dictionary;	// 0x3473c189
- (BOOL)hasRequiredKeys;	// 0x3473bfa5
// declared property getter: - (id)profileID;	// 0x3473c1fd
// declared property getter: - (id)responseAlertInfo;	// 0x3473c215
// declared property setter: - (void)setAuthToken:(id)token;	// 0x3473c22d
// declared property setter: - (void)setProfileID:(id)anId;	// 0x3473c255
// declared property setter: - (void)setResponseAlertInfo:(id)info;	// 0x3473c27d
@end

