/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {
	NSMutableSet *_comps;	// 24 = 0x18
}
@property(readonly, assign) NSSet *compNames;	// G=0x35a86f09; 
@property(retain) NSMutableSet *comps;	// G=0x35a86ef1; S=0x35a86ecd; @synthesize=_comps
- (id)init;	// 0x35a86d31
- (void)addComp:(id)comp;	// 0x35a86dcd
- (id)childrenToWrite;	// 0x35a86e39
// declared property getter: - (id)compNames;	// 0x35a86f09
- (id)componentsAsString;	// 0x35a86d6d
// declared property getter: - (id)comps;	// 0x35a86ef1
- (id)copyParseRules;	// 0x35a86c25
- (void)dealloc;	// 0x35a86e8d
- (id)description;	// 0x35a8703d
// declared property setter: - (void)setComps:(id)comps;	// 0x35a86ecd
@end

