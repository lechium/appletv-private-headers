/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMOutgoingThumbnail : PBCodable {
	int _width;	// 4 = 0x4
	int _height;	// 8 = 0x8
}
@property(assign, nonatomic) int height;	// G=0x35bac1cd; S=0x35bac1dd; @synthesize=_height
@property(assign, nonatomic) int width;	// G=0x35bac1ad; S=0x35bac1bd; @synthesize=_width
- (void)dealloc;	// 0x35babf29
- (id)description;	// 0x35babf55
- (id)dictionaryRepresentation;	// 0x35babfc5
// declared property getter: - (int)height;	// 0x35bac1cd
- (BOOL)readFrom:(id)from;	// 0x35bac071
// declared property setter: - (void)setHeight:(int)height;	// 0x35bac1dd
// declared property setter: - (void)setWidth:(int)width;	// 0x35bac1bd
// declared property getter: - (int)width;	// 0x35bac1ad
- (void)writeTo:(id)to;	// 0x35bac165
@end
