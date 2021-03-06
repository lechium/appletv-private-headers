/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVGetDelegatesBaseTaskGroup.h"


@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
	int _state;	// 68 = 0x44
	BOOL _fetchPrincipalDetails;	// 72 = 0x48
}
@property(assign) BOOL fetchPrincipalDetails;	// G=0x332657bd; S=0x332657cd; @synthesize=_fetchPrincipalDetails
@property(assign) int state;	// G=0x332657dd; S=0x332657ed; @synthesize=_state
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x332657fd
- (void)_expandPropertiesWithAllowWrite:(BOOL)allowWrite;	// 0x33265f4d
- (void)_fetchOnlyHrefs;	// 0x332660e5
- (void)_finishWithError:(id)error state:(int)state;	// 0x33266281
- (void)_getChildProperties;	// 0x33265e99
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)allowWrite;	// 0x33266095
// declared property getter: - (BOOL)fetchPrincipalDetails;	// 0x332657bd
// declared property setter: - (void)setFetchPrincipalDetails:(BOOL)details;	// 0x332657cd
// declared property setter: - (void)setState:(int)state;	// 0x332657ed
- (void)startTaskGroup;	// 0x33265e25
// declared property getter: - (int)state;	// 0x332657dd
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33265951
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x33265865
@end

