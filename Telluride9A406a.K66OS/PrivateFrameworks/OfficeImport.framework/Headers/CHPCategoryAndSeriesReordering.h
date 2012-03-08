/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"


__attribute__((visibility("hidden")))
@interface CHPCategoryAndSeriesReordering : EDProcessor {
}
- (void)applyCategoryReorderingPreprocessor:(id)preprocessor;	// 0x32a1b73d
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x32990591
- (void)applySeriesReorderingPreprocessor:(id)preprocessor;	// 0x32a839a9
- (bool)isObjectSupported:(id)supported;	// 0x3298cb31
- (bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)seriesReorderingPreprocessor isCategoryOrderReversed:(bool)reversed;	// 0x329907ad
- (void)reorderCategoryAndSeries:(id)series sheet:(id)sheet clearAxisReversedFlag:(bool)flag;	// 0x329905b5
- (void)reorderData:(id)data dataPointCount:(unsigned)count byRow:(bool)row;	// 0x32a1b8b9
- (void)reorderDataFormula:(id)formula dataPointCount:(unsigned)count byRow:(bool)row;	// 0x32a1b99d
- (void)reorderDataValues:(id)values dataPointCount:(unsigned)count;	// 0x32a1b931
- (void)reorderSeriesCategory:(id)category dataPointCount:(unsigned)count byRow:(bool)row;	// 0x32a1b831
- (void)reorderValueProperties:(id)properties dataPointCount:(unsigned)count;	// 0x32a1bbc9
@end

