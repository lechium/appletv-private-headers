/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import </libobjc.A.h>


@interface ABVCardValueSetter : NSObject {
}
- (id)fullName;	// 0x2c9dc661
- (id)imageData;	// 0x2c9dc65d
- (BOOL)propertyIsValidForPerson:(unsigned)person;	// 0x2c9dc629
- (BOOL)setImageData:(id)data;	// 0x2c9dc639
- (BOOL)setImageData:(id)data cropRectX:(int)x cropRectY:(int)y cropRectWidth:(int)width cropRectHeight:(int)height;	// 0x2c9dc635
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x2c9dc62d
- (void)setValueInTemporaryCache:(id)temporaryCache forProperty:(unsigned)property;	// 0x2c9dc665
- (void *)valueForProperty:(unsigned)property;	// 0x2c9dc631
@end

