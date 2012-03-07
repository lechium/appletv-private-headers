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
@property(copy, nonatomic) NSURL *URL;	// G=0x30e278c5; S=0x30e278d5; @synthesize=_url
@property(copy, nonatomic) NSString *URLTitle;	// G=0x30e278f9; S=0x30e27909; @synthesize=_urlTitle
@property(copy, nonatomic) NSString *imageCacheKey;	// G=0x30e2792d; S=0x30e2793d; @synthesize=_imageCacheKey
@property(copy, nonatomic) NSData *imageData;	// G=0x30e2783d; S=0x30e2784d; @synthesize=_imageData
@property(assign, nonatomic) unsigned startTimeInMilliseconds;	// G=0x30e27871; S=0x30e27881; @synthesize=_startTimeInMilliseconds
@property(copy, nonatomic) NSString *title;	// G=0x30e27891; S=0x30e278a1; @synthesize=_title
// declared property getter: - (id)URL;	// 0x30e278c5
// declared property getter: - (id)URLTitle;	// 0x30e278f9
- (int)compare:(id)compare;	// 0x30e276ed
- (id)copyWithZone:(NSZone *)zone;	// 0x30e27601
- (void)dealloc;	// 0x30e27189
- (id)description;	// 0x30e27225
// declared property getter: - (id)imageCacheKey;	// 0x30e2792d
// declared property getter: - (id)imageData;	// 0x30e2783d
- (BOOL)isEqualIgnoringTimesAndTitle:(id)title;	// 0x30e27725
// declared property setter: - (void)setImageCacheKey:(id)key;	// 0x30e2793d
// declared property setter: - (void)setImageData:(id)data;	// 0x30e2784d
// declared property setter: - (void)setStartTimeInMilliseconds:(unsigned)milliseconds;	// 0x30e27881
// declared property setter: - (void)setTitle:(id)title;	// 0x30e278a1
// declared property setter: - (void)setURL:(id)url;	// 0x30e278d5
// declared property setter: - (void)setURLTitle:(id)title;	// 0x30e27909
// declared property getter: - (unsigned)startTimeInMilliseconds;	// 0x30e27871
// declared property getter: - (id)title;	// 0x30e27891
@end
