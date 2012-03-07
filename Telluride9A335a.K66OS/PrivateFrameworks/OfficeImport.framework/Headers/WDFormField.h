/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFormField : WDRun {
@private
	unsigned mPosition;	// 8 = 0x8
	BOOL mLinkAbsolute;	// 12 = 0xc
	BOOL mLinkSpecifyingNamedLocation;	// 13 = 0xd
	NSString *mNamedLocation;	// 16 = 0x10
	NSString *mURI;	// 20 = 0x14
	NSString *mMacName;	// 24 = 0x18
	NSString *mDosName;	// 28 = 0x1c
}
@property(retain) id URI;	// G=0x353b3009; S=0x353b30e9; converted property
@property(retain) id dosName;	// G=0x353b3029; S=0x353b3069; converted property
@property(assign) BOOL linkAbsolute;	// G=0x353b2fb9; S=0x353b2fc9; converted property
@property(assign) BOOL linkSpecifyingNamedLocation;	// G=0x353b2fd9; S=0x353b2fe9; converted property
@property(retain) id macName;	// G=0x353b3019; S=0x353b30a9; converted property
@property(retain) id namedLocation;	// G=0x353b2ff9; S=0x353b3129; converted property
@property(assign) unsigned long position;	// G=0x353b2f99; S=0x353b2fa9; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x353b303d
// converted property getter: - (id)URI;	// 0x353b3009
- (void)dealloc;	// 0x353b3169
// converted property getter: - (id)dosName;	// 0x353b3029
// converted property getter: - (BOOL)linkAbsolute;	// 0x353b2fb9
// converted property getter: - (BOOL)linkSpecifyingNamedLocation;	// 0x353b2fd9
// converted property getter: - (id)macName;	// 0x353b3019
// converted property getter: - (id)namedLocation;	// 0x353b2ff9
// converted property getter: - (unsigned long)position;	// 0x353b2f99
- (int)runType;	// 0x353b3039
// converted property setter: - (void)setDosName:(id)name;	// 0x353b3069
// converted property setter: - (void)setLinkAbsolute:(BOOL)absolute;	// 0x353b2fc9
// converted property setter: - (void)setLinkSpecifyingNamedLocation:(BOOL)location;	// 0x353b2fe9
// converted property setter: - (void)setMacName:(id)name;	// 0x353b30a9
// converted property setter: - (void)setNamedLocation:(id)location;	// 0x353b3129
// converted property setter: - (void)setPosition:(unsigned long)position;	// 0x353b2fa9
// converted property setter: - (void)setURI:(id)uri;	// 0x353b30e9
@end
