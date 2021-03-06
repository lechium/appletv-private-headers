/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPImageCacheRequest.h"

@class MPAVItem;

@interface MPAVItemImageCacheRequest : MPImageCacheRequest {
	MPAVItem *_item;	// 60 = 0x3c
	XXStruct_pwHToB _imageTime;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) MPAVItem *AVItem;	// G=0x35bd9609; @synthesize=_item
@property(readonly, assign, nonatomic) XXStruct_pwHToB imageTime;	// G=0x35bd9619; @synthesize=_imageTime
- (id)init;	// 0x35bd91bd
- (id)initWithAVItem:(id)avitem imageTime:(XXStruct_pwHToB)time;	// 0x35bd9215
// declared property getter: - (id)AVItem;	// 0x35bd9609
- (id)copyRawImageReturningError:(id *)error;	// 0x35bd9395
- (void)dealloc;	// 0x35bd9349
// declared property getter: - (XXStruct_pwHToB)imageTime;	// 0x35bd9619
@end

