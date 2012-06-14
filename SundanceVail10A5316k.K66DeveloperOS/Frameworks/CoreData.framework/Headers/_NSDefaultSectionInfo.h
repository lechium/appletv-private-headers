/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSFetchedResultsSectionInfo.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSFetchedResultsController;

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
@property(readonly, assign, nonatomic) NSString *indexTitle;	// G=0x32de8a75; @synthesize=_indexTitle
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32de8a65; @synthesize=_name
@property(readonly, assign, nonatomic) unsigned numberOfObjects;	// G=0x32de8a95; @synthesize=_numberOfObjects
@property(readonly, assign, nonatomic) NSArray *objects;	// G=0x32de8905; 
@property(assign, nonatomic) unsigned oldSectionNumber;	// G=0x32de8aa5; S=0x32de8ab5; @synthesize=_oldSectionNumber
@property(readonly, assign, nonatomic) unsigned sectionNumber;	// G=0x32de8861; 
@property(readonly, assign, nonatomic) unsigned sectionOffset;	// G=0x32de8a85; @synthesize=_sectionOffset
- (id)initWithCoder:(id)coder;	// 0x32de8701
- (id)initWithController:(id)controller name:(id)name indexTitle:(id)title sectionOffset:(unsigned)offset;	// 0x32de84fd
- (void)clearSectionObjectsCache;	// 0x32de88d9
- (void)dealloc;	// 0x32de85b9
- (void)encodeWithCoder:(id)coder;	// 0x32de8631
- (unsigned)indexOfObject:(id)object;	// 0x32de89d1
// declared property getter: - (id)indexTitle;	// 0x32de8a75
// declared property getter: - (id)name;	// 0x32de8a65
// declared property getter: - (unsigned)numberOfObjects;	// 0x32de8a95
// declared property getter: - (id)objects;	// 0x32de8905
// declared property getter: - (unsigned)oldSectionNumber;	// 0x32de8aa5
// declared property getter: - (unsigned)sectionNumber;	// 0x32de8861
// declared property getter: - (unsigned)sectionOffset;	// 0x32de8a85
- (void)setController:(id)controller;	// 0x32de88c9
- (void)setNumberOfObjects:(unsigned)objects;	// 0x32de8821
// declared property setter: - (void)setOldSectionNumber:(unsigned)number;	// 0x32de8ab5
- (void)setSectionOffset:(unsigned)offset;	// 0x32de8841
@end

