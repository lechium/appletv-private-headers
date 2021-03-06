/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVGetDelegatesBaseTaskGroup.h"

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
	int _state;	// 68 = 0x44
	NSMutableArray *_nestedGroupPrincipalURLs;	// 72 = 0x48
}
@property(retain) NSMutableArray *nestedGroupPrincipalURLs;	// G=0x33755e09; S=0x33755e1d; @synthesize=_nestedGroupPrincipalURLs
@property(assign) int state;	// G=0x33755ddd; S=0x33755df1; @synthesize=_state
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x337552d5
- (void)_expandProperties;	// 0x337553b9
- (void)_finishWithError:(id)error state:(int)state;	// 0x33755355
- (void)_getChildProperties;	// 0x337556a1
- (void)_getGroupMembershipForURL:(id)url state:(int)state;	// 0x33755519
- (void)dealloc;	// 0x33755289
// declared property getter: - (id)nestedGroupPrincipalURLs;	// 0x33755e09
// declared property setter: - (void)setNestedGroupPrincipalURLs:(id)urls;	// 0x33755e1d
// declared property setter: - (void)setState:(int)state;	// 0x33755df1
- (void)startTaskGroup;	// 0x3375579d
// declared property getter: - (int)state;	// 0x33755ddd
- (void)task:(id)task didFinishWithError:(id)error;	// 0x337557fd
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x33755ced
@end

