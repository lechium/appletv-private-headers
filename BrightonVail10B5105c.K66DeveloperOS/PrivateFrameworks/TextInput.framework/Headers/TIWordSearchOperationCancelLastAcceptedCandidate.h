/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIWordSearchOperation.h"

@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation {
	TIMecabraWrapper *_mecabraWrapper;	// 12 = 0xc
}
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper;	// G=0x334ce291; S=0x334ce2a1; @synthesize=_mecabraWrapper
- (id)initWithWordSearch:(id)wordSearch;	// 0x334ce1ad
- (void)cancel;	// 0x334ce25d
- (void)dealloc;	// 0x334ce211
// declared property getter: - (id)mecabraWrapper;	// 0x334ce291
- (void)perform;	// 0x334ce261
// declared property setter: - (void)setMecabraWrapper:(id)wrapper;	// 0x334ce2a1
@end

