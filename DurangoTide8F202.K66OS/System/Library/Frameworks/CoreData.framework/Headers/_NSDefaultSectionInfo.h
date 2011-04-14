/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSFetchedResultsSectionInfo.h"

@class NSFetchedResultsController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {
@private
	NSFetchedResultsController *_controller;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSString *_indexTitle;	// 12 = 0xc
	unsigned _sectionOffset;	// 16 = 0x10
	unsigned _numberOfObjects;	// 20 = 0x14
	unsigned _oldSectionNumber;	// 24 = 0x18
	id _sectionObjects;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *indexTitle;	// G=0x3310a699; @synthesize=_indexTitle
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3310a689; @synthesize=_name
@property(readonly, assign, nonatomic) unsigned numberOfObjects;	// G=0x3310a6a9; @synthesize=_numberOfObjects
@property(readonly, assign, nonatomic) NSArray *objects;	// G=0x33101195; 
@property(assign, nonatomic) unsigned oldSectionNumber;	// G=0x3319c47d; S=0x3319c48d; @synthesize=_oldSectionNumber
@property(readonly, assign, nonatomic) unsigned sectionNumber;	// G=0x3319c71d; 
@property(readonly, assign, nonatomic) unsigned sectionOffset;	// G=0x3310a6b9; @synthesize=_sectionOffset
- (id)initWithCoder:(id)coder;	// 0x3319c551
- (id)initWithController:(id)controller name:(id)name indexTitle:(id)title sectionOffset:(unsigned)offset;	// 0x33100c39
- (void)clearSectionObjectsCache;	// 0x33100cfd
- (void)dealloc;	// 0x3310709d
- (void)encodeWithCoder:(id)coder;	// 0x3319c665
- (unsigned)indexOfObject:(id)object;	// 0x3319c49d
// declared property getter: - (id)indexTitle;	// 0x3310a699
// declared property getter: - (id)name;	// 0x3310a689
// declared property getter: - (unsigned)numberOfObjects;	// 0x3310a6a9
// declared property getter: - (id)objects;	// 0x33101195
// declared property getter: - (unsigned)oldSectionNumber;	// 0x3319c47d
// declared property getter: - (unsigned)sectionNumber;	// 0x3319c71d
// declared property getter: - (unsigned)sectionOffset;	// 0x3310a6b9
- (void)setController:(id)controller;	// 0x3319c46d
- (void)setNumberOfObjects:(unsigned)objects;	// 0x33100cdd
// declared property setter: - (void)setOldSectionNumber:(unsigned)number;	// 0x3319c48d
- (void)setSectionOffset:(unsigned)offset;	// 0x3319c531
@end

