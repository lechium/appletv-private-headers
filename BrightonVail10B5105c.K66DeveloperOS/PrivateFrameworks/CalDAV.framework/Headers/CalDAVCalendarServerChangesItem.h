/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem {
	NSMutableSet *_changedProperties;	// 28 = 0x1c
}
@property(retain) NSMutableSet *changedProperties;	// G=0x3421fed5; S=0x3421fee9; @synthesize=_changedProperties
- (id)init;	// 0x3421fc9d
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3421fcc9
- (void)addChangedProperty:(id)property;	// 0x3421fda5
// declared property getter: - (id)changedProperties;	// 0x3421fed5
- (id)copyParseRules;	// 0x3421fdd1
- (void)dealloc;	// 0x3421fd35
- (id)description;	// 0x3421fd79
// declared property setter: - (void)setChangedProperties:(id)properties;	// 0x3421fee9
@end

