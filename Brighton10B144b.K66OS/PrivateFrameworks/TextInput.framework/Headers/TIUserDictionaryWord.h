/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSManagedObject.h> // Unknown library

@class NSString;

@interface TIUserDictionaryWord : NSManagedObject {
	NSString *_sectionIndex;	// 48 = 0x30
}
@property(copy, nonatomic) NSString *sectionIndex;	// G=0x359a7d21; S=0x359a7e49; @synthesize=_sectionIndex
@property(copy, nonatomic) NSString *shortcut;	// S=0x359a7cb9; @dynamic
@property(copy, nonatomic) NSString *target;	// S=0x359a7c51; @dynamic
+ (id)entityDescription;	// 0x359a703d
+ (id)predicateFilteringForSearchText:(id)searchText;	// 0x359a7319
+ (id)predicateMatchingTarget:(id)target shortcut:(id)shortcut;	// 0x359a72e1
+ (id)sortDescriptors;	// 0x359a721d
+ (BOOL)userWord:(id)word duplicatesTarget:(id)target andShortcut:(id)shortcut;	// 0x359a7669
+ (int)validateWithNewTarget:(id)newTarget newShortcut:(id)shortcut otherWords:(id)words;	// 0x359a73c9
- (id)changeDescription;	// 0x359a7bb1
- (id)changeDescriptionKey:(id)key;	// 0x359a79a5
- (int)compare:(id)compare;	// 0x359a734d
- (id)copyWithContext:(id)context;	// 0x359a78d9
- (void)dealloc;	// 0x359a6ff1
- (id)filteredValues:(id)values;	// 0x359a79f5
- (BOOL)hasChangesToTargetOrShortcut;	// 0x359a794d
// declared property getter: - (id)sectionIndex;	// 0x359a7d21
// declared property setter: - (void)setSectionIndex:(id)index;	// 0x359a7e49
// declared property setter: - (void)setShortcut:(id)shortcut;	// 0x359a7cb9
// declared property setter: - (void)setTarget:(id)target;	// 0x359a7c51
- (void)takeValuesFrom:(id)from overwriteExistingValues:(BOOL)values;	// 0x359a7711
- (void)updateTimestamp;	// 0x359a7949
@end
