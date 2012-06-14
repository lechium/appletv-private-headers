/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSOrderedSet;

@interface UIKeyboardCandidateGroup : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSOrderedSet *_candidates;	// 8 = 0x8
	NSArray *_nonExtensionCandidates;	// 12 = 0xc
}
@property(copy) NSOrderedSet *candidates;	// G=0x304364dd; S=0x304364f1; @synthesize=_candidates
@property(retain) NSArray *nonExtensionCandidates;	// G=0x30436239; S=0x304363d1; @synthesize=_nonExtensionCandidates
@property(copy) NSString *title;	// G=0x304364b9; S=0x304364cd; @synthesize=_title
- (id)initWithTitle:(id)title candidates:(id)candidates;	// 0x30435ead
- (void)addCandidate:(id)candidate;	// 0x30436161
// declared property getter: - (id)candidates;	// 0x304364dd
- (void)dealloc;	// 0x30435f0d
- (unsigned)hash;	// 0x3043604d
- (BOOL)isEqual:(id)equal;	// 0x30435f85
- (id)mutableCandidates;	// 0x304360a1
// declared property getter: - (id)nonExtensionCandidates;	// 0x30436239
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x304364f1
// declared property setter: - (void)setNonExtensionCandidates:(id)candidates;	// 0x304363d1
// declared property setter: - (void)setTitle:(id)title;	// 0x304364cd
- (void)sortUsingComparator:(id)comparator;	// 0x304361ad
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x304361f1
// declared property getter: - (id)title;	// 0x304364b9
@end

