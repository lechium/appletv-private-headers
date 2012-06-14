/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, AVAssetWriterConfigurationState, AVWeakReference, NSError, NSURL, NSArray;

@interface AVAssetWriterHelper : NSObject {
@private
	AVAssetWriterConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriter;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x367315e9; 
@property(readonly, assign, nonatomic) AVAssetWriterConfigurationState *configurationState;	// G=0x36732361; @synthesize=_configurationState
@property(readonly, assign, nonatomic) NSError *error;	// G=0x36731655; 
@property(readonly, assign, nonatomic) NSArray *inputGroups;	// G=0x3673196d; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x36731945; 
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x367315c1; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x36731891; S=0x367318b9; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x36731659; S=0x3673169d; 
@property(assign, nonatomic) int movieTimeScale;	// G=0x367317dd; S=0x36731805; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x36731599; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x36731729; S=0x36731751; 
@property(readonly, assign, nonatomic) int status;	// G=0x36731621; 
@property(retain) AVWeakReference *weakReferenceToAssetWriter;	// G=0x36732371; S=0x36732385; @synthesize=_weakReferenceToAssetWriter
- (id)init;	// 0x3673143d
- (id)initWithConfigurationState:(id)configurationState;	// 0x36731451
- (BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)mediaType exceptionReason:(id *)reason;	// 0x36731995
- (BOOL)_canApplyTrackReferences:(id)references exceptionReason:(id *)reason;	// 0x36731c0d
- (void)_transitionToClientInitiatedTerminalStatus:(int)clientInitiatedTerminalStatus;	// 0x36732095
- (void)addInput:(id)input;	// 0x36731d45
- (void)addInputGroup:(id)group;	// 0x36731dd5
// declared property getter: - (id)availableMediaTypes;	// 0x367315e9
- (BOOL)canAddInput:(id)input;	// 0x36731d41
- (BOOL)canAddInputGroup:(id)group;	// 0x36731dd1
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x36731ba9
- (void)cancelWriting;	// 0x36732005
// declared property getter: - (id)configurationState;	// 0x36732361
- (void)dealloc;	// 0x36731535
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x36731f79
// declared property getter: - (id)error;	// 0x36731655
- (void)finishWriting;	// 0x36732009
// declared property getter: - (id)inputGroups;	// 0x3673196d
// declared property getter: - (id)inputs;	// 0x36731945
// declared property getter: - (id)mediaFileType;	// 0x367315c1
// declared property getter: - (id)metadata;	// 0x36731891
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x36731659
// declared property getter: - (int)movieTimeScale;	// 0x367317dd
// declared property getter: - (id)outputURL;	// 0x36731599
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x367318b9
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x3673169d
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x36731805
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x36731751
// declared property setter: - (void)setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x36732385
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x36731729
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x36731eed
- (void)startWriting;	// 0x36731e61
// declared property getter: - (int)status;	// 0x36731621
- (void)transitionToFailedStatusWithError:(id)error;	// 0x367321fd
// declared property getter: - (id)weakReferenceToAssetWriter;	// 0x36732371
@end

