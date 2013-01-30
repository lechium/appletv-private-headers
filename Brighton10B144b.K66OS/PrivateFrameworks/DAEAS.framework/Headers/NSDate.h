/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSDate.h> // Unknown library


@interface NSDate (WBXMLAdditions)
+ (BOOL)acceptsTopLevelLeaves;	// 0x339d2785
+ (id)dateWithActiveSyncString:(id)activeSyncString;	// 0x339d2929
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)yearMonthDay;	// 0x339d2a09
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)activeSyncStringWithoutSeparators;	// 0x339d2979
+ (BOOL)frontingBasicTypes;	// 0x339d2881
+ (BOOL)notifyOfUnknownTokens;	// 0x339d28d5
+ (BOOL)parsingLeafNode;	// 0x339d27d9
+ (BOOL)parsingWithSubItems;	// 0x339d282d
- (id)activeSyncString;	// 0x339d2a59
- (id)activeSyncStringForYearMonthDay;	// 0x339d2af1
- (id)activeSyncStringWithoutSeparators;	// 0x339d2aa5
@end

@interface NSDate (DataAccessUtils)
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x33a33579
- (id)nearestMidnight;	// 0x33a335a9
- (id)tzDateToDateInGMT:(id)gmt;	// 0x33a33549
@end
