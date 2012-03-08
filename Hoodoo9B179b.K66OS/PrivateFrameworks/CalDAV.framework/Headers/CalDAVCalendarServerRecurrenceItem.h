/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, CalDAVCalendarServerChangesItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_master;	// 24 = 0x18
	CoreDAVLeafItem *_recurrenceID;	// 28 = 0x1c
	CalDAVCalendarServerChangesItem *_changes;	// 32 = 0x20
}
@property(retain) CalDAVCalendarServerChangesItem *changes;	// G=0x35a90fdd; S=0x35a90fb9; @synthesize=_changes
@property(readonly, assign) BOOL isMaster;	// G=0x35a90ead; 
@property(retain) CoreDAVItemWithNoChildren *master;	// G=0x35a90f65; S=0x35a90f41; @synthesize=_master
@property(retain) CoreDAVLeafItem *recurrenceID;	// G=0x35a90fa1; S=0x35a90f7d; @synthesize=_recurrenceID
- (id)init;	// 0x35a90c05
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35a90ecd
// declared property getter: - (id)changes;	// 0x35a90fdd
- (id)copyParseRules;	// 0x35a90c41
- (void)dealloc;	// 0x35a91021
- (id)description;	// 0x35a90ff5
// declared property getter: - (BOOL)isMaster;	// 0x35a90ead
// declared property getter: - (id)master;	// 0x35a90f65
// declared property getter: - (id)recurrenceID;	// 0x35a90fa1
// declared property setter: - (void)setChanges:(id)changes;	// 0x35a90fb9
// declared property setter: - (void)setMaster:(id)master;	// 0x35a90f41
// declared property setter: - (void)setRecurrenceID:(id)anId;	// 0x35a90f7d
@end

