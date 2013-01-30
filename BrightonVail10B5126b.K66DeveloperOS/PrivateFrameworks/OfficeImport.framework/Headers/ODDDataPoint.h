/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

@interface ODDDataPoint : ODDPoint {
	NSMutableArray *mPresentations;	// 20 = 0x14
}
- (void)addAssociatedPresentation:(id)presentation;	// 0x3495f771
- (void)addPresentation:(id)presentation order:(unsigned long)order;	// 0x3495f4a5
- (void)dealloc;	// 0x3496566d
- (id)presentations;	// 0x34962d29
@end
