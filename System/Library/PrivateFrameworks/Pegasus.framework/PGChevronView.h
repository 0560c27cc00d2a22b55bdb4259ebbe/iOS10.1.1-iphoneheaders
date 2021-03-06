/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface PGChevronView : UIView {

	long long _state;
	UIView* _topView;
	UIView* _bottomView;

}

@property (assign,nonatomic) long long state; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
@end

