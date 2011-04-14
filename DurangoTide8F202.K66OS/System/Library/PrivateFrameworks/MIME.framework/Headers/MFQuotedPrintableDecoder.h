/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {
	unsigned char _lastEncoded;	// 9 = 0x9
	unsigned _required;	// 12 = 0xc
	BOOL _forTextPart;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL forTextPart;	// G=0x346b8f05; S=0x346b8f15; @synthesize=_forTextPart
- (int)appendData:(id)data;	// 0x346b9681
- (void)done;	// 0x346b8f25
// declared property getter: - (BOOL)forTextPart;	// 0x346b8f05
// declared property setter: - (void)setForTextPart:(BOOL)textPart;	// 0x346b8f15
@end

