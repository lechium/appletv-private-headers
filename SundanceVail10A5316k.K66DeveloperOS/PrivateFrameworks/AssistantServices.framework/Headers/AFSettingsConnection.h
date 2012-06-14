/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class DKConnection;

@interface AFSettingsConnection : NSObject {
@private
	DKConnection *_connection;	// 4 = 0x4
}
- (void).cxx_destruct;	// 0x345b30e5
- (void)_clearConnection;	// 0x345b24bd
- (id)_connection;	// 0x345b2505
- (void)_sendMessage:(id)message withReply:(id)reply;	// 0x345b30f9
- (void)_sendMessage:(id)message withReplySync:(id)replySync;	// 0x345b317d
- (id)accounts;	// 0x345b2715
- (void)barrier;	// 0x345b30a5
- (void)dealloc;	// 0x345b247d
- (void)deleteAccountWithIdentifier:(id)identifier;	// 0x345b2bf5
- (void)fetchSupportedLanguageCodes:(id)codes;	// 0x345b26d9
- (void)killDaemon;	// 0x345b3025
- (void)saveAccount:(id)account setActive:(BOOL)active;	// 0x345b2a41
- (void)setActiveAccountIdentifier:(id)identifier;	// 0x345b2d3d
- (void)setAssistantEnabled:(BOOL)enabled;	// 0x345b2e85
- (void)setDictationEnabled:(BOOL)enabled;	// 0x345b2f55
@end

