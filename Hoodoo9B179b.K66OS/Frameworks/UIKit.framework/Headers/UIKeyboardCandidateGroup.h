/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSOrderedSet, NSArray, NSString;

@interface UIKeyboardCandidateGroup : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSOrderedSet *_candidates;	// 8 = 0x8
	NSArray *_nonExtensionCandidates;	// 12 = 0xc
}
@property(copy) NSOrderedSet *candidates;	// G=0x332728d5; S=0x332728e9; @synthesize=_candidates
@property(retain) NSArray *nonExtensionCandidates;	// G=0x33272639; S=0x332727bd; @synthesize=_nonExtensionCandidates
@property(copy) NSString *title;	// G=0x3327289d; S=0x332728b1; @synthesize=_title
- (id)initWithTitle:(id)title candidates:(id)candidates;	// 0x332722ad
- (void)addCandidate:(id)candidate;	// 0x33272565
// declared property getter: - (id)candidates;	// 0x332728d5
- (void)dealloc;	// 0x3327230d
- (unsigned)hash;	// 0x33272449
- (BOOL)isEqual:(id)equal;	// 0x33272381
- (id)mutableCandidates;	// 0x3327249d
// declared property getter: - (id)nonExtensionCandidates;	// 0x33272639
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x332728e9
// declared property setter: - (void)setNonExtensionCandidates:(id)candidates;	// 0x332727bd
// declared property setter: - (void)setTitle:(id)title;	// 0x332728b1
- (void)sortUsingComparator:(id)comparator;	// 0x332725ad
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x332725f1
// declared property getter: - (id)title;	// 0x3327289d
@end
