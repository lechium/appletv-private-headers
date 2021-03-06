/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDDataPoint : ODDPoint {
@private
	NSMutableArray *mPresentations;	// 20 = 0x14
}
- (void)addAssociatedPresentation:(id)presentation;	// 0x32c8cec9
- (void)addPresentation:(id)presentation order:(unsigned long)order;	// 0x32c8cc29
- (void)dealloc;	// 0x32c90b19
- (id)presentations;	// 0x32c8f289
@end

