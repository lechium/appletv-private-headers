/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPrincipalSearchPropertySetTaskDelegate.h"

@class NSSet, NSURL, NSString, NSMutableSet;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {
	NSURL *_principalURL;	// 44 = 0x2c
	NSString *_displayName;	// 48 = 0x30
	NSURL *_resourceID;	// 52 = 0x34
	NSSet *_emailAddresses;	// 56 = 0x38
	NSSet *_collections;	// 60 = 0x3c
	NSSet *_principalSearchProperties;	// 64 = 0x40
	BOOL _isExpandPropertyReportSupported;	// 68 = 0x44
	BOOL _fetchPrincipalSearchProperties;	// 69 = 0x45
	BOOL _shouldIgnoreHomeSetOnDifferentHost;	// 70 = 0x46
	NSMutableSet *_redirectHistory;	// 72 = 0x48
}
@property(readonly, assign) NSSet *collections;	// G=0x303bb1f9; @synthesize=_collections
@property(assign, nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;	// @dynamic
@property(readonly, assign) NSString *displayName;	// G=0x303bb1bd; @synthesize=_displayName
@property(readonly, assign) NSSet *emailAddresses;	// G=0x303bb1e5; @synthesize=_emailAddresses
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x303bb225; S=0x303bb23d; @synthesize=_fetchPrincipalSearchProperties
@property(readonly, assign) BOOL isExpandPropertyReportSupported;	// G=0x303bb20d; @synthesize=_isExpandPropertyReportSupported
@property(readonly, assign) NSSet *principalSearchProperties;	// G=0x303bb255; @synthesize=_principalSearchProperties
@property(readonly, assign) NSURL *principalURL;	// G=0x303bb1a9; @synthesize=_principalURL
@property(readonly, assign) NSURL *resourceID;	// G=0x303bb1d1; @synthesize=_resourceID
@property(assign, nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;	// G=0x303bb269; S=0x303bb279; @synthesize=_shouldIgnoreHomeSetOnDifferentHost
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x303b9bf9
- (id)_copyAccountPropertiesPropFindElements;	// 0x303b9ea9
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x303ba161
- (void)_taskCompleted:(id)completed withError:(id)error;	// 0x303ba6bd
- (void)coaxServerForPrincipalHeaders;	// 0x303baba1
// declared property getter: - (id)collections;	// 0x303bb1f9
- (void)dealloc;	// 0x303b9c75
- (id)description;	// 0x303b9d3d
// declared property getter: - (id)displayName;	// 0x303bb1bd
// declared property getter: - (id)emailAddresses;	// 0x303bb1e5
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x303bb225
- (BOOL)forceOptionsRequest;	// 0x303ba715
- (id)homeSet;	// 0x303ba021
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x303bb20d
// declared property getter: - (id)principalSearchProperties;	// 0x303bb255
// declared property getter: - (id)principalURL;	// 0x303bb1a9
- (void)processPrincipalHeaders:(id)headers;	// 0x303badc9
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x303ba719
// declared property getter: - (id)resourceID;	// 0x303bb1d1
- (void)searchPropertySetTask:(id)task completetWithPropertySearchSet:(id)propertySearchSet error:(id)error;	// 0x303baf19
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x303bb23d
// declared property setter: - (void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)ignoreHomeSetOnDifferentHost;	// 0x303bb279
// declared property getter: - (BOOL)shouldIgnoreHomeSetOnDifferentHost;	// 0x303bb269
- (void)startTaskGroup;	// 0x303ba025
- (void)task:(id)task didFinishWithError:(id)error;	// 0x303bafdd
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x303b9e3d
@end

