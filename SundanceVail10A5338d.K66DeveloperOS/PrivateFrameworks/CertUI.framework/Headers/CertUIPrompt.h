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
@property(copy, nonatomic) NSString *connectionDisplayName;	// G=0x3323cb5d; S=0x3323d921; @synthesize=_connectionDisplayName
@property(retain, nonatomic) NSString *host;	// G=0x3323d8e1; S=0x3323d8f1; @synthesize=_host
@property(retain, nonatomic) NSString *service;	// G=0x3323d901; S=0x3323d911; @synthesize=_service
@property(assign) SecTrust *trust;	// G=0x3323cb4d; S=0x3323cb15; converted property
+ (id)promptQueue;	// 0x3323cbe1
+ (id)stringForResponse:(int)response;	// 0x3323c9fd
- (id)_copyPropertiesFromTrust:(SecTrust *)trust;	// 0x3323ce65
- (id)_digestFromTrust:(SecTrust *)trust;	// 0x3323d2e1
- (id)_expirationFromTrust:(SecTrust *)trust;	// 0x3323d239
- (void)_informConsumerOfResponse:(int)response;	// 0x3323d739
- (id)_messagingCenter;	// 0x3323d509
- (id)_newUserInfoForDisplayName:(id)displayName hostname:(id)hostname trust:(SecTrust *)trust;	// 0x3323d325
- (id)_propertyNamed:(id)named ofType:(id)type inProperties:(id)properties;	// 0x3323d081
- (id)_purposeFromTrustProperties:(id)trustProperties;	// 0x3323d1a9
- (int)_responseFromReplyDict:(id)replyDict;	// 0x3323d535
- (int)_sendRemoteMessage;	// 0x3323d5a5
- (id)_sendablePropertiesFromProperties:(id)properties;	// 0x3323cd5d
- (id)_sendablePropertiesFromTrust:(SecTrust *)trust;	// 0x3323cef1
- (id)_sendablePropertyFromProperty:(id)property;	// 0x3323cc31
- (id)_subtitleFromTrust:(SecTrust *)trust;	// 0x3323d04d
- (id)_titleFromTrust:(SecTrust *)trust;	// 0x3323d019
// declared property getter: - (id)connectionDisplayName;	// 0x3323cb5d
- (void)dealloc;	// 0x3323ca1d
- (id)description;	// 0x3323caad
// declared property getter: - (id)host;	// 0x3323d8e1
// declared property getter: - (id)service;	// 0x3323d901
// declared property setter: - (void)setConnectionDisplayName:(id)name;	// 0x3323d921
// declared property setter: - (void)setHost:(id)host;	// 0x3323d8f1
// declared property setter: - (void)setService:(id)service;	// 0x3323d911
// converted property setter: - (void)setTrust:(SecTrust *)trust;	// 0x3323cb15
- (int)showAndWaitForResponse;	// 0x3323d765
- (void)showPromptWithResponseBlock:(id)responseBlock;	// 0x3323d671
// converted property getter: - (SecTrust *)trust;	// 0x3323cb4d
@end
