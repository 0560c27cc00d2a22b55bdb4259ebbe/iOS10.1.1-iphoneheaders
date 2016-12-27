/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOAutomobileOptions, GEOTransitOptions;


@protocol _MKInfoCardController <NSObject>
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate; 
@property (assign,nonatomic) double currentHeaderMinimalModeInterpolationFactor; 
@required
+(double)headerHeightInMinimalMode;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id)arg1;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(id)arg1;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(id)arg1;
-(void)hideTitle:(BOOL)arg1;
-(double)currentHeaderMinimalModeInterpolationFactor;
-(void)setCurrentHeaderMinimalModeInterpolationFactor:(double)arg1;

@end

