/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class EDSheet, EBReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : NSObject {
@private
	EBReaderState *mReaderState;	// 4 = 0x4
	EDSheet *mEDSheet;	// 8 = 0x8
	CFDictionaryRef mSharedFormulas;	// 12 = 0xc
	unsigned mChartIndex;	// 16 = 0x10
}
- (id)initWithReaderState:(id)readerState;	// 0x319e35b5
- (void)dealloc;	// 0x318e4dcd
- (id)edSheet;	// 0x318c9d55
- (unsigned)nextChartIndex;	// 0x31a26a31
- (id)readerState;	// 0x318c5edd
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x318d9181
- (id)resources;	// 0x318cbdfd
- (void)setEDSheet:(id)sheet;	// 0x318c5f01
- (void)setSharedFormulaIndex:(unsigned)index forRowCol:(int)rowCol;	// 0x31af1b91
- (unsigned)sharedFormulaIndexForRowCol:(int)rowCol;	// 0x31af1b79
- (id)workbook;	// 0x31a11fa9
- (XlBinaryReader *)xlReader;	// 0x318c60d9
@end

