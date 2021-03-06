/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class NSMutableArray, WDDocument;

@interface WDListTable : NSObject {
	NSMutableArray *mLists;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
}
- (id)initWithDocument:(id)document;	// 0x31733979
- (id)addList:(id)list;	// 0x31743dc5
- (void)dealloc;	// 0x31771ad9
- (id)document;	// 0x31743d85
- (id)listAt:(unsigned)at;	// 0x317629c9
- (unsigned)listCount;	// 0x31762929
- (id)lists;	// 0x31943bd9
@end

