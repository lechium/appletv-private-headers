/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDWPBlockList.h"
#import "iWorkImport-Structs.h"

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPLayout : GQDWPBlockList {
@private
	GQDSStyle *mLayoutStyle;	// 8 = 0x8
}
- (void)dealloc;	// 0x32be8515
- (id)layoutStyle;	// 0x32be84b5
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x32be8561
@end

