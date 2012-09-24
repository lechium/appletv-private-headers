/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_accessLevel;	// 28 = 0x1c
}
@property(retain) CoreDAVItemWithNoChildren *accessLevel;	// G=0x32ec2a05; S=0x32ec2a19; @synthesize=_accessLevel
- (id)init;	// 0x32ec2619
- (id)initWithAccess:(int)access;	// 0x32ec268d
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x32ec2645
// declared property getter: - (id)accessLevel;	// 0x32ec2a05
- (id)copyParseRules;	// 0x32ec2801
- (void)dealloc;	// 0x32ec2791
- (id)description;	// 0x32ec27d5
// declared property setter: - (void)setAccessLevel:(id)level;	// 0x32ec2a19
@end
