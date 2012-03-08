/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject <NSCopying> {
@private
	NSString *mName;	// 4 = 0x4
	NSString *mSecondName;	// 8 = 0x8
	int mFontFamily;	// 12 = 0xc
	int mCharacterSet;	// 16 = 0x10
	int mPitch;	// 20 = 0x14
}
@property(assign) int characterSet;	// G=0x329c0bd9; S=0x32850035; converted property
@property(assign) int fontFamily;	// G=0x329c0bc9; S=0x32850025; converted property
@property(retain) id name;	// G=0x3286afbd; S=0x329c0bf9; converted property
@property(assign) int pitch;	// G=0x329c0be9; S=0x32850015; converted property
@property(retain) id secondName;	// G=0x329c0bb9; S=0x32856b21; converted property
- (id)init;	// 0x329c0e95
- (id)initWithName:(id)name;	// 0x3284ff5d
// converted property getter: - (int)characterSet;	// 0x329c0bd9
- (id)copyWithZone:(NSZone *)zone;	// 0x329c0c39
- (void)dealloc;	// 0x327d6785
// converted property getter: - (int)fontFamily;	// 0x329c0bc9
- (unsigned)hash;	// 0x329c0e25
- (BOOL)isEqual:(id)equal;	// 0x329c0ced
// converted property getter: - (id)name;	// 0x3286afbd
// converted property getter: - (int)pitch;	// 0x329c0be9
// converted property getter: - (id)secondName;	// 0x329c0bb9
// converted property setter: - (void)setCharacterSet:(int)set;	// 0x32850035
// converted property setter: - (void)setFontFamily:(int)family;	// 0x32850025
// converted property setter: - (void)setName:(id)name;	// 0x329c0bf9
// converted property setter: - (void)setPitch:(int)pitch;	// 0x32850015
// converted property setter: - (void)setSecondName:(id)name;	// 0x32856b21
@end

