/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray;

@interface SKUIShelfLayoutData : NSObject {

	double _columnSpacing;
	NSMutableArray* _columnWidths;
	UIEdgeInsets _contentInset;
	long long _numberOfRows;
	double* _rowHeights;

}

@property (nonatomic,readonly) double columnSpacing;                   //@synthesize columnSpacing=_columnSpacing - In the implementation block
@property (nonatomic,readonly) long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) CGSize totalContentSize; 
@property (nonatomic,readonly) long long numberOfColumns; 
-(void)dealloc;
-(long long)numberOfColumns;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(long long)numberOfRows;
-(CGSize)sizeForItemAtIndex:(long long)arg1 ;
-(CGSize)totalContentSize;
-(double)columnSpacing;
-(void)enumerateColumnsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(double)columnWidthForIndex:(long long)arg1 ;
-(double)rowHeightForIndex:(long long)arg1 ;
-(id)initWithNumberOfRows:(long long)arg1 columnSpacing:(double)arg2 ;
-(void)reloadWithItemCount:(long long)arg1 sizeBlock:(/*^block*/id)arg2 ;
@end

