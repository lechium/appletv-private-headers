/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
	int _action;	// 44 = 0x2c
	NSURL *_url;	// 48 = 0x30
	int _state;	// 52 = 0x34
}
@property(assign) int action;	// G=0x34220f5d; S=0x34220f71; @synthesize=_action
@property(assign) int state;	// G=0x34220fad; S=0x34220fc1; @synthesize=_state
@property(retain) NSURL *url;	// G=0x34220f89; S=0x34220f9d; @synthesize=_url
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x342206d9
- (id)initWithSharingAction:(int)sharingAction atCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x34220721
// declared property getter: - (int)action;	// 0x34220f5d
- (void)dealloc;	// 0x34220799
- (id)description;	// 0x342207dd
- (void)finishWithError:(id)error;	// 0x34220f4d
// declared property setter: - (void)setAction:(int)action;	// 0x34220f71
// declared property setter: - (void)setState:(int)state;	// 0x34220fc1
// declared property setter: - (void)setUrl:(id)url;	// 0x34220f9d
- (void)startTaskGroup;	// 0x34220809
// declared property getter: - (int)state;	// 0x34220fad
- (void)task:(id)task didFinishWithError:(id)error;	// 0x34220bd1
// declared property getter: - (id)url;	// 0x34220f89
@end

