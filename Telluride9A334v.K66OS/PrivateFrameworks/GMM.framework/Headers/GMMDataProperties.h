/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapPoint, NSString;

@interface GMMDataProperties : PBCodable {
	BOOL _hasDisabled;	// 4 = 0x4
	BOOL _disabled;	// 5 = 0x5
	BOOL _hasInfoLevel;	// 6 = 0x6
	int _infoLevel;	// 8 = 0x8
	BOOL _hasInfoValue;	// 12 = 0xc
	int _infoValue;	// 16 = 0x10
	int _imageWidth;	// 20 = 0x14
	int _imageHeight;	// 24 = 0x18
	BOOL _hasTileWidth;	// 28 = 0x1c
	int _tileWidth;	// 32 = 0x20
	BOOL _hasTileHeight;	// 36 = 0x24
	int _tileHeight;	// 40 = 0x28
	NSString *_panoId;	// 44 = 0x2c
	BOOL _hasNumZoomLevels;	// 48 = 0x30
	int _numZoomLevels;	// 52 = 0x34
	GMMMapPoint *_latLon;	// 56 = 0x38
	NSString *_copyright;	// 60 = 0x3c
	NSString *_text;	// 64 = 0x40
	NSString *_streetRange;	// 68 = 0x44
	int _maxZoomLevel;	// 72 = 0x48
	int _radius;	// 76 = 0x4c
	BOOL _hasImageSource;	// 80 = 0x50
	int _imageSource;	// 84 = 0x54
	BOOL _hasScene;	// 88 = 0x58
	int _scene;	// 92 = 0x5c
}
@property(retain, nonatomic) NSString *copyright;	// G=0x35b7c335; S=0x35b7d04d; @synthesize=_copyright
@property(assign, nonatomic) BOOL disabled;	// G=0x35b7c161; S=0x35b7c185; @synthesize=_disabled
@property(readonly, assign, nonatomic) BOOL hasCopyright;	// G=0x35b7c31d; 
@property(assign, nonatomic) BOOL hasDisabled;	// G=0x35b7cee5; S=0x35b7cef5; @synthesize=_hasDisabled
@property(assign, nonatomic) BOOL hasImageSource;	// G=0x35b7d0f9; S=0x35b7d109; @synthesize=_hasImageSource
@property(assign, nonatomic) BOOL hasInfoLevel;	// G=0x35b7cf05; S=0x35b7cf15; @synthesize=_hasInfoLevel
@property(assign, nonatomic) BOOL hasInfoValue;	// G=0x35b7cf25; S=0x35b7cf35; @synthesize=_hasInfoValue
@property(assign, nonatomic) BOOL hasNumZoomLevels;	// G=0x35b7cff9; S=0x35b7d009; @synthesize=_hasNumZoomLevels
@property(assign, nonatomic) BOOL hasScene;	// G=0x35b7d119; S=0x35b7d129; @synthesize=_hasScene
@property(readonly, assign, nonatomic) BOOL hasStreetRange;	// G=0x35b7c38d; 
@property(readonly, assign, nonatomic) BOOL hasText;	// G=0x35b7c355; 
@property(assign, nonatomic) BOOL hasTileHeight;	// G=0x35b7cfa5; S=0x35b7cfb5; @synthesize=_hasTileHeight
@property(assign, nonatomic) BOOL hasTileWidth;	// G=0x35b7cf85; S=0x35b7cf95; @synthesize=_hasTileWidth
@property(assign, nonatomic) int imageHeight;	// G=0x35b7cf65; S=0x35b7cf75; @synthesize=_imageHeight
@property(assign, nonatomic) int imageSource;	// G=0x35b7c3c5; S=0x35b7c3e9; @synthesize=_imageSource
@property(assign, nonatomic) int imageWidth;	// G=0x35b7cf45; S=0x35b7cf55; @synthesize=_imageWidth
@property(assign, nonatomic) int infoLevel;	// G=0x35b7c1a9; S=0x35b7c1cd; @synthesize=_infoLevel
@property(assign, nonatomic) int infoValue;	// G=0x35b7c1f1; S=0x35b7c219; @synthesize=_infoValue
@property(retain, nonatomic) GMMMapPoint *latLon;	// G=0x35b7d019; S=0x35b7d029; @synthesize=_latLon
@property(assign, nonatomic) int maxZoomLevel;	// G=0x35b7d0b9; S=0x35b7d0c9; @synthesize=_maxZoomLevel
@property(assign, nonatomic) int numZoomLevels;	// G=0x35b7c2d5; S=0x35b7c2f9; @synthesize=_numZoomLevels
@property(retain, nonatomic) NSString *panoId;	// G=0x35b7cfc5; S=0x35b7cfd5; @synthesize=_panoId
@property(assign, nonatomic) int radius;	// G=0x35b7d0d9; S=0x35b7d0e9; @synthesize=_radius
@property(assign, nonatomic) int scene;	// G=0x35b7c40d; S=0x35b7c431; @synthesize=_scene
@property(retain, nonatomic) NSString *streetRange;	// G=0x35b7c3a5; S=0x35b7d095; @synthesize=_streetRange
@property(retain, nonatomic) NSString *text;	// G=0x35b7c36d; S=0x35b7d071; @synthesize=_text
@property(assign, nonatomic) int tileHeight;	// G=0x35b7c289; S=0x35b7c2b1; @synthesize=_tileHeight
@property(assign, nonatomic) int tileWidth;	// G=0x35b7c23d; S=0x35b7c265; @synthesize=_tileWidth
// declared property getter: - (id)copyright;	// 0x35b7c335
- (void)dealloc;	// 0x35b7c0cd
- (id)description;	// 0x35b7c455
- (id)dictionaryRepresentation;	// 0x35b7c4c5
// declared property getter: - (BOOL)disabled;	// 0x35b7c161
// declared property getter: - (BOOL)hasCopyright;	// 0x35b7c31d
// declared property getter: - (BOOL)hasDisabled;	// 0x35b7cee5
// declared property getter: - (BOOL)hasImageSource;	// 0x35b7d0f9
// declared property getter: - (BOOL)hasInfoLevel;	// 0x35b7cf05
// declared property getter: - (BOOL)hasInfoValue;	// 0x35b7cf25
// declared property getter: - (BOOL)hasNumZoomLevels;	// 0x35b7cff9
// declared property getter: - (BOOL)hasScene;	// 0x35b7d119
// declared property getter: - (BOOL)hasStreetRange;	// 0x35b7c38d
// declared property getter: - (BOOL)hasText;	// 0x35b7c355
// declared property getter: - (BOOL)hasTileHeight;	// 0x35b7cfa5
// declared property getter: - (BOOL)hasTileWidth;	// 0x35b7cf85
// declared property getter: - (int)imageHeight;	// 0x35b7cf65
// declared property getter: - (int)imageSource;	// 0x35b7c3c5
// declared property getter: - (int)imageWidth;	// 0x35b7cf45
// declared property getter: - (int)infoLevel;	// 0x35b7c1a9
// declared property getter: - (int)infoValue;	// 0x35b7c1f1
// declared property getter: - (id)latLon;	// 0x35b7d019
// declared property getter: - (int)maxZoomLevel;	// 0x35b7d0b9
// declared property getter: - (int)numZoomLevels;	// 0x35b7c2d5
// declared property getter: - (id)panoId;	// 0x35b7cfc5
// declared property getter: - (int)radius;	// 0x35b7d0d9
- (BOOL)readFrom:(id)from;	// 0x35b7c8b5
// declared property getter: - (int)scene;	// 0x35b7c40d
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x35b7d04d
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x35b7c185
// declared property setter: - (void)setHasDisabled:(BOOL)disabled;	// 0x35b7cef5
// declared property setter: - (void)setHasImageSource:(BOOL)source;	// 0x35b7d109
// declared property setter: - (void)setHasInfoLevel:(BOOL)level;	// 0x35b7cf15
// declared property setter: - (void)setHasInfoValue:(BOOL)value;	// 0x35b7cf35
// declared property setter: - (void)setHasNumZoomLevels:(BOOL)levels;	// 0x35b7d009
// declared property setter: - (void)setHasScene:(BOOL)scene;	// 0x35b7d129
// declared property setter: - (void)setHasTileHeight:(BOOL)height;	// 0x35b7cfb5
// declared property setter: - (void)setHasTileWidth:(BOOL)width;	// 0x35b7cf95
// declared property setter: - (void)setImageHeight:(int)height;	// 0x35b7cf75
// declared property setter: - (void)setImageSource:(int)source;	// 0x35b7c3e9
// declared property setter: - (void)setImageWidth:(int)width;	// 0x35b7cf55
// declared property setter: - (void)setInfoLevel:(int)level;	// 0x35b7c1cd
// declared property setter: - (void)setInfoValue:(int)value;	// 0x35b7c219
// declared property setter: - (void)setLatLon:(id)lon;	// 0x35b7d029
// declared property setter: - (void)setMaxZoomLevel:(int)level;	// 0x35b7d0c9
// declared property setter: - (void)setNumZoomLevels:(int)levels;	// 0x35b7c2f9
// declared property setter: - (void)setPanoId:(id)anId;	// 0x35b7cfd5
// declared property setter: - (void)setRadius:(int)radius;	// 0x35b7d0e9
// declared property setter: - (void)setScene:(int)scene;	// 0x35b7c431
// declared property setter: - (void)setStreetRange:(id)range;	// 0x35b7d095
// declared property setter: - (void)setText:(id)text;	// 0x35b7d071
// declared property setter: - (void)setTileHeight:(int)height;	// 0x35b7c2b1
// declared property setter: - (void)setTileWidth:(int)width;	// 0x35b7c265
// declared property getter: - (id)streetRange;	// 0x35b7c3a5
// declared property getter: - (id)text;	// 0x35b7c36d
// declared property getter: - (int)tileHeight;	// 0x35b7c289
// declared property getter: - (int)tileWidth;	// 0x35b7c23d
- (void)writeTo:(id)to;	// 0x35b7cc01
@end

