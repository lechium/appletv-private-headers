/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"


@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
@private
	short _alternateGroupID;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x3672f4ed
- (id)initWithURL:(id)url fileType:(id)type;	// 0x3672f6bd
- (BOOL)_canAddInput:(id)input exceptionReason:(id *)reason;	// 0x3672f8d5
- (BOOL)_canAddInputGroup:(id)group exceptionReason:(id *)reason;	// 0x3672fab5
- (void)addInput:(id)input;	// 0x3672f989
- (void)addInputGroup:(id)group;	// 0x3672fd25
- (BOOL)canAddInput:(id)input;	// 0x3672f971
- (BOOL)canAddInputGroup:(id)group;	// 0x3672fd0d
- (void)cancelWriting;	// 0x3672ffed
- (void)setMetadata:(id)metadata;	// 0x3672f87d
- (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x3672f809
- (void)setMovieTimeScale:(int)scale;	// 0x3672f8a9
- (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3672f851
- (void)startWriting;	// 0x3672ff31
- (int)status;	// 0x3672f805
@end

