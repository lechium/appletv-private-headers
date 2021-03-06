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
@property(readonly, assign) void *record;	// G=0x33753d9d; converted property
+ (void)clearPrivateFields;	// 0x33754199
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x337542f5
+ (BOOL)includeImageURIInVCards;	// 0x337542f1
+ (BOOL)includeNotesInVCards;	// 0x33754251
+ (BOOL)includePhotosInVCards;	// 0x33754339
+ (BOOL)includeREVInVCards;	// 0x337542c1
+ (BOOL)privateVCardEnabled;	// 0x33754039
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x33754211
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x337542f9
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x33754281
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x3375405d
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x3375409d
+ (CFArrayRef)supportedProperties;	// 0x33753dad
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x337541b5
- (id)init;	// 0x33753b25
- (id)initWithRecord:(void *)record;	// 0x33753ab9
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x33753b8d
- (id)ISO8061StringFromDate:(id)date;	// 0x33754915
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x3375493d
- (id)_21vCardRepresentationAsData;	// 0x3375678d
- (void)_appendPropValue:(id)value forExternalPropKey:(id)externalPropKey toOutString:(id)outString usingDelimiter:(id)delimiter;	// 0x33757d31
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x33759f95
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x33757e91
- (id)_fullName;	// 0x3375661d
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x33756325
- (BOOL)_isCompany;	// 0x337565dd
- (id)_prodID;	// 0x33757c45
- (id)_realCompositeName;	// 0x337566cd
- (BOOL)_showField:(unsigned)field;	// 0x33754369
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x3375436d
- (BOOL)_usesArrayForExternalPropKey:(id)externalPropKey;	// 0x33757d01
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x33754371
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x33754749
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x33754429
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x33754491
- (id)alternateName;	// 0x33756631
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x337547b1
- (void *)copyValueForProperty:(unsigned)property;	// 0x337549d9
- (id)dataForInstantMessageProperties;	// 0x33755a39
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x33755601
- (void)dealloc;	// 0x33753cc5
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x33756209
- (id)encodedLineForValue:(id)value;	// 0x33755eb5
- (id)imageData;	// 0x33757be5
- (id)newISO8061StringFromDate:(id)date;	// 0x3375482d
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x337553c9
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x33754a15
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x337558b1
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x33755041
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x33754c8d
// converted property getter: - (void *)record;	// 0x33753d9d
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x33753fb1
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x33757be1
- (id)vCardRepresentationForMode:(int)mode;	// 0x33753d21
- (void *)valueForProperty:(unsigned)property;	// 0x337549ed
@end

