/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject {
@private
	NSData *_imageData;	// 4 = 0x4
	unsigned _time;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	NSURL *_url;	// 16 = 0x10
	NSString *_urlTitle;	// 20 = 0x14
	unsigned _startTimeInMilliseconds;	// 24 = 0x18
}
@property(copy, nonatomic) NSURL *URL;	// G=0x3182aac9; S=0x3182b491; @synthesize=_url
@property(copy, nonatomic) NSString *URLTitle;	// G=0x3182aab9; S=0x3182b4bd; @synthesize=_urlTitle
@property(copy, nonatomic) NSData *imageData;	// G=0x3182ab09; S=0x3182b439; @synthesize=_imageData
@property(assign, nonatomic) unsigned startTimeInMilliseconds;	// G=0x3182aae9; S=0x3182aaf9; @synthesize=_startTimeInMilliseconds
@property(copy, nonatomic) NSString *title;	// G=0x3182aad9; S=0x3182b465; @synthesize=_title
// declared property getter: - (id)URL;	// 0x3182aac9
// declared property getter: - (id)URLTitle;	// 0x3182aab9
- (int)compare:(id)compare;	// 0x3182ab19
- (void)dealloc;	// 0x3182b2a5
// declared property getter: - (id)imageData;	// 0x3182ab09
// declared property setter: - (void)setImageData:(id)data;	// 0x3182b439
// declared property setter: - (void)setStartTimeInMilliseconds:(unsigned)milliseconds;	// 0x3182aaf9
// declared property setter: - (void)setTitle:(id)title;	// 0x3182b465
// declared property setter: - (void)setURL:(id)url;	// 0x3182b491
// declared property setter: - (void)setURLTitle:(id)title;	// 0x3182b4bd
// declared property getter: - (unsigned)startTimeInMilliseconds;	// 0x3182aae9
// declared property getter: - (id)title;	// 0x3182aad9
@end

