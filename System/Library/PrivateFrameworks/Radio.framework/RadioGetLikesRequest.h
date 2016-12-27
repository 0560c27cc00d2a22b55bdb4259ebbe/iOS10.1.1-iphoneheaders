/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioStation;

@interface RadioGetLikesRequest : RadioRequest {

	unsigned long long _numberOfBannedTracks;
	unsigned long long _numberOfLikedTracks;
	SSURLConnectionRequest* _request;
	RadioStation* _station;
	BOOL _shouldProcessItems;

}

@property (assign,nonatomic) unsigned long long numberOfLikedTracks;               //@synthesize numberOfLikedTracks=_numberOfLikedTracks - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBannedTracks;              //@synthesize numberOfBannedTracks=_numberOfBannedTracks - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessItems;                              //@synthesize shouldProcessItems=_shouldProcessItems - In the implementation block
-(id)init;
-(void)cancel;
-(id)initWithStation:(id)arg1 ;
-(void)startWithLikeBanCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfBannedTracks;
-(void)setNumberOfBannedTracks:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLikedTracks;
-(void)setNumberOfLikedTracks:(unsigned long long)arg1 ;
-(BOOL)shouldProcessItems;
-(void)setShouldProcessItems:(BOOL)arg1 ;
@end

