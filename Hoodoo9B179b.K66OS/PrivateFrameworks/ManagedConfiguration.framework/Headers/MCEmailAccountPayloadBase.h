/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString;

@interface MCEmailAccountPayloadBase : MCPayload {
@private
	BOOL _preventMove;	// 40 = 0x28
	BOOL _preventAppSheet;	// 41 = 0x29
	BOOL _SMIMEEnabled;	// 42 = 0x2a
	BOOL _SMIMEEncryptionEnabled;	// 43 = 0x2b
	NSString *_SMIMESigningIdentityUUID;	// 44 = 0x2c
	NSString *_SMIMEEncryptionIdentityUUID;	// 48 = 0x30
	NSData *_SMIMESigningIdentityPersistentID;	// 52 = 0x34
	NSData *_SMIMEEncryptionIdentityPersistentID;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) BOOL SMIMEEnabled;	// G=0x348d92d5; @synthesize=_SMIMEEnabled
@property(readonly, assign, nonatomic) BOOL SMIMEEncryptionEnabled;	// G=0x348d92c5; @synthesize=_SMIMEEncryptionEnabled
@property(retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID;	// G=0x348d9285; S=0x348d93b5; @synthesize=_SMIMEEncryptionIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMEEncryptionIdentityUUID;	// G=0x348d92a5; @synthesize=_SMIMEEncryptionIdentityUUID
@property(retain, nonatomic) NSData *SMIMESigningIdentityPersistentID;	// G=0x348d9295; S=0x348d938d; @synthesize=_SMIMESigningIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMESigningIdentityUUID;	// G=0x348d92b5; @synthesize=_SMIMESigningIdentityUUID
@property(readonly, assign, nonatomic) BOOL preventAppSheet;	// G=0x348d92e5; @synthesize=_preventAppSheet
@property(readonly, assign, nonatomic) BOOL preventMove;	// G=0x348d92f5; @synthesize=_preventMove
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x348d96f5
// declared property getter: - (BOOL)SMIMEEnabled;	// 0x348d92d5
// declared property getter: - (BOOL)SMIMEEncryptionEnabled;	// 0x348d92c5
// declared property getter: - (id)SMIMEEncryptionIdentityPersistentID;	// 0x348d9285
// declared property getter: - (id)SMIMEEncryptionIdentityUUID;	// 0x348d92a5
// declared property getter: - (id)SMIMESigningIdentityPersistentID;	// 0x348d9295
// declared property getter: - (id)SMIMESigningIdentityUUID;	// 0x348d92b5
- (void)dealloc;	// 0x348d9305
- (id)description;	// 0x348d93dd
// declared property getter: - (BOOL)preventAppSheet;	// 0x348d92e5
// declared property getter: - (BOOL)preventMove;	// 0x348d92f5
// declared property setter: - (void)setSMIMEEncryptionIdentityPersistentID:(id)anId;	// 0x348d93b5
// declared property setter: - (void)setSMIMESigningIdentityPersistentID:(id)anId;	// 0x348d938d
- (id)stubDictionary;	// 0x348d95bd
@end

