/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVACLTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class CoreDAVPropFindTask, NSSet, NSURL;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate> {
	int _state;	// 44 = 0x2c
	NSSet *_aceItems;	// 48 = 0x30
	NSURL *_url;	// 52 = 0x34
	CoreDAVPropFindTask *_fetchTask;	// 56 = 0x38
}
@property(retain) NSSet *aceItems;	// G=0x30cb6d1d; S=0x30cb6d31; @synthesize=_aceItems
@property(retain) CoreDAVPropFindTask *fetchTask;	// G=0x30cb6d8d; S=0x30cb6da1; @synthesize=_fetchTask
@property(assign) int state;	// G=0x30cb6cfd; S=0x30cb6d0d; @synthesize=_state
@property(retain) NSURL *url;	// G=0x30cb6d55; S=0x30cb6d69; @synthesize=_url
- (id)initWithAccountInfoProvider:(id)accountInfoProvider aceItems:(id)items url:(id)url taskManager:(id)manager;	// 0x30cb66a1
- (void)_finishWithError:(id)error state:(int)state;	// 0x30cb6a75
- (void)_startGetACL;	// 0x30cb679d
- (void)_startSetACLWithAccessControlEntities:(id)accessControlEntities;	// 0x30cb6971
// declared property getter: - (id)aceItems;	// 0x30cb6d1d
- (void)dealloc;	// 0x30cb6729
// declared property getter: - (id)fetchTask;	// 0x30cb6d8d
// declared property setter: - (void)setAceItems:(id)items;	// 0x30cb6d31
// declared property setter: - (void)setFetchTask:(id)task;	// 0x30cb6da1
// declared property setter: - (void)setState:(int)state;	// 0x30cb6d0d
// declared property setter: - (void)setUrl:(id)url;	// 0x30cb6d69
- (void)startTaskGroup;	// 0x30cb6a65
// declared property getter: - (int)state;	// 0x30cb6cfd
- (void)task:(id)task didFinishWithError:(id)error;	// 0x30cb6aa9
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30cb6ce9
// declared property getter: - (id)url;	// 0x30cb6d55
@end

