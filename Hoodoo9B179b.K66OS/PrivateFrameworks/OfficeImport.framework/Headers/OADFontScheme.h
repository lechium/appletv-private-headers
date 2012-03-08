/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontScheme : NSObject {
@private
	NSMutableDictionary *mMajorFont;	// 4 = 0x4
	NSMutableDictionary *mMinorFont;	// 8 = 0x8
}
+ (void)addFontEntry:(id)entry script:(id)script typeface:(id)typeface;	// 0x328bde79
- (id)init;	// 0x327f1ae9
- (void)dealloc;	// 0x327c3419
- (id)fontForFontSchemeRef:(id)fontSchemeRef;	// 0x328efea9
- (BOOL)isFontSchemeRef:(id)ref;	// 0x32739681
- (id)majorFont;	// 0x327f4e65
- (unsigned)majorFontCount;	// 0x329d6da1
- (id)majorTypefaceForScript:(id)script;	// 0x328f0131
- (id)minorFont;	// 0x327f5091
- (unsigned)minorFontCount;	// 0x329d6d81
- (id)minorTypefaceForScript:(id)script;	// 0x328eff79
@end

