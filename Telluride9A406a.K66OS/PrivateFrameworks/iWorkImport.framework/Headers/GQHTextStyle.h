/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHTextStyle : NSObject {
}
+ (GSFontRef)createFontFromName:(CFStringRef)name size:(float)size;	// 0x33c353e5
+ (BOOL)getDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x33c354dd
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x33c354b9
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state isSpan:(BOOL)span;	// 0x33c356c5
+ (const char *)name;	// 0x33c353d9
+ (CFStringRef)platformCreateCssFontFamilyStringFromFontName:(CFStringRef)fontName;	// 0x33c35501
+ (BOOL)platformGetDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x33c35645
+ (void)reduceFontSizeForSuperscriptedText:(id)superscriptedText style:(id)style state:(id)state;	// 0x33c35e79
@end

