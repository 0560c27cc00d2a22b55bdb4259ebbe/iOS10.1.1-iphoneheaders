/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKSlideshowElement : IKViewElement

@property (nonatomic,readonly) long long showSettings; 
@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,readonly) unsigned long long transition; 
@property (nonatomic,readonly) double transitionInterval; 
-(NSArray *)images;
-(unsigned long long)transition;
-(double)transitionInterval;
-(long long)showSettings;
@end
