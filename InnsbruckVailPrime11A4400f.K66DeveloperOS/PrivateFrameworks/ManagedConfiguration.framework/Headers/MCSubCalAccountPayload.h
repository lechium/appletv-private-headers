/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCSubCalAccountPayload : MCPayload {
	NSString *_accountDescription;	// 44 = 0x2c
	NSString *_hostname;	// 48 = 0x30
	NSString *_username;	// 52 = 0x34
	NSString *_password;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	NSString *_accountPersistentUUID;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x3139dcad; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x3139dcfd; S=0x3139dd11; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x3139dcbd; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSString *password;	// G=0x3139dcdd; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x3139dced; @synthesize=_useSSL
@property(readonly, assign, nonatomic) NSString *username;	// G=0x3139dccd; @synthesize=_username
+ (id)localizedPluralForm;	// 0x3139d489
+ (id)localizedSingularForm;	// 0x3139d475
+ (id)typeStrings;	// 0x3139d44d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3139d49d
- (void).cxx_destruct;	// 0x3139dd21
// declared property getter: - (id)accountDescription;	// 0x3139dcad
// declared property getter: - (id)accountPersistentUUID;	// 0x3139dcfd
- (id)description;	// 0x3139d9bd
// declared property getter: - (id)hostname;	// 0x3139dcbd
// declared property getter: - (id)password;	// 0x3139dcdd
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x3139dd11
- (id)stubDictionary;	// 0x3139db29
- (id)subtitle1Description;	// 0x3139dc7d
- (id)subtitle1Label;	// 0x3139dc6d
- (id)subtitle2Description;	// 0x3139dc9d
- (id)subtitle2Label;	// 0x3139dc8d
- (id)title;	// 0x3139dc19
// declared property getter: - (BOOL)useSSL;	// 0x3139dced
// declared property getter: - (id)username;	// 0x3139dccd
@end

