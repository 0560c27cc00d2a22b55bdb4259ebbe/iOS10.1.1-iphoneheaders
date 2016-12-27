/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _SBRootFolderLayoutWrapperView : UIView {

	double _statusBarHeightAdjustment;
	double _headerOffset;
	UIView* _wrappedView;
	CGSize _extendedSize;

}

@property (assign,nonatomic) double statusBarHeightAdjustment;              //@synthesize statusBarHeightAdjustment=_statusBarHeightAdjustment - In the implementation block
@property (assign,nonatomic) double headerOffset;                           //@synthesize headerOffset=_headerOffset - In the implementation block
@property (assign,nonatomic) CGSize extendedSize;                           //@synthesize extendedSize=_extendedSize - In the implementation block
@property (nonatomic,retain) UIView * wrappedView;                          //@synthesize wrappedView=_wrappedView - In the implementation block
-(void)setStatusBarHeightAdjustment:(double)arg1 ;
-(void)setHeaderOffset:(double)arg1 ;
-(void)setExtendedSize:(CGSize)arg1 ;
-(double)statusBarHeightAdjustment;
-(double)headerOffset;
-(CGSize)extendedSize;
-(void)layoutSubviews;
-(UIView *)wrappedView;
-(void)setWrappedView:(UIView *)arg1 ;
-(void)_updateLayout;
@end

