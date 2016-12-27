/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCFeedTheming, FCChannelProviding;
@class NSArray;

@interface FCLocalFeedDescriptor : FCFeedDescriptor {

	NSArray* _paths;
	id<FCFeedTheming> _feedTheme;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) NSArray * paths;                           //@synthesize paths=_paths - In the implementation block
@property (nonatomic,retain) id<FCFeedTheming> feedTheme;                 //@synthesize feedTheme=_feedTheme - In the implementation block
@property (nonatomic,retain) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
-(id)name;
-(void)setChannel:(id<FCChannelProviding>)arg1 ;
-(id<FCChannelProviding>)channel;
-(id)theme;
-(BOOL)isSubscribable;
-(id)streamOfLatestHeadlinesWithContext:(id)arg1 ;
-(long long)feedType;
-(id<FCFeedTheming>)feedTheme;
-(NSArray *)paths;
-(id)initWithIdentifier:(id)arg1 articlePaths:(id)arg2 theme:(id)arg3 channel:(id)arg4 ;
-(id)fetchOperationForHeadlinesWithIDs:(id)arg1 ;
-(BOOL)isSubscribedTo;
-(void)setFeedTheme:(id<FCFeedTheming>)arg1 ;
@end

