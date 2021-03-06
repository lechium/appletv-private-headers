/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSURL, CoreDAVResourceTypeItem, NSString, NSDictionary;

@interface CoreDAVContainer : NSObject {
	BOOL _isUnauthenticated;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	CoreDAVResourceTypeItem *_resourceType;	// 12 = 0xc
	NSString *_containerTitle;	// 16 = 0x10
	NSSet *_privileges;	// 20 = 0x14
	NSString *_pushKey;	// 24 = 0x18
	NSDictionary *_pushTransports;	// 28 = 0x1c
	NSURL *_resourceID;	// 32 = 0x20
	NSSet *_supportedReports;	// 36 = 0x24
	NSString *_quotaAvailable;	// 40 = 0x28
	NSString *_quotaUsed;	// 44 = 0x2c
	NSURL *_owner;	// 48 = 0x30
	NSURL *_addMemberURL;	// 52 = 0x34
	NSDictionary *_bulkRequests;	// 56 = 0x38
	NSString *_syncToken;	// 60 = 0x3c
}
@property(retain) NSURL *addMemberURL;	// G=0x35fe3cb5; S=0x35fe3cc9; @synthesize=_addMemberURL
@property(retain) NSDictionary *bulkRequests;	// G=0x35fe3cd9; S=0x35fe3ced; @synthesize=_bulkRequests
@property(retain) NSString *containerTitle;	// G=0x35fe3b4d; S=0x35fe3b61; @synthesize=_containerTitle
@property(readonly, assign) BOOL hasReadPrivileges;	// G=0x35fe2839; 
@property(readonly, assign) BOOL hasWriteContentPrivileges;	// G=0x35fe2a35; 
@property(readonly, assign) BOOL hasWritePropertiesPrivileges;	// G=0x35fe2c55; 
@property(readonly, assign) BOOL isPrincipal;	// G=0x35fe25ad; 
@property(assign) BOOL isUnauthenticated;	// G=0x35fe3b1d; S=0x35fe3b35; @synthesize=_isUnauthenticated
@property(retain) NSURL *owner;	// G=0x35fe3c91; S=0x35fe3ca5; @synthesize=_owner
@property(retain) NSSet *privileges;	// G=0x35fe3b71; S=0x35fe3b85; @synthesize=_privileges
@property(readonly, assign) NSSet *privilegesAsStringSet;	// G=0x35fe25f1; 
@property(retain) NSString *pushKey;	// G=0x35fe3b95; S=0x35fe3ba9; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransports;	// G=0x35fe3bb9; S=0x35fe3bcd; @synthesize=_pushTransports
@property(retain) NSString *quotaAvailable;	// G=0x35fe3c01; S=0x35fe3c15; @synthesize=_quotaAvailable
@property(retain) NSString *quotaUsed;	// G=0x35fe3c25; S=0x35fe3c39; @synthesize=_quotaUsed
@property(retain) NSURL *resourceID;	// G=0x35fe3bdd; S=0x35fe3bf1; @synthesize=_resourceID
@property(retain) CoreDAVResourceTypeItem *resourceType;	// G=0x35fe3c6d; S=0x35fe3c81; @synthesize=_resourceType
@property(readonly, assign) NSSet *resourceTypeAsStringSet;	// G=0x35fe2585; 
@property(retain) NSSet *supportedReports;	// G=0x35fe3c49; S=0x35fe3c5d; @synthesize=_supportedReports
@property(readonly, assign) NSSet *supportedReportsAsStringSet;	// G=0x35fe2e75; 
@property(readonly, assign) BOOL supportsPrincipalPropertySearchReport;	// G=0x35fe30d1; 
@property(readonly, assign) BOOL supportsSyncCollectionReport;	// G=0x35fe32ad; 
@property(retain) NSString *syncToken;	// G=0x35fe3cfd; S=0x35fe3d11; @synthesize=_syncToken
@property(retain) NSURL *url;	// G=0x35fe3af9; S=0x35fe3b0d; @synthesize=_url
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)nsserverNotificationCenter;	// 0x35fe35dd
+ (id)copyPropertyMappingsForParser;	// 0x35fe1c6d
- (id)initWithURL:(id)url andProperties:(id)properties;	// 0x35fe1f05
// declared property getter: - (id)addMemberURL;	// 0x35fe3cb5
- (void)applyParsedProperties:(id)properties;	// 0x35fe2201
// declared property getter: - (id)bulkRequests;	// 0x35fe3cd9
// declared property getter: - (id)containerTitle;	// 0x35fe3b4d
- (void)dealloc;	// 0x35fe3489
- (id)description;	// 0x35fe1f59
// declared property getter: - (BOOL)hasReadPrivileges;	// 0x35fe2839
// declared property getter: - (BOOL)hasWriteContentPrivileges;	// 0x35fe2a35
// declared property getter: - (BOOL)hasWritePropertiesPrivileges;	// 0x35fe2c55
// declared property getter: - (BOOL)isPrincipal;	// 0x35fe25ad
// declared property getter: - (BOOL)isUnauthenticated;	// 0x35fe3b1d
// declared property getter: - (id)owner;	// 0x35fe3c91
// declared property getter: - (id)privileges;	// 0x35fe3b71
// declared property getter: - (id)privilegesAsStringSet;	// 0x35fe25f1
// declared property getter: - (id)pushKey;	// 0x35fe3b95
// declared property getter: - (id)pushTransports;	// 0x35fe3bb9
// declared property getter: - (id)quotaAvailable;	// 0x35fe3c01
// declared property getter: - (id)quotaUsed;	// 0x35fe3c25
// declared property getter: - (id)resourceID;	// 0x35fe3bdd
// declared property getter: - (id)resourceType;	// 0x35fe3c6d
// declared property getter: - (id)resourceTypeAsStringSet;	// 0x35fe2585
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x35fe3cc9
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x35fe3ced
// declared property setter: - (void)setContainerTitle:(id)title;	// 0x35fe3b61
// declared property setter: - (void)setIsUnauthenticated:(BOOL)unauthenticated;	// 0x35fe3b35
// declared property setter: - (void)setOwner:(id)owner;	// 0x35fe3ca5
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x35fe3b85
// declared property setter: - (void)setPushKey:(id)key;	// 0x35fe3ba9
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x35fe3bcd
// declared property setter: - (void)setQuotaAvailable:(id)available;	// 0x35fe3c15
// declared property setter: - (void)setQuotaUsed:(id)used;	// 0x35fe3c39
// declared property setter: - (void)setResourceID:(id)anId;	// 0x35fe3bf1
// declared property setter: - (void)setResourceType:(id)type;	// 0x35fe3c81
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x35fe3c5d
// declared property setter: - (void)setSyncToken:(id)token;	// 0x35fe3d11
// declared property setter: - (void)setUrl:(id)url;	// 0x35fe3b0d
// declared property getter: - (id)supportedReports;	// 0x35fe3c49
// declared property getter: - (id)supportedReportsAsStringSet;	// 0x35fe2e75
// declared property getter: - (BOOL)supportsPrincipalPropertySearchReport;	// 0x35fe30d1
// declared property getter: - (BOOL)supportsSyncCollectionReport;	// 0x35fe32ad
// declared property getter: - (id)syncToken;	// 0x35fe3cfd
// declared property getter: - (id)url;	// 0x35fe3af9
@end

