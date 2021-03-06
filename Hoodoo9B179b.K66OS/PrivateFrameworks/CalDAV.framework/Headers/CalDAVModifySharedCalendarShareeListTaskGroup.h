/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPostTaskDelegate.h"

@class NSURL, NSSet, NSMutableSet, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
	NSSet *_shareesToRemove;	// 44 = 0x2c
	NSSet *_shareesToSet;	// 48 = 0x30
	NSURL *_calendarURL;	// 52 = 0x34
	NSString *_summary;	// 56 = 0x38
	NSMutableSet *_invalidSharees;	// 60 = 0x3c
}
@property(retain) NSURL *calendarURL;	// G=0x35a928d9; S=0x35a928b5; @synthesize=_calendarURL
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) NSMutableSet *invalidSharees;	// G=0x35a92951; S=0x35a9292d; @synthesize=_invalidSharees
@property(retain) NSSet *shareesToRemove;	// G=0x35a92861; S=0x35a9283d; @synthesize=_shareesToRemove
@property(retain) NSSet *shareesToSet;	// G=0x35a9289d; S=0x35a92879; @synthesize=_shareesToSet
@property(retain) NSString *summary;	// G=0x35a92915; S=0x35a928f1; @synthesize=_summary
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x35a92745
- (id)initWithShareesToSet:(id)set shareesToRemove:(id)remove summary:(id)summary atCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x35a9278d
// declared property getter: - (id)calendarURL;	// 0x35a928d9
- (void)dealloc;	// 0x35a93231
- (id)description;	// 0x35a93205
- (id)generateModificationMessageBody;	// 0x35a92dd1
// declared property getter: - (id)invalidSharees;	// 0x35a92951
// declared property setter: - (void)setCalendarURL:(id)url;	// 0x35a928b5
// declared property setter: - (void)setInvalidSharees:(id)sharees;	// 0x35a9292d
// declared property setter: - (void)setShareesToRemove:(id)remove;	// 0x35a9283d
// declared property setter: - (void)setShareesToSet:(id)set;	// 0x35a92879
// declared property setter: - (void)setSummary:(id)summary;	// 0x35a928f1
// declared property getter: - (id)shareesToRemove;	// 0x35a92861
// declared property getter: - (id)shareesToSet;	// 0x35a9289d
- (void)startTaskGroup;	// 0x35a925b9
// declared property getter: - (id)summary;	// 0x35a92915
- (void)task:(id)task didFinishWithError:(id)error;	// 0x35a92969
@end

