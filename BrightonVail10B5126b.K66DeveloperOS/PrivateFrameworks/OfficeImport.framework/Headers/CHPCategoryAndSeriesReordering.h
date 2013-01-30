/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"


@interface CHPCategoryAndSeriesReordering : EDProcessor {
}
- (void)applyCategoryReorderingPreprocessor:(id)preprocessor;	// 0x349f4539
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x349786cd
- (void)applySeriesReorderingPreprocessor:(id)preprocessor;	// 0x349f4351
- (bool)isObjectSupported:(id)supported;	// 0x34976609
- (bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)seriesReorderingPreprocessor isCategoryOrderReversed:(bool)reversed;	// 0x3497891d
- (void)reorderCategoryAndSeries:(id)series sheet:(id)sheet clearAxisReversedFlag:(bool)flag;	// 0x349786f1
- (void)reorderData:(id)data dataPointCount:(unsigned)count byRow:(bool)row;	// 0x349f47d1
- (void)reorderDataFormula:(id)formula dataPointCount:(unsigned)count byRow:(bool)row;	// 0x349f48bd
- (void)reorderDataValues:(id)values dataPointCount:(unsigned)count;	// 0x349f4845
- (void)reorderSeriesCategory:(id)category dataPointCount:(unsigned)count byRow:(bool)row;	// 0x349f4645
- (void)reorderValueProperties:(id)properties dataPointCount:(unsigned)count;	// 0x349f46d5
@end
