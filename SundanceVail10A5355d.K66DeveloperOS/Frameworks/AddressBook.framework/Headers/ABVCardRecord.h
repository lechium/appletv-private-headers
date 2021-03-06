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
@property(readonly, assign) void *record;	// G=0x361ea20d; converted property
+ (void)clearPrivateFields;	// 0x361ea609
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x361ea765
+ (BOOL)includeImageURIInVCards;	// 0x361ea761
+ (BOOL)includeNotesInVCards;	// 0x361ea6c1
+ (BOOL)includePhotosInVCards;	// 0x361ea7a9
+ (BOOL)includeREVInVCards;	// 0x361ea731
+ (BOOL)privateVCardEnabled;	// 0x361ea4a9
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x361ea681
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x361ea769
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x361ea6f1
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x361ea4cd
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x361ea50d
+ (CFArrayRef)supportedProperties;	// 0x361ea21d
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x361ea625
- (id)init;	// 0x361e9f95
- (id)initWithRecord:(void *)record;	// 0x361e9f29
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x361e9ffd
- (id)ISO8061StringFromDate:(id)date;	// 0x361ead85
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x361eadad
- (id)_21vCardRepresentationAsData;	// 0x361ecbfd
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x361f02b9
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x361ee171
- (id)_fullName;	// 0x361eca8d
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x361ec795
- (BOOL)_isCompany;	// 0x361eca4d
- (id)_prodID;	// 0x361ee0b5
- (id)_realCompositeName;	// 0x361ecb3d
- (BOOL)_showField:(unsigned)field;	// 0x361ea7d9
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x361ea7dd
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x361ea7e1
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x361eabb9
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x361ea899
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x361ea901
- (id)alternateName;	// 0x361ecaa1
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x361eac21
- (void *)copyValueForProperty:(unsigned)property;	// 0x361eae49
- (id)dataForInstantMessageProperties;	// 0x361ebea9
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x361eba71
- (void)dealloc;	// 0x361ea135
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x361ec679
- (id)encodedLineForValue:(id)value;	// 0x361ec325
- (id)imageData;	// 0x361ee055
- (id)newISO8061StringFromDate:(id)date;	// 0x361eac9d
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x361eb839
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x361eae85
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x361ebd21
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x361eb4b1
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x361eb0fd
// converted property getter: - (void *)record;	// 0x361ea20d
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x361ea421
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x361ee051
- (id)vCardRepresentationForMode:(int)mode;	// 0x361ea191
- (void *)valueForProperty:(unsigned)property;	// 0x361eae5d
@end

