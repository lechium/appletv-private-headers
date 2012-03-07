/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData, GMMGeometry;

__attribute__((visibility("hidden")))
@interface GMMOffsetPolyline : PBCodable {
	GMMGeometry *_absolutePoint;	// 4 = 0x4
	NSData *_relativePoints;	// 8 = 0x8
}
@property(retain, nonatomic) GMMGeometry *absolutePoint;	// G=0x35b93821; S=0x35b93831; @synthesize=_absolutePoint
@property(readonly, assign, nonatomic) BOOL hasRelativePoints;	// G=0x35b934bd; 
@property(retain, nonatomic) NSData *relativePoints;	// G=0x35b93855; S=0x35b93865; @synthesize=_relativePoints
// declared property getter: - (id)absolutePoint;	// 0x35b93821
- (void)dealloc;	// 0x35b93465
- (id)description;	// 0x35b934d5
- (id)dictionaryRepresentation;	// 0x35b93545
// declared property getter: - (BOOL)hasRelativePoints;	// 0x35b934bd
- (BOOL)readFrom:(id)from;	// 0x35b935c5
// declared property getter: - (id)relativePoints;	// 0x35b93855
// declared property setter: - (void)setAbsolutePoint:(id)point;	// 0x35b93831
// declared property setter: - (void)setRelativePoints:(id)points;	// 0x35b93865
- (void)writeTo:(id)to;	// 0x35b93769
@end
