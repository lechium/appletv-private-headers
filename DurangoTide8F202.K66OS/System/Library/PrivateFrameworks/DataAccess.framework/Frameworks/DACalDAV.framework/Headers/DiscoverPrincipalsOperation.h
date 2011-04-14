/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSOperation.h> // Unknown library

@class NSMutableArray, NSError, NSString, CalDAVPrincipal, NSArray;

@interface DiscoverPrincipalsOperation : NSOperation {
	NSArray *_oldAddresses;	// 12 = 0xc
	NSMutableArray *_newAddresses;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	NSString *_virtualHostKey;	// 24 = 0x18
	NSString *_webServicesRecordGUID;	// 28 = 0x1c
	CalDAVPrincipal *_principal;	// 32 = 0x20
}
@property(retain) NSError *error;	// G=0x32d110e9; S=0x32d111fd; @synthesize=_error
@property(retain) NSArray *newAddresses;	// G=0x32d11119; S=0x32d11255; @synthesize=_newAddresses
@property(retain) NSArray *oldAddresses;	// G=0x32d11101; S=0x32d11229; @synthesize=_oldAddresses
@property(retain) CalDAVPrincipal *principal;	// G=0x32d11131; S=0x32d11281; @synthesize=_principal
@property(retain) NSString *virtualHostKey;	// G=0x32d11149; S=0x32d112ad; @synthesize=_virtualHostKey
@property(retain) NSString *webServicesRecordGUID;	// G=0x32d11161; S=0x32d112d9; @synthesize=_webServicesRecordGUID
- (id)initWithAddresses:(id)addresses principal:(id)principal virtualHostKey:(id)key webServicesRecordGUID:(id)guid;	// 0x32d10db1
- (void)dealloc;	// 0x32d10d19
// declared property getter: - (id)error;	// 0x32d110e9
- (void)main;	// 0x32d10e69
// declared property getter: - (id)newAddresses;	// 0x32d11119
// declared property getter: - (id)oldAddresses;	// 0x32d11101
// declared property getter: - (id)principal;	// 0x32d11131
// declared property setter: - (void)setError:(id)error;	// 0x32d111fd
// declared property setter: - (void)setNewAddresses:(id)addresses;	// 0x32d11255
// declared property setter: - (void)setOldAddresses:(id)addresses;	// 0x32d11229
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x32d11281
// declared property setter: - (void)setVirtualHostKey:(id)key;	// 0x32d112ad
// declared property setter: - (void)setWebServicesRecordGUID:(id)guid;	// 0x32d112d9
// declared property getter: - (id)virtualHostKey;	// 0x32d11149
// declared property getter: - (id)webServicesRecordGUID;	// 0x32d11161
@end

