/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"

@class NSURL, NSSet, NSString, CalDAVPrincipalEmailDetailsResult;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	CalDAVPrincipalEmailDetailsResult *_principalResult;	// 44 = 0x2c
	NSURL *_principalURL;	// 48 = 0x30
}
@property(readonly, retain) NSSet *addresses;	// G=0x31489f09; 
@property(readonly, retain) NSString *displayName;	// G=0x31489f31; 
@property(retain) CalDAVPrincipalEmailDetailsResult *principalResult;	// G=0x3148a01d; S=0x31489ff9; @synthesize=_principalResult
@property(retain) NSURL *principalURL;	// G=0x3148a059; S=0x3148a035; @synthesize=_principalURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x3148a071
- (void)_finishWithError:(id)error;	// 0x31489875
- (void)_processPropFind:(id)find;	// 0x31489885
// declared property getter: - (id)addresses;	// 0x31489f09
- (void)dealloc;	// 0x31489f99
// declared property getter: - (id)displayName;	// 0x31489f31
// declared property getter: - (id)principalResult;	// 0x3148a01d
// declared property getter: - (id)principalURL;	// 0x3148a059
// declared property setter: - (void)setPrincipalResult:(id)result;	// 0x31489ff9
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3148a035
- (void)startTaskGroup;	// 0x31489609
- (void)task:(id)task didFinishWithError:(id)error;	// 0x31489e71
@end
