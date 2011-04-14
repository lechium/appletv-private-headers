/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EMSheetMapper.h"

@class EDChartSheet;

__attribute__((visibility("hidden")))
@interface EMChartsheetMapper : EMSheetMapper {
@private
	EDChartSheet *mChartSheet;	// 8 = 0x8
	CGRect mBox;	// 12 = 0xc
}
- (id)initWithChartSheet:(id)chartSheet parent:(id)parent;	// 0x31a1a169
- (void)mapAt:(id)at withState:(id)state;	// 0x31a1a1e9
- (int)preprocessHeightWithState:(id)state;	// 0x31a6fcdd
- (int)preprocessWidthWithState:(id)state;	// 0x31a6fd0d
- (int)width;	// 0x31a23a15
@end

