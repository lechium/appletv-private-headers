/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableString, NSMutableArray;

@interface PptTextBlock : NSObject {
	PptTextHeaderAtom *mTextHeader;	// 4 = 0x4
	NSMutableString *mText;	// 8 = 0x8
	PptTextBlockStylingAtom *mStyleText;	// 12 = 0xc
	NSMutableArray *mMetaCharacterFields;	// 16 = 0x10
	NSMutableArray *mBookmarks;	// 20 = 0x14
	NSMutableArray *mHyperlinks;	// 24 = 0x18
	PptTextRulerAtom *mTextRuler;	// 28 = 0x1c
}
- (id)init;	// 0x3790db79
- (id)bookmarks;	// 0x37b22581
- (PptCharRun *)characterRunAtIndex:(int)index;	// 0x37910119
- (int)characterRunCount;	// 0x3790e61d
- (void)dealloc;	// 0x3790f2dd
- (id)hyperlinks;	// 0x3790e635
- (id)metaCharacterFields;	// 0x3790e645
- (PptParaRun *)paragraphRunAtIndex:(int)index;	// 0x3790e5ed
- (int)paragraphRunCount;	// 0x3790e5d5
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)hyperlinks;	// 0x3790dfa9
- (void)readString:(id)string;	// 0x3790dda9
- (void)readStyles:(id)styles;	// 0x3790df21
- (void)readTextBlock:(id)block;	// 0x3790dc81
- (id)text;	// 0x3790e2b1
- (unsigned long)textIndex;	// 0x37b22569
- (PptTextRulerAtom *)textRuler;	// 0x3790e28d
- (int)textType;	// 0x3790e29d
- (void)writeTextBlock:(id)block;	// 0x37b22565
@end

