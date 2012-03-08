/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import "MFBaseFilterDataConsumer.h"


@interface MFRangedDataFilter : MFBaseFilterDataConsumer {
	NSRange _range;	// 12 = 0xc
	unsigned _consumedLength;	// 20 = 0x14
}
@property(assign, nonatomic) NSRange range;	// G=0x325b056d; S=0x325b0589; @synthesize=_range
+ (id)rangedFilterWithConsumer:(id)consumer range:(NSRange)range;	// 0x325b0931
+ (id)rangedFilterWithConsumers:(id)consumers range:(NSRange)range;	// 0x325b08f9
- (int)appendData:(id)data;	// 0x325b0e1d
// declared property getter: - (NSRange)range;	// 0x325b056d
// declared property setter: - (void)setRange:(NSRange)range;	// 0x325b0589
@end

