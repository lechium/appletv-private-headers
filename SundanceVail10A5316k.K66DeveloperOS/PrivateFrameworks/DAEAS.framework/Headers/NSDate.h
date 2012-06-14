/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSDate.h> // Unknown library


@interface NSDate (WBXMLAdditions)
+ (BOOL)acceptsTopLevelLeaves;	// 0x30944c05
+ (id)dateWithActiveSyncString:(id)activeSyncString;	// 0x30944da9
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)yearMonthDay;	// 0x30944e89
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)activeSyncStringWithoutSeparators;	// 0x30944df9
+ (BOOL)frontingBasicTypes;	// 0x30944d01
+ (BOOL)notifyOfUnknownTokens;	// 0x30944d55
+ (BOOL)parsingLeafNode;	// 0x30944c59
+ (BOOL)parsingWithSubItems;	// 0x30944cad
- (id)activeSyncString;	// 0x30944ed9
- (id)activeSyncStringForYearMonthDay;	// 0x30944f71
- (id)activeSyncStringWithoutSeparators;	// 0x30944f25
@end

@interface NSDate (DataAccessUtils)
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x309a4eb5
- (id)nearestMidnight;	// 0x309a4ee5
- (id)tzDateToDateInGMT:(id)gmt;	// 0x309a4e85
@end

