/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
	NSURL *_homeURL;	// 44 = 0x2c
	NSURL *_cardURL;	// 48 = 0x30
}
@property(readonly, assign) NSURL *cardURL;	// G=0x31c65359; @synthesize=_cardURL
@property(readonly, assign) NSURL *homeURL;	// G=0x31c65369; @synthesize=_homeURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager homeURL:(id)url cardURL:(id)url4;	// 0x31c64f19
- (id)_newPropPatchTask;	// 0x31c65099
// declared property getter: - (id)cardURL;	// 0x31c65359
- (void)dealloc;	// 0x31c64f85
- (id)description;	// 0x31c64fe5
// declared property getter: - (id)homeURL;	// 0x31c65369
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x31c652b9
- (void)startTaskGroup;	// 0x31c651e5
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x31c65045
@end
