/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class NSArray;

@interface OFLinearGradientView : OFUIView

@property (nonatomic,copy) NSArray * locations; 
@property (nonatomic,copy) NSArray * colors; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)dealloc;
-(NSArray *)colors;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)gradientLayer;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)locations;
-(CGPoint)endPoint;
@end

