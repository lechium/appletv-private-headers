/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSMutableString, NSString, NSMutableDictionary, ABVCardLexer, ABVCardValueSetter, NSMutableArray;

@interface ABVCardParser : NSObject {
	ABVCardValueSetter *_valueSetter;	// 4 = 0x4
@private
	void *_source;	// 8 = 0x8
	ABVCardLexer *_lexer;	// 12 = 0xc
	NSData *_data;	// 16 = 0x10
	unsigned _defaultEncoding;	// 20 = 0x14
	BOOL _hasImportErrors;	// 24 = 0x18
	BOOL _30vCard;	// 25 = 0x19
	NSString *_first;	// 28 = 0x1c
	NSString *_last;	// 32 = 0x20
	NSString *_org;	// 36 = 0x24
	NSString *_formattedName;	// 40 = 0x28
	NSMutableArray *_emails;	// 44 = 0x2c
	NSMutableArray *_dates;	// 48 = 0x30
	NSMutableArray *_phones;	// 52 = 0x34
	NSMutableArray *_addresses;	// 56 = 0x38
	NSMutableArray *_aims;	// 60 = 0x3c
	NSMutableArray *_jabbers;	// 64 = 0x40
	NSMutableArray *_msns;	// 68 = 0x44
	NSMutableArray *_yahoos;	// 72 = 0x48
	NSMutableArray *_icqs;	// 76 = 0x4c
	NSMutableArray *_untypedIMs;	// 80 = 0x50
	NSMutableArray *_instantMessengers;	// 84 = 0x54
	NSMutableArray *_socialProfiles;	// 88 = 0x58
	NSMutableArray *_relatedNames;	// 92 = 0x5c
	NSMutableArray *_urls;	// 96 = 0x60
	NSMutableString *_notes;	// 100 = 0x64
	NSMutableString *_otherNotes;	// 104 = 0x68
	NSMutableDictionary *_extensions;	// 108 = 0x6c
	NSString *_uid;	// 112 = 0x70
	NSData *_imageData;	// 116 = 0x74
	NSString *_imageURI;	// 120 = 0x78
@protected
	int _cropRectX;	// 124 = 0x7c
	int _cropRectY;	// 128 = 0x80
	int _cropRectWidth;	// 132 = 0x84
	int _cropRectHeight;	// 136 = 0x88
	NSData *_cropRectChecksum;	// 140 = 0x8c
@private
	NSMutableArray *_itemParameters;	// 144 = 0x90
	NSString *_grouping;	// 148 = 0x94
	unsigned _encoding;	// 152 = 0x98
	BOOL _quotedPrintable;	// 156 = 0x9c
	BOOL _base64;	// 157 = 0x9d
}
@property(readonly, assign) BOOL hasImportErrors;	// G=0x31922791; converted property
@property(assign, nonatomic) void *source;	// G=0x319227fd; S=0x319297ed; @synthesize=_source
+ (CFArrayRef)supportedProperties;	// 0x31925275
- (id)initWithData:(id)data;	// 0x319298bd
- (int)_addIMHandles:(id)handles toService:(CFStringRef)service multiValue:(void *)value uniquenessCheckingMultiValue:(void *)value4;	// 0x31928ee1
- (int)_addIMPPProfiles:(id)profiles multiValue:(void *)value uniquenessCheckingMultiValue:(void *)value3;	// 0x31928d59
- (id)_genericLabel;	// 0x31923461
- (BOOL)_handleUnknownTag:(id)tag withValue:(id)value;	// 0x319227e9
- (BOOL)_setDataValueOrNoteIfNull:(id)null forProperty:(unsigned)property;	// 0x31922cdd
- (BOOL)_setIntValueOrNoteIfNull:(int)null forProperty:(int)property;	// 0x31922c89
- (BOOL)_setMultiValuesOrNoteIfNull:(id)null forProperty:(unsigned)property valueComparator:(id)comparator;	// 0x31922d9d
- (BOOL)_setStringValueOrNoteIfNull:(id)null forProperty:(unsigned)property;	// 0x31922d3d
- (id)_socialProfileService;	// 0x3192882d
- (id)_socialProfileUserId;	// 0x31928a2d
- (id)_socialProfileUsername;	// 0x3192892d
- (id)_valueSetter;	// 0x319227ed
- (void)addAddressMultiValues;	// 0x31929325
- (BOOL)addIMValueTo:(id)to;	// 0x31924cb1
- (void)addInstantMessageMultiValues;	// 0x31928b2d
- (void)addMultiValues:(id)values toProperty:(unsigned)property valueComparator:(id)comparator;	// 0x319295a9
- (void)addSocialProfileMultiValues;	// 0x319290f5
- (void)cleanUpCardState;	// 0x31922939
- (void *)copyNextPersonWithLength:(int *)length foundProperties:(const CFArrayRef *)properties;	// 0x31926285
- (id)dateFromISO8601String:(id)iso8601String;	// 0x3192811d
- (void)dealloc;	// 0x31929821
- (id)defaultADRLabel;	// 0x319227bd
- (id)defaultLabel;	// 0x319227ad
- (id)defaultURLLabel;	// 0x319227cd
- (void)finalize;	// 0x319260d5
- (id)genericLabel;	// 0x31923561
// converted property getter: - (BOOL)hasImportErrors;	// 0x31922791
- (BOOL)importToPerson:(void *)person foundProperties:(const CFArrayRef *)properties;	// 0x31926a71
- (BOOL)importToValueSetter:(id)valueSetter;	// 0x31926351
- (void)noteLackOfValueForImageData;	// 0x319227a5
- (void)noteLackOfValueForProperty:(unsigned)property;	// 0x319227a1
- (BOOL)parseABDATE;	// 0x31924e71
- (BOOL)parseABExtensionType:(id)type;	// 0x31924a51
- (BOOL)parseABMaiden;	// 0x319231b9
- (void)parseABOrder;	// 0x319227e5
- (void)parseABPhoto;	// 0x319227e1
- (BOOL)parseABReleatedNames;	// 0x31925119
- (void)parseABShowAs;	// 0x31925029
- (BOOL)parseABUID;	// 0x31923849
- (BOOL)parseADD;	// 0x319244ad
- (BOOL)parseADR;	// 0x31923e29
- (BOOL)parseBDAY;	// 0x31927f71
- (BOOL)parseEMAIL;	// 0x31923889
- (BOOL)parseIMPP;	// 0x31924b51
- (id)parseInstantMessengerProfile:(id)profile;	// 0x319283d9
- (BOOL)parseItem;	// 0x31926b01
- (BOOL)parseN;	// 0x31922dd9
- (BOOL)parseNICKNAME;	// 0x319230f9
- (BOOL)parseORG;	// 0x31923211
- (BOOL)parsePhoto:(id)photo;	// 0x31924fe9
- (id)parseSingleValue;	// 0x31923339
- (BOOL)parseSocialProfiles;	// 0x31928685
- (BOOL)parseTEL;	// 0x31923ca5
- (BOOL)parseUID;	// 0x319227dd
- (id)parseURL;	// 0x319233cd
- (BOOL)parseVERSION;	// 0x31922c0d
- (CFArrayRef)peopleAndProperties:(const CFArrayRef *)properties;	// 0x3192618d
- (id)phoneLabel;	// 0x3192358d
- (void)setLocalRecordHasAdditionalProperties:(BOOL)properties;	// 0x319227a9
// declared property setter: - (void)setSource:(void *)source;	// 0x319297ed
- (id)sortedPeopleAndProperties:(const CFArrayRef *)properties;	// 0x31926101
// declared property getter: - (void *)source;	// 0x319227fd
@end

