/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayer/MPTransportButton.h>
#import <libobjc.A.dylib/MPUTransportButton.h>

@class MPUTransportButtonEventHandler, NSString;

@interface MPUStandardTransportButton : MPTransportButton <MPUTransportButton> {

	MPUTransportButtonEventHandler* _transportButtonEventHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) long long transportButtonImageViewContentMode; 
+(id)transportButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)shouldTrack;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MP1)arg1 ;
-(BOOL)wantsCustomHighlightAppearance;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;
-(void)setTransportButtonImageViewContentMode:(long long)arg1 ;
-(long long)transportButtonImageViewContentMode;
@end

