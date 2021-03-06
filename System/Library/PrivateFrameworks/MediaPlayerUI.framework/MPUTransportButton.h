/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPUTransportButtonEventHandler;


@protocol MPUTransportButton <NSObject>
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) long long transportButtonImageViewContentMode; 
@required
+(id)transportButton;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
-(void)prepareForReuse;
-(BOOL)adjustsImageWhenHighlighted;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MP1)arg1;
-(BOOL)wantsCustomHighlightAppearance;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;
-(void)setTransportButtonImageViewContentMode:(long long)arg1;
-(long long)transportButtonImageViewContentMode;

@end

