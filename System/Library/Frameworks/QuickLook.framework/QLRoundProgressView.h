/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>

@interface QLRoundProgressView : UIView

@property (assign,nonatomic) double progress; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setProgress:(double)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)progress;
@end

