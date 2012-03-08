/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABVCardValueSetter.h"


@interface ABVCardPersonValueSetter : ABVCardValueSetter {
	void *_person;	// 4 = 0x4
	CFArrayRef _properties;	// 8 = 0x8
}
+ (CFArrayRef)supportedProperties;	// 0x34fe91a9
- (id)initWithPerson:(void *)person;	// 0x34fe9595
- (void)dealloc;	// 0x34fe9539
- (CFArrayRef)foundProperties;	// 0x34fe681d
- (id)fullName;	// 0x34fe682d
- (id)imageData;	// 0x34fe9409
- (BOOL)setImageData:(id)data cropRectX:(int)x cropRectY:(int)y cropRectWidth:(int)width cropRectHeight:(int)height;	// 0x34fe9435
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x34fe94ad
- (void)setValueInTemporaryCache:(id)temporaryCache forProperty:(unsigned)property;	// 0x34fe93e9
- (void *)valueForProperty:(unsigned)property;	// 0x34fe9481
@end

