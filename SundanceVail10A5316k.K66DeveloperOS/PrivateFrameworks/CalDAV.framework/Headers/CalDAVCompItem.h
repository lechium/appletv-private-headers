/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {
	NSString *_nameAttribute;	// 24 = 0x18
}
@property(retain) NSString *nameAttribute;	// G=0x36e493ed; S=0x36e49401; @synthesize=_nameAttribute
- (id)init;	// 0x36e49171
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x36e4919d
- (void)dealloc;	// 0x36e491e5
// declared property getter: - (id)nameAttribute;	// 0x36e493ed
- (void)parserFoundAttributes:(id)attributes;	// 0x36e49229
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x36e49401
- (void)write:(id)write;	// 0x36e4933d
@end

