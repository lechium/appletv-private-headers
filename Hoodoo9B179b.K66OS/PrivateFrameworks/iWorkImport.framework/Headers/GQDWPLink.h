/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPInlineList.h"

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPLink : GQDWPInlineList {
@private
	GQDSStyle *mCharStyle;	// 8 = 0x8
	CFStringRef mHref;	// 12 = 0xc
}
- (id)characterStyle;	// 0x3598c341
- (void)dealloc;	// 0x3598c529
- (CFStringRef)href;	// 0x3598c351
- (int)readStyleFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x3598c58d
@end

