/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {
	NSString *_nameAttribute;	// 28 = 0x1c
}
@property(retain) NSString *nameAttribute;	// G=0x3140db69; S=0x3140db7d; @synthesize=_nameAttribute
- (id)init;	// 0x3140d8ed
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3140d919
- (void)dealloc;	// 0x3140d961
// declared property getter: - (id)nameAttribute;	// 0x3140db69
- (void)parserFoundAttributes:(id)attributes;	// 0x3140d9a5
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x3140db7d
- (void)write:(id)write;	// 0x3140dab9
@end
