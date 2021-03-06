/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSObject.h> // Unknown library


@interface ABVCardRecord : NSObject {
	void *_record;	// 4 = 0x4
	CFArrayRef _properties;	// 8 = 0x8
}
@property(readonly, assign) void *record;	// G=0x308b5d9d; converted property
+ (void)clearPrivateFields;	// 0x308b6199
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x308b62f5
+ (BOOL)includeImageURIInVCards;	// 0x308b62f1
+ (BOOL)includeNotesInVCards;	// 0x308b6251
+ (BOOL)includePhotosInVCards;	// 0x308b6339
+ (BOOL)includeREVInVCards;	// 0x308b62c1
+ (BOOL)privateVCardEnabled;	// 0x308b6039
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x308b6211
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x308b62f9
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x308b6281
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x308b605d
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x308b609d
+ (CFArrayRef)supportedProperties;	// 0x308b5dad
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x308b61b5
- (id)init;	// 0x308b5b25
- (id)initWithRecord:(void *)record;	// 0x308b5ab9
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x308b5b8d
- (id)ISO8061StringFromDate:(id)date;	// 0x308b6915
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x308b693d
- (id)_21vCardRepresentationAsData;	// 0x308b878d
- (void)_appendPropValue:(id)value forExternalPropKey:(id)externalPropKey toOutString:(id)outString usingDelimiter:(id)delimiter;	// 0x308b9d31
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x308bbf95
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x308b9e91
- (id)_fullName;	// 0x308b861d
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x308b8325
- (BOOL)_isCompany;	// 0x308b85dd
- (id)_prodID;	// 0x308b9c45
- (id)_realCompositeName;	// 0x308b86cd
- (BOOL)_showField:(unsigned)field;	// 0x308b6369
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x308b636d
- (BOOL)_usesArrayForExternalPropKey:(id)externalPropKey;	// 0x308b9d01
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x308b6371
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x308b6749
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x308b6429
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x308b6491
- (id)alternateName;	// 0x308b8631
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x308b67b1
- (void *)copyValueForProperty:(unsigned)property;	// 0x308b69d9
- (id)dataForInstantMessageProperties;	// 0x308b7a39
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x308b7601
- (void)dealloc;	// 0x308b5cc5
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x308b8209
- (id)encodedLineForValue:(id)value;	// 0x308b7eb5
- (id)imageData;	// 0x308b9be5
- (id)newISO8061StringFromDate:(id)date;	// 0x308b682d
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x308b73c9
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x308b6a15
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x308b78b1
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x308b7041
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x308b6c8d
// converted property getter: - (void *)record;	// 0x308b5d9d
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x308b5fb1
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x308b9be1
- (id)vCardRepresentationForMode:(int)mode;	// 0x308b5d21
- (void *)valueForProperty:(unsigned)property;	// 0x308b69ed
@end

