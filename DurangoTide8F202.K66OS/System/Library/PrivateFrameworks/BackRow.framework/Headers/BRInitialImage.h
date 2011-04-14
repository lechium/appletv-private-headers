/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRImage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BRInitialImage : BRImage {
@private
	NSData *_data;	// 40 = 0x28
}
+ (id)initialImageWithData:(id)data;	// 0x3295b0c5
- (void)dealloc;	// 0x3295c469
- (void)purgeRawData;	// 0x3295b09d
- (id)rawData;	// 0x3295b08d
@end

