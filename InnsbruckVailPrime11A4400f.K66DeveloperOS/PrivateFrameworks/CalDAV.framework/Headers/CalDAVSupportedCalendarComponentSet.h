/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {
	NSMutableSet *_comps;	// 28 = 0x1c
}
@property(readonly, assign) NSSet *compNames;	// G=0x30266971; 
@property(retain) NSMutableSet *comps;	// G=0x30266ab1; S=0x30266ac5; @synthesize=_comps
- (id)init;	// 0x30266759
- (void)addComp:(id)comp;	// 0x302668b1
- (id)childrenToWrite;	// 0x3026691d
// declared property getter: - (id)compNames;	// 0x30266971
- (id)componentsAsString;	// 0x302667cd
// declared property getter: - (id)comps;	// 0x30266ab1
- (id)copyParseRules;	// 0x30266651
- (void)dealloc;	// 0x30266789
- (id)description;	// 0x3026682d
// declared property setter: - (void)setComps:(id)comps;	// 0x30266ac5
@end
