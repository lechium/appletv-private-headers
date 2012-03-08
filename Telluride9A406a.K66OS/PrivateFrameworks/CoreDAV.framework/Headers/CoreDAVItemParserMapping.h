/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CoreDAVItemParserMapping : NSObject {
	NSString *_nameSpace;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	Class _parseClass;	// 12 = 0xc
}
@property(retain) NSString *name;	// G=0x31c63609; S=0x31c6361d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x31c635d1; S=0x31c635e5; @synthesize=_nameSpace
@property(assign) Class parseClass;	// G=0x31c63641; S=0x31c63651; @synthesize=_parseClass
- (id)initWithNameSpace:(id)nameSpace name:(id)name parseClass:(Class)aClass;	// 0x31c63441
- (void)dealloc;	// 0x31c634c9
- (id)description;	// 0x31c63529
// declared property getter: - (id)name;	// 0x31c63609
// declared property getter: - (id)nameSpace;	// 0x31c635d1
// declared property getter: - (Class)parseClass;	// 0x31c63641
// declared property setter: - (void)setName:(id)name;	// 0x31c6361d
// declared property setter: - (void)setNameSpace:(id)space;	// 0x31c635e5
// declared property setter: - (void)setParseClass:(Class)aClass;	// 0x31c63651
@end

