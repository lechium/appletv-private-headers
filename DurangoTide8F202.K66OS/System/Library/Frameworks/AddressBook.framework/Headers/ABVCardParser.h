/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library
#import "AddressBook-Structs.h"

@class NSMutableArray, NSData, NSMutableString, NSMutableDictionary, ABVCardLexer, NSString, ABVCardValueSetter;

@interface ABVCardParser : NSObject {
@private
	ABVCardLexer *_lexer;	// 4 = 0x4
	NSData *_data;	// 8 = 0x8
	unsigned _defaultEncoding;	// 12 = 0xc
	BOOL _hasImportErrors;	// 16 = 0x10
	ABVCardValueSetter *_valueSetter;	// 20 = 0x14
	BOOL _30vCard;	// 24 = 0x18
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
	NSMutableArray *_relatedNames;	// 80 = 0x50
	NSMutableArray *_urls;	// 84 = 0x54
	NSMutableString *_notes;	// 88 = 0x58
	NSMutableString *_otherNotes;	// 92 = 0x5c
	NSMutableDictionary *_extensions;	// 96 = 0x60
	NSString *_uid;	// 100 = 0x64
	NSData *_imageData;	// 104 = 0x68
	NSString *_imageURI;	// 108 = 0x6c
	NSMutableArray *_itemParameters;	// 112 = 0x70
	NSString *_grouping;	// 116 = 0x74
	unsigned _encoding;	// 120 = 0x78
	BOOL _quotedPrintable;	// 124 = 0x7c
	BOOL _base64;	// 125 = 0x7d
}
@property(readonly, assign) BOOL hasImportErrors;	// G=0x304f5331; converted property
+ (CFArrayRef)supportedProperties;	// 0x304f77d5
- (id)initWithData:(id)data;	// 0x304f7b25
- (void)_addIMHandles:(id)handles toService:(CFStringRef)service multiValue:(void *)value;	// 0x304f8201
- (id)_genericLabel;	// 0x304f6e0d
- (BOOL)_handleUnknownTag:(id)tag withValue:(id)value;	// 0x304f537d
- (id)_valueSetter;	// 0x304f5381
- (void)addAddressMultiValues;	// 0x304f7e25
- (BOOL)addIMValueTo:(id)to;	// 0x304f5bd9
- (void)addInstantMessageMultiValues;	// 0x304f7ce1
- (void)addMultiValues:(id)values toProperty:(unsigned)property valueComparator:(/*function-pointer*/ void *)comparator;	// 0x304f8009
- (void)cleanUpCardState;	// 0x304f75ed
- (void *)copyNextPersonWithLength:(int *)length foundProperties:(const CFArrayRef *)properties;	// 0x304f9b7d
- (id)dateFromISO8601String:(id)iso8601String;	// 0x304fa5b9
- (void)dealloc;	// 0x304f7aa9
- (id)defaultADRLabel;	// 0x304f5351
- (id)defaultLabel;	// 0x304f5341
- (id)defaultURLLabel;	// 0x304f5361
- (void)finalize;	// 0x304f7a7d
- (id)genericLabel;	// 0x304f6de9
// converted property getter: - (BOOL)hasImportErrors;	// 0x304f5331
- (BOOL)importToPerson:(void *)person foundProperties:(const CFArrayRef *)properties;	// 0x304f9a95
- (BOOL)importToValueSetter:(id)valueSetter;	// 0x304f8565
- (BOOL)parseABDATE;	// 0x304f5a81
- (BOOL)parseABExtensionType:(id)type;	// 0x304f5d99
- (BOOL)parseABMaiden;	// 0x304f7129
- (void)parseABOrder;	// 0x304f5379
- (void)parseABPhoto;	// 0x304f5375
- (BOOL)parseABReleatedNames;	// 0x304f5861
- (void)parseABShowAs;	// 0x304f5999
- (BOOL)parseABUID;	// 0x304f6bd1
- (BOOL)parseADD;	// 0x304f5e8d
- (BOOL)parseADR;	// 0x304f6321
- (BOOL)parseBDAY;	// 0x304f8401
- (BOOL)parseEMAIL;	// 0x304f6a31
- (BOOL)parseItem;	// 0x304f8af9
- (BOOL)parseN;	// 0x304f724d
- (BOOL)parseNICKNAME;	// 0x304f7179
- (BOOL)parseORG;	// 0x304f7005
- (BOOL)parsePhoto:(id)photo;	// 0x304f5a49
- (id)parseSingleValue;	// 0x304f6f7d
- (BOOL)parseTEL;	// 0x304f6891
- (BOOL)parseUID;	// 0x304f5371
- (id)parseURL;	// 0x304f6ef5
- (BOOL)parseVERSION;	// 0x304f7581
- (CFArrayRef)peopleAndProperties:(const CFArrayRef *)properties;	// 0x304f9e99
- (id)phoneLabel;	// 0x304f6c09
- (id)sortedPeopleAndProperties:(const CFArrayRef *)properties;	// 0x304f9f69
@end

