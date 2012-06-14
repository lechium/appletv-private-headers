/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSScanner : NSObject <NSCopying> {
}
@property(assign) BOOL caseSensitive;	// G=0x31a820cd; S=0x31a82165; converted property
@property(retain) id charactersToBeSkipped;	// G=0x31a82085; S=0x31a82141; converted property
@property(retain) id locale;	// G=0x31a820d1; S=0x31a82189; converted property
@property(assign) unsigned scanLocation;	// G=0x31a8211d; S=0x31a820f9; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a2386d
+ (id)localizedScannerWithString:(id)string;	// 0x31a81321
+ (id)scannerWithString:(id)string;	// 0x31a23821
- (id)initWithString:(id)string;	// 0x31a23995
- (id)_invertedSkipSet;	// 0x31a81489
- (id)_remainingString;	// 0x31a419d9
- (BOOL)_scanDecimal:(unsigned)decimal into:(int *)into;	// 0x31a335d5
// converted property getter: - (BOOL)caseSensitive;	// 0x31a820cd
// converted property getter: - (id)charactersToBeSkipped;	// 0x31a82085
- (id)copyWithZone:(NSZone *)zone;	// 0x31a8139d
- (BOOL)isAtEnd;	// 0x31a239c1
// converted property getter: - (id)locale;	// 0x31a820d1
- (BOOL)scanCharactersFromSet:(id)set intoString:(id *)string;	// 0x31a33475
- (BOOL)scanDecimal:(XXStruct_9isexA *)decimal;	// 0x31a99149
- (BOOL)scanDouble:(double *)aDouble;	// 0x31a2e1b1
- (BOOL)scanFloat:(float *)aFloat;	// 0x31a81821
- (BOOL)scanHexDouble:(double *)aDouble;	// 0x31a818d1
- (BOOL)scanHexFloat:(float *)aFloat;	// 0x31a81965
- (BOOL)scanHexInt:(unsigned *)int;	// 0x31a81ef1
- (BOOL)scanHexLongLong:(unsigned long long *)aLong;	// 0x31a81afd
- (BOOL)scanInt:(int *)int;	// 0x31a81a89
- (BOOL)scanInteger:(int *)integer;	// 0x31a2e01d
// converted property getter: - (unsigned)scanLocation;	// 0x31a8211d
- (BOOL)scanLongLong:(long long *)aLong;	// 0x31a81a15
- (BOOL)scanString:(id)string intoString:(id *)string2;	// 0x31a2e071
- (BOOL)scanUpToCharactersFromSet:(id)set intoString:(id *)string;	// 0x31a23b6d
- (BOOL)scanUpToString:(id)string intoString:(id *)string2;	// 0x31a81f51
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x31a82165
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x31a82141
// converted property setter: - (void)setLocale:(id)locale;	// 0x31a82189
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x31a820f9
- (id)string;	// 0x31a820d5
@end

