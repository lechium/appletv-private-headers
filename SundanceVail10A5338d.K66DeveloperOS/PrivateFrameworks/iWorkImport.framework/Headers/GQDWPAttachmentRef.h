/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDWPAttachment.h"

@class GQDRoot;

@interface GQDWPAttachmentRef : GQDWPAttachment {
	GQDRoot *mRoot;	// 8 = 0x8
	char *mUID;	// 12 = 0xc
}
- (id)initWithUID:(char *)uid root:(id)root;	// 0x3508e255
- (void)dealloc;	// 0x3508e2c1
- (id)drawable;	// 0x3508e32d
@end

