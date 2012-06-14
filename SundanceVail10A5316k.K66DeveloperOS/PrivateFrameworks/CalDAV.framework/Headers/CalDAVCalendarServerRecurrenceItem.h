/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_master;	// 24 = 0x18
	CoreDAVLeafItem *_recurrenceID;	// 28 = 0x1c
	CalDAVCalendarServerChangesItem *_changes;	// 32 = 0x20
}
@property(retain) CalDAVCalendarServerChangesItem *changes;	// G=0x36e53595; S=0x36e535a9; @synthesize=_changes
@property(readonly, assign) BOOL isMaster;	// G=0x36e53531; 
@property(retain) CoreDAVItemWithNoChildren *master;	// G=0x36e5354d; S=0x36e53561; @synthesize=_master
@property(retain) CoreDAVLeafItem *recurrenceID;	// G=0x36e53571; S=0x36e53585; @synthesize=_recurrenceID
- (id)init;	// 0x36e531ed
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x36e53219
// declared property getter: - (id)changes;	// 0x36e53595
- (id)copyParseRules;	// 0x36e53321
- (void)dealloc;	// 0x36e53289
- (id)description;	// 0x36e532f5
// declared property getter: - (BOOL)isMaster;	// 0x36e53531
// declared property getter: - (id)master;	// 0x36e5354d
// declared property getter: - (id)recurrenceID;	// 0x36e53571
// declared property setter: - (void)setChanges:(id)changes;	// 0x36e535a9
// declared property setter: - (void)setMaster:(id)master;	// 0x36e53561
// declared property setter: - (void)setRecurrenceID:(id)anId;	// 0x36e53585
@end

