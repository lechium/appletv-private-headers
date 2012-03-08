/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSString;

__attribute__((visibility("hidden")))
@interface ISClient : NSObject {
@private
	NSString *_appleClientApplication;	// 4 = 0x4
	NSString *_appleClientVersions;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSLock *_lock;	// 16 = 0x10
	NSString *_partnerHeader;	// 20 = 0x14
	NSString *_userAgent;	// 24 = 0x18
}
@property(copy) NSString *appleClientApplication;	// G=0x30413c45; S=0x30414065; 
@property(readonly, assign) NSString *appleClientVersions;	// G=0x30413cb5; 
@property(copy) NSString *identifier;	// G=0x30413f45; S=0x304140e9; 
@property(copy) NSString *partnerHeader;	// G=0x30413ff9; S=0x3041416d; 
@property(copy) NSString *userAgent;	// G=0x3041435d; S=0x304142d9; 
+ (id)currentClient;	// 0x30413bc9
- (id)init;	// 0x30413a3d
- (void)_softwareMapInvalidatedNotification:(id)notification;	// 0x304143fd
// declared property getter: - (id)appleClientApplication;	// 0x30413c45
// declared property getter: - (id)appleClientVersions;	// 0x30413cb5
- (void)dealloc;	// 0x30413aed
// declared property getter: - (id)identifier;	// 0x30413f45
- (id)localStoreFrontID;	// 0x304143c9
// declared property getter: - (id)partnerHeader;	// 0x30413ff9
// declared property setter: - (void)setAppleClientApplication:(id)application;	// 0x30414065
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x304140e9
// declared property setter: - (void)setPartnerHeader:(id)header;	// 0x3041416d
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x304142d9
// declared property getter: - (id)userAgent;	// 0x3041435d
@end

