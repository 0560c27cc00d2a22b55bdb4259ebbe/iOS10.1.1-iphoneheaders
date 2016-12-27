/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl {

	NSArray* _buttons;
	long long _selectedTitleIndex;

}

@property (nonatomic,readonly) double edgePadding; 
@property (assign,nonatomic) long long selectedTitleIndex;              //@synthesize selectedTitleIndex=_selectedTitleIndex - In the implementation block
@property (nonatomic,copy) NSArray * titles; 
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)sizeToFit;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(double)edgePadding;
-(void)_buttonAction:(id)arg1 ;
-(void)_reloadSelectedButton;
-(void)setSelectedTitleIndex:(long long)arg1 ;
-(long long)selectedTitleIndex;
@end

