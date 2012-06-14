/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface LDAPSearchSettings : NSObject {
	NSString *_searchDescription;	// 4 = 0x4
	NSString *_searchBase;	// 8 = 0x8
	int _scope;	// 12 = 0xc
}
@property(assign) int scope;	// G=0x35c9c26d; S=0x35c9c281; @synthesize=_scope
@property(retain) NSString *searchBase;	// G=0x35c9c249; S=0x35c9c25d; @synthesize=_searchBase
@property(retain) NSString *searchDescription;	// G=0x35c9c225; S=0x35c9c239; @synthesize=_searchDescription
- (id)initWithSettingsDict:(id)settingsDict;	// 0x35c9be75
- (void)dealloc;	// 0x35c9be11
- (id)description;	// 0x35c9c191
- (BOOL)hasSameScopeAndBaseAsOther:(id)other;	// 0x35c9c015
- (unsigned)hash;	// 0x35c9c0d5
- (BOOL)isEqual:(id)equal;	// 0x35c9c10d
// declared property getter: - (int)scope;	// 0x35c9c26d
// declared property getter: - (id)searchBase;	// 0x35c9c249
// declared property getter: - (id)searchDescription;	// 0x35c9c225
// declared property setter: - (void)setScope:(int)scope;	// 0x35c9c281
// declared property setter: - (void)setSearchBase:(id)base;	// 0x35c9c25d
// declared property setter: - (void)setSearchDescription:(id)description;	// 0x35c9c239
- (id)settingsDict;	// 0x35c9bf49
@end

