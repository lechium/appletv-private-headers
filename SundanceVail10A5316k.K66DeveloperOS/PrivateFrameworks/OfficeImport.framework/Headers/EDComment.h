/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDComment : NSObject {
@private
	bool mVisible;	// 4 = 0x4
	int mRowIndex;	// 8 = 0x8
	int mColumnIndex;	// 12 = 0xc
}
@property(assign) int columnIndex;	// G=0x3122b115; S=0x311aadd9; converted property
@property(assign) int rowIndex;	// G=0x3122b105; S=0x311aadc9; converted property
@property(assign, getter=isVisible) bool visible;	// G=0x311aaf0d; S=0x311aade9; converted property
// converted property getter: - (int)columnIndex;	// 0x3122b115
// converted property getter: - (bool)isVisible;	// 0x311aaf0d
// converted property getter: - (int)rowIndex;	// 0x3122b105
// converted property setter: - (void)setColumnIndex:(int)index;	// 0x311aadd9
// converted property setter: - (void)setRowIndex:(int)index;	// 0x311aadc9
// converted property setter: - (void)setVisible:(bool)visible;	// 0x311aade9
@end

