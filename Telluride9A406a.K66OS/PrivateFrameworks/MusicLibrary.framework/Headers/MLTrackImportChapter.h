/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSData, NSURL, NSString;

@interface MLTrackImportChapter : NSObject <NSCopying> {
@private
	NSData *_imageData;	// 4 = 0x4
	NSString *_imageCacheKey;	// 8 = 0x8
	unsigned _startTimeInMilliseconds;	// 12 = 0xc
	NSString *_title;	// 16 = 0x10
	NSURL *_url;	// 20 = 0x14
	NSString *_urlTitle;	// 24 = 0x18
}
@property(copy, nonatomic) NSURL *URL;	// G=0x364e784d; S=0x364e785d; @synthesize=_url
@property(copy, nonatomic) NSString *URLTitle;	// G=0x364e7881; S=0x364e7891; @synthesize=_urlTitle
@property(copy, nonatomic) NSString *imageCacheKey;	// G=0x364e78b5; S=0x364e78c5; @synthesize=_imageCacheKey
@property(copy, nonatomic) NSData *imageData;	// G=0x364e77c5; S=0x364e77d5; @synthesize=_imageData
@property(assign, nonatomic) unsigned startTimeInMilliseconds;	// G=0x364e77f9; S=0x364e7809; @synthesize=_startTimeInMilliseconds
@property(copy, nonatomic) NSString *title;	// G=0x364e7819; S=0x364e7829; @synthesize=_title
// declared property getter: - (id)URL;	// 0x364e784d
// declared property getter: - (id)URLTitle;	// 0x364e7881
- (int)compare:(id)compare;	// 0x364e7675
- (id)copyWithZone:(NSZone *)zone;	// 0x364e7589
- (void)dealloc;	// 0x364e7111
- (id)description;	// 0x364e71ad
// declared property getter: - (id)imageCacheKey;	// 0x364e78b5
// declared property getter: - (id)imageData;	// 0x364e77c5
- (BOOL)isEqualIgnoringTimesAndTitle:(id)title;	// 0x364e76ad
// declared property setter: - (void)setImageCacheKey:(id)key;	// 0x364e78c5
// declared property setter: - (void)setImageData:(id)data;	// 0x364e77d5
// declared property setter: - (void)setStartTimeInMilliseconds:(unsigned)milliseconds;	// 0x364e7809
// declared property setter: - (void)setTitle:(id)title;	// 0x364e7829
// declared property setter: - (void)setURL:(id)url;	// 0x364e785d
// declared property setter: - (void)setURLTitle:(id)title;	// 0x364e7891
// declared property getter: - (unsigned)startTimeInMilliseconds;	// 0x364e77f9
// declared property getter: - (id)title;	// 0x364e7819
@end

