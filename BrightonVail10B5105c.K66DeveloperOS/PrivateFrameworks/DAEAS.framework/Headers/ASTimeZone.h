/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import "DAEAS-Structs.h"
#import <NSTimeZone.h> // Unknown library


@interface ASTimeZone : NSTimeZone <ASParsingLeafNode> {
	int _gmtOffset;	// 4 = 0x4
	int _dstOffset;	// 8 = 0x8
	SYSTEMTIME *_standardDate;	// 12 = 0xc
	SYSTEMTIME *_daylightDate;	// 16 = 0x10
	NSTimeZone *_wrappedTimeZone;	// 20 = 0x14
}
+ (void)_cacheTimeZoneInfo;	// 0x3365b099
+ (BOOL)_dateIsValidTransitionDate:(id)date inYear:(int)year withTimeZone:(id)timeZone;	// 0x336599f9
+ (void)_fillOutCurrentTimeZoneInfo;	// 0x33659b39
+ (BOOL)_loadDataFromDisk;	// 0x3365ade9
+ (id)_tzCachePathCreateIfMissing:(BOOL)missing;	// 0x3365ad21
+ (BOOL)acceptsTopLevelLeaves;	// 0x33659771
+ (BOOL)expectsContent;	// 0x3365ca9d
+ (BOOL)frontingBasicTypes;	// 0x3365986d
+ (id)gmt;	// 0x33659915
+ (BOOL)notifyOfUnknownTokens;	// 0x336598c1
+ (BOOL)parsingLeafNode;	// 0x336597c5
+ (BOOL)parsingWithSubItems;	// 0x33659819
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x3365b5e1
- (id)initWithCodingDict:(id)codingDict;	// 0x3365c779
- (id)initWithName:(id)name;	// 0x3365c721
- (id)initWithName:(id)name data:(id)data;	// 0x3365c74d
- (id)initWithTZNameFromCalDB:(id)calDB;	// 0x3365995d
- (id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)minutes firstTransitionDate:(SYSTEMTIME *)date secondTransitionDate:(SYSTEMTIME *)date3;	// 0x3365b3a5
- (BOOL)_dateIsValidTransitionDate:(id)date inYear:(int)year outDaylightBias:(int *)bias;	// 0x3365bee9
- (SYSTEMTIME)_ruleForDate:(id)date;	// 0x3365c089
- (id)abbreviationForDate:(id)date;	// 0x3365c6e1
- (id)data;	// 0x3365c6c1
- (id)dateForRule:(SYSTEMTIME *)rule inYear:(int)year;	// 0x3365b901
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x3365be09
- (void)dealloc;	// 0x3365b885
- (id)description;	// 0x3365b7d5
- (id)dictForCoding;	// 0x3365c931
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x3365bc4d
- (XXStruct_wS5jrA *)mallocTZIForDate:(id)date;	// 0x3365c2e9
- (id)name;	// 0x3365c6a1
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x3365c701
- (int)parsingState;	// 0x3365b8fd
- (int)secondsFromGMTForDate:(id)date;	// 0x3365ba69
@end
