/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@protocol FCChannelProviding;
@class NSArray, NSMutableArray;

@interface FCLocalFetchOperation : FCFetchOperation {

	NSArray* _paths;
	NSMutableArray* _headlines;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) NSArray * paths;                           //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) NSMutableArray * headlines;                //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,retain) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
-(void)setChannel:(id<FCChannelProviding>)arg1 ;
-(id<FCChannelProviding>)channel;
-(void)performOperation;
-(NSMutableArray *)headlines;
-(NSArray *)paths;
-(id)initWithPaths:(id)arg1 andChannel:(id)arg2 ;
-(void)convertPathsToHeadlines;
@end

