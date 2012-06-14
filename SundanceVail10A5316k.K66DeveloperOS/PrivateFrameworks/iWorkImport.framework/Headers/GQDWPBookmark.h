/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPInlineList.h"


__attribute__((visibility("hidden")))
@interface GQDWPBookmark : GQDWPInlineList {
@private
	CFStringRef mName;	// 8 = 0x8
	BOOL mRanged;	// 12 = 0xc
	BOOL mHidden;	// 13 = 0xd
}
- (void)dealloc;	// 0x36c5d455
- (BOOL)isHidden;	// 0x36c5d4b9
- (BOOL)isRanged;	// 0x36c5d4a9
- (CFStringRef)name;	// 0x36c5d499
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x36c5d4c9
@end

