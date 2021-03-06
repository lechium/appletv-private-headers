/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet, ICSDateValue;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem {
	NSMutableSet *_created;	// 28 = 0x1c
	NSMutableSet *_updated;	// 32 = 0x20
	NSMutableSet *_deleted;	// 36 = 0x24
	NSMutableSet *_collectionChanges;	// 40 = 0x28
	NSMutableSet *_collectionUpdates;	// 44 = 0x2c
	ICSDateValue *_dtstamp;	// 48 = 0x30
}
@property(retain) NSMutableSet *collectionChanges;	// G=0x3142d819; S=0x3142d82d; @synthesize=_collectionChanges
@property(retain) NSMutableSet *collectionUpdates;	// G=0x3142d83d; S=0x3142d851; @synthesize=_collectionUpdates
@property(retain) NSMutableSet *created;	// G=0x3142d7ad; S=0x3142d7c1; @synthesize=_created
@property(retain) NSMutableSet *deleted;	// G=0x3142d7f5; S=0x3142d809; @synthesize=_deleted
@property(retain) ICSDateValue *dtstamp;	// G=0x3142d861; S=0x3142d875; @synthesize=_dtstamp
@property(retain) NSMutableSet *updated;	// G=0x3142d7d1; S=0x3142d7e5; @synthesize=_updated
- (id)init;	// 0x3142d159
- (void)addCollectionChanges:(id)changes;	// 0x3142d2d5
- (void)addCollectionUpdates:(id)updates;	// 0x3142d345
- (void)addCreated:(id)created;	// 0x3142d185
- (void)addDeleted:(id)deleted;	// 0x3142d265
- (void)addUpdated:(id)updated;	// 0x3142d1f5
// declared property getter: - (id)collectionChanges;	// 0x3142d819
// declared property getter: - (id)collectionUpdates;	// 0x3142d83d
- (id)copyParseRules;	// 0x3142d405
// declared property getter: - (id)created;	// 0x3142d7ad
- (void)dealloc;	// 0x3142d0a5
// declared property getter: - (id)deleted;	// 0x3142d7f5
// declared property getter: - (id)dtstamp;	// 0x3142d861
// declared property setter: - (void)setCollectionChanges:(id)changes;	// 0x3142d82d
// declared property setter: - (void)setCollectionUpdates:(id)updates;	// 0x3142d851
// declared property setter: - (void)setCreated:(id)created;	// 0x3142d7c1
// declared property setter: - (void)setDeleted:(id)deleted;	// 0x3142d809
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x3142d875
- (void)setDtstampItem:(id)item;	// 0x3142d3b5
// declared property setter: - (void)setUpdated:(id)updated;	// 0x3142d7e5
// declared property getter: - (id)updated;	// 0x3142d7d1
@end

