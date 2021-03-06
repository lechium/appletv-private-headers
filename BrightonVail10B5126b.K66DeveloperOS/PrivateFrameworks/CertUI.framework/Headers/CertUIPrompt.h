/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import <NSObject.h> // Unknown library
#import "CertUI-Structs.h"

@class NSString;

@interface CertUIPrompt : NSObject {
	SecTrust *_trust;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_service;	// 12 = 0xc
	NSString *_connectionDisplayName;	// 16 = 0x10
	id _responseBlock;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *connectionDisplayName;	// G=0x3368eb5d; S=0x3368f921; @synthesize=_connectionDisplayName
@property(retain, nonatomic) NSString *host;	// G=0x3368f8e1; S=0x3368f8f1; @synthesize=_host
@property(retain, nonatomic) NSString *service;	// G=0x3368f901; S=0x3368f911; @synthesize=_service
@property(assign) SecTrust *trust;	// G=0x3368eb4d; S=0x3368eb15; converted property
+ (id)promptQueue;	// 0x3368ebe1
+ (id)stringForResponse:(int)response;	// 0x3368e9fd
- (id)_copyPropertiesFromTrust:(SecTrust *)trust;	// 0x3368ee65
- (id)_digestFromTrust:(SecTrust *)trust;	// 0x3368f2e1
- (id)_expirationFromTrust:(SecTrust *)trust;	// 0x3368f239
- (void)_informConsumerOfResponse:(int)response;	// 0x3368f739
- (id)_messagingCenter;	// 0x3368f509
- (id)_newUserInfoForDisplayName:(id)displayName hostname:(id)hostname trust:(SecTrust *)trust;	// 0x3368f325
- (id)_propertyNamed:(id)named ofType:(id)type inProperties:(id)properties;	// 0x3368f081
- (id)_purposeFromTrustProperties:(id)trustProperties;	// 0x3368f1a9
- (int)_responseFromReplyDict:(id)replyDict;	// 0x3368f535
- (int)_sendRemoteMessage;	// 0x3368f5a5
- (id)_sendablePropertiesFromProperties:(id)properties;	// 0x3368ed5d
- (id)_sendablePropertiesFromTrust:(SecTrust *)trust;	// 0x3368eef1
- (id)_sendablePropertyFromProperty:(id)property;	// 0x3368ec31
- (id)_subtitleFromTrust:(SecTrust *)trust;	// 0x3368f04d
- (id)_titleFromTrust:(SecTrust *)trust;	// 0x3368f019
// declared property getter: - (id)connectionDisplayName;	// 0x3368eb5d
- (void)dealloc;	// 0x3368ea1d
- (id)description;	// 0x3368eaad
// declared property getter: - (id)host;	// 0x3368f8e1
// declared property getter: - (id)service;	// 0x3368f901
// declared property setter: - (void)setConnectionDisplayName:(id)name;	// 0x3368f921
// declared property setter: - (void)setHost:(id)host;	// 0x3368f8f1
// declared property setter: - (void)setService:(id)service;	// 0x3368f911
// converted property setter: - (void)setTrust:(SecTrust *)trust;	// 0x3368eb15
- (int)showAndWaitForResponse;	// 0x3368f765
- (void)showPromptWithResponseBlock:(id)responseBlock;	// 0x3368f671
// converted property getter: - (SecTrust *)trust;	// 0x3368eb4d
@end

