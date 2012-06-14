/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSDate.h> // Unknown library


@interface NSDate (WBXMLAdditions)
+ (BOOL)acceptsTopLevelLeaves;	// 0x3219fe11
+ (id)dateWithActiveSyncString:(id)activeSyncString;	// 0x3219ffb5
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)yearMonthDay;	// 0x321a008d
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)activeSyncStringWithoutSeparators;	// 0x321a0005
+ (BOOL)frontingBasicTypes;	// 0x3219ff0d
+ (BOOL)notifyOfUnknownTokens;	// 0x3219ff61
+ (BOOL)parsingLeafNode;	// 0x3219fe65
+ (BOOL)parsingWithSubItems;	// 0x3219feb9
- (id)activeSyncString;	// 0x321a00dd
- (id)activeSyncStringForYearMonthDay;	// 0x321a0175
- (id)activeSyncStringWithoutSeparators;	// 0x321a0129
@end

@interface NSDate (DataAccessUtils)
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x321feefd
- (id)nearestMidnight;	// 0x321fef2d
- (id)tzDateToDateInGMT:(id)gmt;	// 0x321feecd
@end
