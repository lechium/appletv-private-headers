/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVAllowedCalendarSet : CoreDAVItem {
	NSMutableSet *_componentSets;	// 24 = 0x18
}
+ (BOOL)allowedCalendars:(id)calendars contains:(id)contains;	// 0x338e23b9
- (id)init;	// 0x338e2271
- (void)addCompSet:(id)set;	// 0x338e22ad
- (id)childrenToWrite;	// 0x338e2319
- (id)componentsAsString;	// 0x338e2529
- (id)copyParseRules;	// 0x338e2165
- (void)dealloc;	// 0x338e236d
- (id)description;	// 0x338e24a5
@end

