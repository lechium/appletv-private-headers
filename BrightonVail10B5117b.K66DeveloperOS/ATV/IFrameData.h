/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface IFrameData : XXUnknownSuperclass {
	unsigned char flags_;	// 4 = 0x4
	unsigned short entryCount_;	// 6 = 0x6
	NSMutableArray *iFrameIndexObjects_;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned short entryCount;	// G=0x509bb9; S=0x509bc9; @synthesize=entryCount_
@property(assign, nonatomic) unsigned char flags;	// G=0x509b99; S=0x509ba9; @synthesize=flags_
@property(retain, nonatomic) NSMutableArray *iFrameIndexObjects;	// G=0x509bd9; S=0x509be9; @synthesize=iFrameIndexObjects_
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x509955
- (void)dealloc;	// 0x509b49
// declared property getter: - (unsigned short)entryCount;	// 0x509bb9
// declared property getter: - (unsigned char)flags;	// 0x509b99
// declared property getter: - (id)iFrameIndexObjects;	// 0x509bd9
// declared property setter: - (void)setEntryCount:(unsigned short)count;	// 0x509bc9
// declared property setter: - (void)setFlags:(unsigned char)flags;	// 0x509ba9
// declared property setter: - (void)setIFrameIndexObjects:(id)objects;	// 0x509be9
@end
