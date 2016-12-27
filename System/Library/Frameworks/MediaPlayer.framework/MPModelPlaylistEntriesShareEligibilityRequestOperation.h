/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelPlaylistEntriesShareEligibilityRequest;

@interface MPModelPlaylistEntriesShareEligibilityRequestOperation : MPAsyncOperation {

	MPModelPlaylistEntriesShareEligibilityRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelPlaylistEntriesShareEligibilityRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                   //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPModelPlaylistEntriesShareEligibilityRequest *)request;
-(void)setRequest:(MPModelPlaylistEntriesShareEligibilityRequest *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
@end

