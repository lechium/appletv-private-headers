/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OCDDelayedNodeContext.h"

@class EBReaderSheetState;

@interface EBSheetContext : NSObject <OCDDelayedNodeContext> {
	EBReaderSheetState *mSheetState;	// 4 = 0x4
	unsigned mSheetIndex;	// 8 = 0x8
}
- (id)initWithSheetIndex:(unsigned)sheetIndex state:(id)state;	// 0x36f9f631
- (void)dealloc;	// 0x36fb420d
- (bool)loadDelayedNode:(id)node;	// 0x36fa02f1
@end
