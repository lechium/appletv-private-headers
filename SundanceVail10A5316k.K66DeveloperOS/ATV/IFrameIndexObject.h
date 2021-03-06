/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface IFrameIndexObject : XXUnknownSuperclass {
	unsigned chunk_;	// 4 = 0x4
	unsigned ptsOffset_;	// 8 = 0x8
	unsigned packetOffset_;	// 12 = 0xc
	unsigned short numPackets_;	// 16 = 0x10
}
@property(assign, nonatomic) unsigned chunk;	// G=0x4b162d; S=0x4b163d; @synthesize=chunk_
@property(assign, nonatomic) unsigned short numPackets;	// G=0x4b168d; S=0x4b169d; @synthesize=numPackets_
@property(assign, nonatomic) unsigned packetOffset;	// G=0x4b166d; S=0x4b167d; @synthesize=packetOffset_
@property(assign, nonatomic) unsigned ptsOffset;	// G=0x4b164d; S=0x4b165d; @synthesize=ptsOffset_
- (id)initWithChunk:(unsigned)chunk ptsOffset:(unsigned)offset packetOffset:(unsigned)offset3 numPackets:(unsigned short)packets;	// 0x4b1525
// declared property getter: - (unsigned)chunk;	// 0x4b162d
- (id)description;	// 0x4b1599
// declared property getter: - (unsigned short)numPackets;	// 0x4b168d
// declared property getter: - (unsigned)packetOffset;	// 0x4b166d
// declared property getter: - (unsigned)ptsOffset;	// 0x4b164d
// declared property setter: - (void)setChunk:(unsigned)chunk;	// 0x4b163d
// declared property setter: - (void)setNumPackets:(unsigned short)packets;	// 0x4b169d
// declared property setter: - (void)setPacketOffset:(unsigned)offset;	// 0x4b167d
// declared property setter: - (void)setPtsOffset:(unsigned)offset;	// 0x4b165d
@end

