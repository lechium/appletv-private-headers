/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class EDString, EDStyle;

@interface EMCellTextMapper : CMMapper {
	EDString *edString;	// 8 = 0x8
	EDStyle *edStyle;	// 12 = 0xc
}
- (id)initWithEDString:(id)edstring style:(id)style parent:(id)parent;	// 0x34f15d31
- (double)contentWidth;	// 0x34f16331
- (void)mapAt:(id)at withState:(id)state columnWidth:(double)width height:(double)height spreadLeft:(BOOL)left;	// 0x34f15d81
- (void)mapTextRunsAt:(id)at;	// 0x34f1fae1
- (void)mapVerticalTextAt:(id)at withState:(id)state width:(double)width height:(double)height;	// 0x34ffc619
@end
