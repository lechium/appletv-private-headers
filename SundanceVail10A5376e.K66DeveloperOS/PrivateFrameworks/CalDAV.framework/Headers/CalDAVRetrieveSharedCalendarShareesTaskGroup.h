/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, NSSet;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	NSURL *_url;	// 44 = 0x2c
	NSSet *_sharees;	// 48 = 0x30
}
@property(retain) NSSet *sharees;	// G=0x33801645; S=0x33801659; @synthesize=_sharees
@property(retain) NSURL *url;	// G=0x33801621; S=0x33801635; @synthesize=_url
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x33801345
- (id)initWithCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3380138d
- (void)dealloc;	// 0x338013f1
// declared property setter: - (void)setSharees:(id)sharees;	// 0x33801659
// declared property setter: - (void)setUrl:(id)url;	// 0x33801635
// declared property getter: - (id)sharees;	// 0x33801645
- (void)startTaskGroup;	// 0x33801449
- (void)task:(id)task didFinishWithError:(id)error;	// 0x338015a9
// declared property getter: - (id)url;	// 0x33801621
@end
