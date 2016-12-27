/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class MPMediaQuery, NSDictionary;

@interface MPQueryPlaybackContext : MPPlaybackContext {

	MPMediaQuery* _query;
	NSDictionary* _startTimeModifications;
	NSDictionary* _endTimeModifications;

}

@property (nonatomic,readonly) MPMediaQuery * query;                           //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSDictionary * startTimeModifications;              //@synthesize startTimeModifications=_startTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * endTimeModifications;                //@synthesize endTimeModifications=_endTimeModifications - In the implementation block
+(Class)queueFeederClass;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MPMediaQuery *)query;
-(id)descriptionComponents;
-(id)initWithQuery:(id)arg1 ;
-(NSDictionary *)startTimeModifications;
-(void)setStartTimeModifications:(NSDictionary *)arg1 ;
-(NSDictionary *)endTimeModifications;
-(void)setEndTimeModifications:(NSDictionary *)arg1 ;
@end

