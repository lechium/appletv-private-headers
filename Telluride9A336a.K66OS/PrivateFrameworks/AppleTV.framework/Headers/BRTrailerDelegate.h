/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSXMLParser, NSMutableArray, BRResolution, BRMovieTrailer, BRMovieTrailersProvider;

__attribute__((visibility("hidden")))
@interface BRTrailerDelegate : BRBaseParserDelegate {
@private
	BRMovieTrailersProvider *_provider;	// 12 = 0xc
	BRMovieTrailer *_movieTrailer;	// 16 = 0x10
	NSMutableArray *_elementCollection;	// 20 = 0x14
	BRResolution *_resolution;	// 24 = 0x18
	NSXMLParser *_parser;	// 28 = 0x1c
}
- (id)initWithMediaProvider:(id)mediaProvider resolution:(id)resolution;	// 0x33b42f81
- (void)dealloc;	// 0x33b43005
- (void)endCast;	// 0x33b43671
- (void)endCopyright;	// 0x33b434b1
- (void)endDescription;	// 0x33b43559
- (void)endDirector;	// 0x33b43505
- (void)endGenre;	// 0x33b43715
- (void)endLarge;	// 0x33b4394d
- (void)endLocation;	// 0x33b4385d
- (void)endMovieinfo;	// 0x33b43169
- (void)endName;	// 0x33b435c9
- (void)endPostdate;	// 0x33b43409
- (void)endPoster;	// 0x33b43905
- (void)endRating;	// 0x33b43361
- (void)endReleasedate;	// 0x33b4345d
- (void)endRuntime;	// 0x33b4330d
- (void)endStudio;	// 0x33b433b5
- (void)endTitle;	// 0x33b4328d
- (void)endXlarge;	// 0x33b438b1
- (void)setWeakReferenceToParser:(id)parser;	// 0x33b4308d
- (void)startCastWithAttributes:(id)attributes;	// 0x33b43619
- (void)startGenreWithAttributes:(id)attributes;	// 0x33b436bd
- (void)startMovieinfoWithAttributes:(id)attributes;	// 0x33b4309d
@end
