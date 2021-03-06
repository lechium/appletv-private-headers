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
- (void)addAssociatedPresentation:(id)presentation;	// 0x31850a1d
- (void)addPresentation:(id)presentation order:(unsigned)order;	// 0x31850751
- (void)dealloc;	// 0x31854d51
- (id)presentations;	// 0x31852ee5
@end

