/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ECColumnWidthConvertor : NSObject {
@private
	int mMultiplier;	// 4 = 0x4
}
- (double)lassoColumnWidthFromXl:(double)xl;	// 0x318e8dc5
- (void)setupWithEDFont:(id)edfont state:(id)state;	// 0x318e8929
- (double)xlBaseColumnWidthFromXlColumnWidth:(double)xlColumnWidth;	// 0x31ada1a5
- (double)xlColumnWidthFromLasso:(double)lasso;	// 0x31ada181
- (double)xlColumnWidthFromXlBaseColumnWidth:(double)xlBaseColumnWidth;	// 0x318ca6c5
@end

