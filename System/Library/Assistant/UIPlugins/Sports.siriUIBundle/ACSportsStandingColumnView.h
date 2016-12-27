/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class NSMutableArray, NSArray;

@interface ACSportsStandingColumnView : ACSportsEntityView {

	NSMutableArray* _statLabels;
	NSArray* _snippetColumnHeaders;
	BOOL _isFirstHeaderGroup;

}

@property (assign,nonatomic) BOOL isFirstHeaderGroup;              //@synthesize isFirstHeaderGroup=_isFirstHeaderGroup - In the implementation block
+(double)interimSpacing;
-(double)statLabelMinX;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(void)setIsFirstHeaderGroup:(BOOL)arg1 ;
-(void)setSnippetColumns:(id)arg1 ;
-(BOOL)isFirstHeaderGroup;
-(BOOL)_columnsContainMultipleStats;
-(void)_updateStatLabels;
-(unsigned long long)_numberOfStatColumns;
-(double)_nonStatLabelColumnWidth;
-(double)statLabelBaselineOffset;
-(void)statLabelMinXDidChange;
-(id)textForSnippetColumn:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)labelFont;
@end

