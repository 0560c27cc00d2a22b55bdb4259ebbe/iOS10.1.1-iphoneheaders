/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlaybackContext.h>

@class NSArray;

@interface RadioMutablePlaybackContext : RadioPlaybackContext

@property (assign,nonatomic) long long numberOfSkipsUsed; 
@property (nonatomic,copy) NSArray * trackPlaybackDescriptorQueue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrackPlaybackDescriptorQueue:(NSArray *)arg1 ;
-(void)setNumberOfSkipsUsed:(long long)arg1 ;
@end

