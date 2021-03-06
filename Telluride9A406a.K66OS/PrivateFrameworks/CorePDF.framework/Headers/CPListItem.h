/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPDisposable.h"
#import "CorePDF-Structs.h"

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {
	CPList *list;	// 4 = 0x4
	int number;	// 8 = 0x8
	CFArrayRef paragraphs;	// 12 = 0xc
}
@property(retain, nonatomic) CPList *list;	// G=0x304c920d; S=0x304c9275; @synthesize
@property(assign, nonatomic) int number;	// G=0x304c91ed; S=0x304c91fd; @synthesize
- (id)init;	// 0x304c921d
- (void)addParagraph:(id)paragraph;	// 0x304c929d
- (void)dealloc;	// 0x304c935d
- (void)dispose;	// 0x304c93f9
- (void)finalize;	// 0x304c93b9
// declared property getter: - (id)list;	// 0x304c920d
// declared property getter: - (int)number;	// 0x304c91ed
- (id)paragraphAtIndex:(unsigned)index;	// 0x304c9335
- (unsigned)paragraphCount;	// 0x304c9349
// declared property setter: - (void)setList:(id)list;	// 0x304c9275
// declared property setter: - (void)setNumber:(int)number;	// 0x304c91fd
@end

