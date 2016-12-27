/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioTrackPlaybackDescriptor.h>

@class NSDate, NSDictionary;

@interface RadioMutableTrackPlaybackDescriptor : RadioTrackPlaybackDescriptor

@property (assign,getter=isCurrent,nonatomic) BOOL current; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (assign,nonatomic) double pauseTime; 
@property (nonatomic,retain) NSDate * skipDate; 
@property (assign,nonatomic) long long storeID; 
@property (nonatomic,copy) NSDictionary * trackInfo; 
-(void)setTrackInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setCurrent:(BOOL)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(void)setPauseTime:(double)arg1 ;
-(void)setSkipDate:(NSDate *)arg1 ;
@end

