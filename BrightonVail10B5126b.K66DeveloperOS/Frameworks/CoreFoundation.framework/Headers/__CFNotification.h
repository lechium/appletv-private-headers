/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface __CFNotification : NSObject <NSCopying> {
	id _name;	// 4 = 0x4
	id _object;	// 8 = 0x8
	id _userInfo;	// 12 = 0xc
	BOOL _fouSemantics;	// 16 = 0x10
	BOOL _dyingObject;	// 17 = 0x11
}
@property(readonly, retain) id name;	// G=0x31055705; converted property
@property(readonly, retain) id object;	// G=0x31055715; converted property
@property(readonly, retain) id userInfo;	// G=0x31089509; converted property
- (id)initWithName:(CFStringRef)name object:(const void *)object userInfo:(CFDictionaryRef)info foundation:(BOOL)foundation;	// 0x3105562d
- (id)copyWithZone:(NSZone *)zone;	// 0x310cf8bd
- (void)dealloc;	// 0x31055a19
- (void)finalize;	// 0x310cf8cd
- (unsigned)hash;	// 0x310cf789
- (BOOL)isEqual:(id)equal;	// 0x310cf7b1
// converted property getter: - (id)name;	// 0x31055705
// converted property getter: - (id)object;	// 0x31055715
// converted property getter: - (id)userInfo;	// 0x31089509
@end
