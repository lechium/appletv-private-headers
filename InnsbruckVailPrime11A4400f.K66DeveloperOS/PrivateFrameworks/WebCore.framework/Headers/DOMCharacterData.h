/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString;

@interface DOMCharacterData : DOMNode {
}
@property(copy) NSString *data;	// G=0x33014f2d; S=0x3315be2d; 
@property(readonly, assign) unsigned length;	// G=0x3315bf65; 
- (void)appendData:(id)data;	// 0x3315c239
// declared property getter: - (id)data;	// 0x33014f2d
- (void)deleteData:(unsigned)data :(unsigned)arg2;	// 0x3315c6e9
- (void)deleteData:(unsigned)data length:(unsigned)length;	// 0x3315c5e9
- (void)insertData:(unsigned)data :(id)arg2;	// 0x3315c4ad
- (void)insertData:(unsigned)data data:(id)data2;	// 0x3315c371
// declared property getter: - (unsigned)length;	// 0x3315bf65
- (void)remove;	// 0x3315ca69
- (void)replaceData:(unsigned)data :(unsigned)arg2 :(id)arg3;	// 0x3315c929
- (void)replaceData:(unsigned)data length:(unsigned)length data:(id)data3;	// 0x3315c7e9
// declared property setter: - (void)setData:(id)data;	// 0x3315be2d
- (id)substringData:(unsigned)data :(unsigned)arg2;	// 0x3315c0e9
- (id)substringData:(unsigned)data length:(unsigned)length;	// 0x3315bf99
@end

