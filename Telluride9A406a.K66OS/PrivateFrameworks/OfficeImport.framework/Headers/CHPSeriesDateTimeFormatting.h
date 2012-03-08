/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHPSeriesDateTimeFormatting : EDProcessor {
}
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x329909a1
- (bool)isDateTimeFomrattingInData:(id)data;	// 0x32990a9d
- (bool)isDateTimeFormattingInContentFormatString:(id)contentFormatString edCell:(EDCellHeader *)cell;	// 0x32990c15
- (bool)isObjectSupported:(id)supported;	// 0x3298bfbd
@end

