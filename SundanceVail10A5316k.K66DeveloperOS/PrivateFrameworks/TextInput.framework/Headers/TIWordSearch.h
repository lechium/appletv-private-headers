/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <NSObject.h> // Unknown library

@class TIMecabraWrapper, NSOperationQueue, TIWordSearchOperationGetCandidates;

@interface TIWordSearch : NSObject {
@private
	TIMecabraWrapper *_mecabraWrapper;	// 4 = 0x4
	NSOperationQueue *_operationQueue;	// 8 = 0x8
	TIWordSearchOperationGetCandidates *_operation;	// 12 = 0xc
	BOOL _autoCorrects;	// 16 = 0x10
	BOOL _shouldLearnAcceptedCandidate;	// 17 = 0x11
}
@property(assign) BOOL autoCorrects;	// G=0x31beaa01; S=0x31beaa19; @synthesize=_autoCorrects
@property(readonly, assign) Mecabra *mecabra;	// G=0x31bea059; 
@property(readonly, assign) TIMecabraWrapper *mecabraWrapper;	// G=0x31be9f79; @synthesize=_mecabraWrapper
@property(retain) TIWordSearchOperationGetCandidates *operation;	// G=0x31bea9dd; S=0x31bea9f1; @synthesize=_operation
@property(readonly, assign) NSOperationQueue *operationQueue;	// G=0x31bea08d; @synthesize=_operationQueue
@property(assign) BOOL shouldLearnAcceptedCandidate;	// G=0x31beaa31; S=0x31beaa49; @synthesize=_shouldLearnAcceptedCandidate
- (id)initTIWordSearch;	// 0x31bea11d
// declared property getter: - (BOOL)autoCorrects;	// 0x31beaa01
- (id)cachedCandidatesForOperation:(id)operation;	// 0x31bea1cd
- (void)cancel;	// 0x31bea3fd
- (id)candidatesForOperation:(id)operation;	// 0x31bea1c9
- (void)clearLearningDictionary;	// 0x31be9f35
- (void)completeOperationsInQueue;	// 0x31bea589
- (CFURLRef)createMecabraLearningDictionaryDirectory;	// 0x31bea085
- (void)dealloc;	// 0x31bea165
- (id)facemarkCandiates;	// 0x31bea1d1
- (id)geometryModelDataFromZephyr:(TIInputManagerZephyr *)zephyr;	// 0x31bea615
- (float)getLoglikelihoodFromZephyr:(TIInputManagerZephyr *)zephyr keys:(unsigned short *)keys length:(int)length touch_index:(int)index totalCount:(int)count;	// 0x31bea7e9
- (BOOL)isCancelled;	// 0x31bea451
- (void)lastAcceptedCandidateCorrected;	// 0x31bea511
// declared property getter: - (Mecabra *)mecabra;	// 0x31bea059
- (unsigned long)mecabraCreationOptions;	// 0x31bea089
- (int)mecabraInputMethodType;	// 0x31bea081
// declared property getter: - (id)mecabraWrapper;	// 0x31be9f79
// declared property getter: - (id)operation;	// 0x31bea9dd
// declared property getter: - (id)operationQueue;	// 0x31bea08d
- (void)performAccept:(id)accept isPartial:(BOOL)partial;	// 0x31bea341
- (void)performOperationAsync:(id)async;	// 0x31bea4e5
- (void)resetPreviousWord;	// 0x31bea479
- (void)saveLearningDictionary;	// 0x31bea5d1
// declared property setter: - (void)setAutoCorrects:(BOOL)corrects;	// 0x31beaa19
// declared property setter: - (void)setOperation:(id)operation;	// 0x31bea9f1
// declared property setter: - (void)setShouldLearnAcceptedCandidate:(BOOL)learnAcceptedCandidate;	// 0x31beaa49
// declared property getter: - (BOOL)shouldLearnAcceptedCandidate;	// 0x31beaa31
- (void)updateUserWordEntries;	// 0x31bea879
@end
