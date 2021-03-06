/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import <StoreServices/SSAccount.h>

@class NSString;

@interface SSAccount (ATV_Keychain)
- (id)_attributeDictionary;	// 0x300b50d9
- (id)_copyKeychainObjectForKey:(id)key;	// 0x300b5329
- (id)_copyQueryTemplateForService:(id)service;	// 0x300b4fe9
- (id)_copySecureKeychainString;	// 0x300b55fd
- (id)_debugKeychainDictionary;	// 0x300b5a31
- (void)_eraseAllKeychainData;	// 0x300b5961
- (void)_removeKeychainObjectForKey:(id)key;	// 0x300b55e9
- (void)_removeSecureKeychainString;	// 0x300b594d
- (void)_setKeychainObject:(id)object forKey:(id)key;	// 0x300b53a5
- (void)_setSecureKeychainString:(id)string;	// 0x300b5749
@end

@interface SSAccount (AppleTVServices)
@property(assign, nonatomic, getter=isITunesMatchEnabled) BOOL iTunesMatchEnabled;	// G=0x300da85d; S=0x300da89d; 
@property(assign, nonatomic, getter=isITunesRadioEnabled) BOOL iTunesRadioEnabled;	// G=0x300da8f1; S=0x300da931; 
@property(assign, nonatomic, getter=isOneClickEnabled) BOOL oneClickEnabled;	// G=0x300da7c9; S=0x300da809; 
@property(copy, nonatomic) NSString *password;	// G=0x300da79d; S=0x300da7b9; 
// declared property getter: - (BOOL)isITunesMatchEnabled;	// 0x300da85d
// declared property getter: - (BOOL)isITunesRadioEnabled;	// 0x300da8f1
// declared property getter: - (BOOL)isOneClickEnabled;	// 0x300da7c9
// declared property getter: - (id)password;	// 0x300da79d
// declared property setter: - (void)setITunesMatchEnabled:(BOOL)enabled;	// 0x300da89d
// declared property setter: - (void)setITunesRadioEnabled:(BOOL)enabled;	// 0x300da931
// declared property setter: - (void)setOneClickEnabled:(BOOL)enabled;	// 0x300da809
// declared property setter: - (void)setPassword:(id)password;	// 0x300da7b9
@end

