/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ECCurrencyEntry : NSObject {
@private
	NSString *mLassoCurrencyCode;	// 4 = 0x4
	NSString *mXlLangId;	// 8 = 0x8
	NSString *mXlCurrencySymbol;	// 12 = 0xc
	bool mAppliesToExport;	// 16 = 0x10
	int mXlAccountingFormat;	// 20 = 0x14
}
+ (id)currencyWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol;	// 0x32a74f0d
+ (id)currencyWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol accountingFormat:(int)format;	// 0x32a74edd
+ (id)currencyWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol isExport:(bool)export;	// 0x32a74eb1
+ (id)currencyWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol isExport:(bool)export accountingFormat:(int)format;	// 0x32a74e4d
- (id)initWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol isExport:(bool)export accountingFormat:(int)format;	// 0x32a74fb1
- (void)dealloc;	// 0x32a74f3d
@end
