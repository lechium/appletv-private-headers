/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSURL, NSMutableSet, NSSet, NSMutableArray;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
	BOOL _serverSupportsExpandPropertyReport;	// 44 = 0x2c
	NSURL *_principalURL;	// 48 = 0x30
	NSMutableArray *_readPrincipalURLs;	// 52 = 0x34
	NSMutableArray *_writePrincipalURLs;	// 56 = 0x38
	NSMutableSet *_writeDetails;	// 60 = 0x3c
	NSMutableSet *_readDetails;	// 64 = 0x40
}
@property(retain) NSURL *principalURL;	// G=0x3380d4f9; S=0x3380d50d; @synthesize=_principalURL
@property(retain) NSMutableSet *readDetails;	// G=0x3380d589; S=0x3380d59d; @synthesize=_readDetails
@property(readonly, assign) NSSet *readOnlyPrincipalDetails;	// G=0x3380d459; 
@property(retain) NSMutableArray *readPrincipalURLs;	// G=0x3380d51d; S=0x3380d531; @synthesize=_readPrincipalURLs
@property(readonly, assign) NSSet *readWritePrincipalDetails;	// G=0x3380d491; 
@property(assign) BOOL serverSupportsExpandPropertyReport;	// G=0x3380d4c9; S=0x3380d4e1; @synthesize=_serverSupportsExpandPropertyReport
@property(retain) NSMutableSet *writeDetails;	// G=0x3380d565; S=0x3380d579; @synthesize=_writeDetails
@property(retain) NSMutableArray *writePrincipalURLs;	// G=0x3380d541; S=0x3380d555; @synthesize=_writePrincipalURLs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x3380ced1
- (void)_getPrincipalDetailsForURL:(id)url;	// 0x3380d275
- (id)_mappingsForPrincipalDetails;	// 0x3380cfb9
- (id)_popFromArray:(id)array;	// 0x3380d311
- (void)_processDetailsFromMultiStatus:(id)multiStatus allowWrite:(BOOL)write;	// 0x3380d13d
- (void)dealloc;	// 0x3380ce31
// declared property getter: - (id)principalURL;	// 0x3380d4f9
// declared property getter: - (id)readDetails;	// 0x3380d589
// declared property getter: - (id)readOnlyPrincipalDetails;	// 0x3380d459
// declared property getter: - (id)readPrincipalURLs;	// 0x3380d51d
// declared property getter: - (id)readWritePrincipalDetails;	// 0x3380d491
// declared property getter: - (BOOL)serverSupportsExpandPropertyReport;	// 0x3380d4c9
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3380d50d
// declared property setter: - (void)setReadDetails:(id)details;	// 0x3380d59d
// declared property setter: - (void)setReadPrincipalURLs:(id)urls;	// 0x3380d531
// declared property setter: - (void)setServerSupportsExpandPropertyReport:(BOOL)report;	// 0x3380d4e1
// declared property setter: - (void)setWriteDetails:(id)details;	// 0x3380d579
// declared property setter: - (void)setWritePrincipalURLs:(id)urls;	// 0x3380d555
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3380d361
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x3380d3dd
// declared property getter: - (id)writeDetails;	// 0x3380d565
// declared property getter: - (id)writePrincipalURLs;	// 0x3380d541
@end

