/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_master;	// 28 = 0x1c
	CoreDAVLeafItem *_recurrenceID;	// 32 = 0x20
	CalDAVCalendarServerChangesItem *_changes;	// 36 = 0x24
}
@property(retain) CalDAVCalendarServerChangesItem *changes;	// G=0x33592c79; S=0x33592c8d; @synthesize=_changes
@property(readonly, assign) BOOL isMaster;	// G=0x33592c15; 
@property(retain) CoreDAVItemWithNoChildren *master;	// G=0x33592c31; S=0x33592c45; @synthesize=_master
@property(retain) CoreDAVLeafItem *recurrenceID;	// G=0x33592c55; S=0x33592c69; @synthesize=_recurrenceID
- (id)init;	// 0x335928d1
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x335928fd
// declared property getter: - (id)changes;	// 0x33592c79
- (id)copyParseRules;	// 0x33592a05
- (void)dealloc;	// 0x3359296d
- (id)description;	// 0x335929d9
// declared property getter: - (BOOL)isMaster;	// 0x33592c15
// declared property getter: - (id)master;	// 0x33592c31
// declared property getter: - (id)recurrenceID;	// 0x33592c55
// declared property setter: - (void)setChanges:(id)changes;	// 0x33592c8d
// declared property setter: - (void)setMaster:(id)master;	// 0x33592c45
// declared property setter: - (void)setRecurrenceID:(id)anId;	// 0x33592c69
@end
