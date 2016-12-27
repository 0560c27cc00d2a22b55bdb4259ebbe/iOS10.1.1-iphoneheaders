/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VKMapModel, VKMapCanvas;


@protocol VKNavigationCameraController <VKCameraController,VKPuckAnimatorDelegate>
@property (nonatomic,retain) VKMapModel * mapModel; 
@property (assign,nonatomic) VKMapCanvas * mapCanvas; 
@property (assign,nonatomic) double zoomScale; 
@required
-(void)stop;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1;
-(void)setMapCanvas:(id)arg1;
-(void)setMapModel:(id)arg1;
-(VKMapCanvas *)mapCanvas;
-(void)startWithPounce:(BOOL)arg1 pounceCompletionHandler:(/*^block*/id)arg2;
-(VKMapModel *)mapModel;

@end

