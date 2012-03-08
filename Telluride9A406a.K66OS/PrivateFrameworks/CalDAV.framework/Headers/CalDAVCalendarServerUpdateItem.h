/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerUpdateItem : CoreDAVItem {
	NSMutableSet *_recurrences;	// 24 = 0x18
}
@property(retain) NSMutableSet *recurrences;	// G=0x35fb6a11; S=0x35fb69ed; @synthesize=_recurrences
- (id)init;	// 0x35fb6805
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35fb6979
- (void)addRecurrence:(id)recurrence;	// 0x35fb694d
- (id)copyParseRules;	// 0x35fb6841
- (void)dealloc;	// 0x35fb6a55
- (id)description;	// 0x35fb6a29
// declared property getter: - (id)recurrences;	// 0x35fb6a11
// declared property setter: - (void)setRecurrences:(id)recurrences;	// 0x35fb69ed
@end

