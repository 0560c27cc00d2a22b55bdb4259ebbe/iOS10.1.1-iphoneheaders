/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface OpusMagazinePageItemDurations : NSObject {

	NSDictionary* _itemDurations;
	double _pageDuration;

}

@property (nonatomic,retain) NSDictionary * itemDurations;              //@synthesize itemDurations=_itemDurations - In the implementation block
@property (assign,nonatomic) double pageDuration;                       //@synthesize pageDuration=_pageDuration - In the implementation block
-(NSDictionary *)itemDurations;
-(double)pageDuration;
-(void)setPageDuration:(double)arg1 ;
-(void)setItemDurations:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end

