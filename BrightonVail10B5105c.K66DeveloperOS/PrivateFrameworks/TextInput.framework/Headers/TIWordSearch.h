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
	TIMecabraWrapper *_mecabraWrapper;	// 4 = 0x4
	NSOperationQueue *_operationQueue;	// 8 = 0x8
	TIWordSearchOperationGetCandidates *_operation;	// 12 = 0xc
	BOOL _autoCorrects;	// 16 = 0x10
	BOOL _shouldLearnAcceptedCandidate;	// 17 = 0x11
}
@property(assign) BOOL autoCorrects;	// G=0x33163f9d; S=0x33163fb5; @synthesize=_autoCorrects
@property(readonly, assign) Mecabra *mecabra;	// G=0x33163471; 
@property(readonly, assign) TIMecabraWrapper *mecabraWrapper;	// G=0x33163379; @synthesize=_mecabraWrapper
@property(retain) TIWordSearchOperationGetCandidates *operation;	// G=0x33163f79; S=0x33163f8d; @synthesize=_operation
@property(readonly, assign) NSOperationQueue *operationQueue;	// G=0x331634a5; @synthesize=_operationQueue
@property(assign) BOOL shouldLearnAcceptedCandidate;	// G=0x33163fcd; S=0x33163fe5; @synthesize=_shouldLearnAcceptedCandidate
- (id)initTIWordSearch;	// 0x33163535
// declared property getter: - (BOOL)autoCorrects;	// 0x33163f9d
- (id)cachedCandidatesForOperation:(id)operation;	// 0x33163731
- (void)cancel;	// 0x33163961
- (id)candidatesForOperation:(id)operation;	// 0x3316372d
- (void)clearCache;	// 0x3316332d
- (void)clearLearningDictionary;	// 0x33163335
- (void)completeOperationsInQueue;	// 0x33163aed
- (CFURLRef)createMecabraLearningDictionaryDirectory;	// 0x3316349d
- (void)dealloc;	// 0x331635dd
- (id)facemarkCandiates;	// 0x33163735
- (id)geometryModelDataFromZephyr:(TIInputManagerZephyr *)zephyr;	// 0x33163bb1
- (float)getLoglikelihoodFromZephyr:(TIInputManagerZephyr *)zephyr keys:(unsigned short *)keys length:(int)length touch_index:(int)index totalCount:(int)count;	// 0x33163d85
- (BOOL)isCancelled;	// 0x331639b5
- (void)jettisonMecabraInstance;	// 0x33163b79
- (void)lastAcceptedCandidateCorrected;	// 0x33163a75
// declared property getter: - (Mecabra *)mecabra;	// 0x33163471
- (unsigned long)mecabraCreationOptions;	// 0x331634a1
- (int)mecabraInputMethodType;	// 0x33163499
// declared property getter: - (id)mecabraWrapper;	// 0x33163379
// declared property getter: - (id)operation;	// 0x33163f79
// declared property getter: - (id)operationQueue;	// 0x331634a5
- (void)performAccept:(id)accept isPartial:(BOOL)partial;	// 0x331638a5
- (void)performOperationAsync:(id)async;	// 0x33163a49
- (void)resetPreviousWord;	// 0x331639dd
- (void)saveLearningDictionary;	// 0x33163b35
// declared property setter: - (void)setAutoCorrects:(BOOL)corrects;	// 0x33163fb5
// declared property setter: - (void)setOperation:(id)operation;	// 0x33163f8d
// declared property setter: - (void)setShouldLearnAcceptedCandidate:(BOOL)learnAcceptedCandidate;	// 0x33163fe5
// declared property getter: - (BOOL)shouldLearnAcceptedCandidate;	// 0x33163fcd
- (void)springBoardDidResignNotification:(id)springBoard;	// 0x3316366d
- (void)updateMecabraState;	// 0x33163331
- (void)updateUserWordEntries;	// 0x33163e15
@end
