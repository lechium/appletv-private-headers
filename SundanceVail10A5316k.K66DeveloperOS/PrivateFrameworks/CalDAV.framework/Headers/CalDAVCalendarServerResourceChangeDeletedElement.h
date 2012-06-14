/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVCalendarServerResourceChangeElement.h"

@class ICSDateValue, NSString;

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement {
	NSString *_componentType;	// 32 = 0x20
	NSString *_summary;	// 36 = 0x24
	NSString *_displayName;	// 40 = 0x28
	ICSDateValue *_nextInstance;	// 44 = 0x2c
	BOOL _hadMoreInstances;	// 48 = 0x30
}
@property(retain) NSString *componentType;	// G=0x36e6b581; S=0x36e6b595; @synthesize=_componentType
@property(retain) NSString *displayName;	// G=0x36e6b5c9; S=0x36e6b5dd; @synthesize=_displayName
@property(assign) BOOL hadMoreInstances;	// G=0x36e6b611; S=0x36e6b629; @synthesize=_hadMoreInstances
@property(retain) ICSDateValue *nextInstance;	// G=0x36e6b5ed; S=0x36e6b601; @synthesize=_nextInstance
@property(retain) NSString *summary;	// G=0x36e6b5a5; S=0x36e6b5b9; @synthesize=_summary
- (id)init;	// 0x36e6b28d
// declared property getter: - (id)componentType;	// 0x36e6b581
- (id)copyParseRules;	// 0x36e6b411
- (void)dealloc;	// 0x36e6b2b9
// declared property getter: - (id)displayName;	// 0x36e6b5c9
// declared property getter: - (BOOL)hadMoreInstances;	// 0x36e6b611
// declared property getter: - (id)nextInstance;	// 0x36e6b5ed
// declared property setter: - (void)setComponentType:(id)type;	// 0x36e6b595
- (void)setDeletedDetails:(id)details;	// 0x36e6b345
// declared property setter: - (void)setDisplayName:(id)name;	// 0x36e6b5dd
// declared property setter: - (void)setHadMoreInstances:(BOOL)instances;	// 0x36e6b629
// declared property setter: - (void)setNextInstance:(id)instance;	// 0x36e6b601
// declared property setter: - (void)setSummary:(id)summary;	// 0x36e6b5b9
// declared property getter: - (id)summary;	// 0x36e6b5a5
@end

