/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import </libobjc.A.h>

@class NSLock, NSString;

@interface ISClient : NSObject {
	NSString *_appleClientApplication;	// 4 = 0x4
	NSString *_appleClientVersions;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSLock *_lock;	// 16 = 0x10
	NSString *_partnerHeader;	// 20 = 0x14
	NSString *_userAgent;	// 24 = 0x18
}
@property(copy) NSString *appleClientApplication;	// G=0x33c74c75; S=0x33c751e1; 
@property(readonly, assign) NSString *appleClientVersions;	// G=0x33c74ce1; 
@property(copy) NSString *identifier;	// G=0x33c750b9; S=0x33c75261; 
@property(copy) NSString *partnerHeader;	// G=0x33c75175; S=0x33c752e1; 
@property(copy) NSString *userAgent;	// G=0x33c754bd; S=0x33c7543d; 
+ (id)currentClient;	// 0x33c74c09
- (id)init;	// 0x33c74a69
- (void)_softwareMapInvalidatedNotification:(id)notification;	// 0x33c7555d
// declared property getter: - (id)appleClientApplication;	// 0x33c74c75
// declared property getter: - (id)appleClientVersions;	// 0x33c74ce1
- (void)dealloc;	// 0x33c74b29
// declared property getter: - (id)identifier;	// 0x33c750b9
- (id)localStoreFrontID;	// 0x33c75529
// declared property getter: - (id)partnerHeader;	// 0x33c75175
// declared property setter: - (void)setAppleClientApplication:(id)application;	// 0x33c751e1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x33c75261
// declared property setter: - (void)setPartnerHeader:(id)header;	// 0x33c752e1
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x33c7543d
// declared property getter: - (id)userAgent;	// 0x33c754bd
@end

