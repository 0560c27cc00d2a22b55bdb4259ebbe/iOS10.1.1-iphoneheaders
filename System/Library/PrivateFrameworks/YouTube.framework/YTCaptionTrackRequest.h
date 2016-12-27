/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@protocol YTCaptionTrackRequestDelegate;
@class YTCaptionTrack;

@interface YTCaptionTrackRequest : YTXMLHTTPRequest {

	id<YTCaptionTrackRequestDelegate> _delegate;
	YTCaptionTrack* _captionTrack;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)failWithError:(id)arg1 ;
-(void)_requestCaptionTrackDataWithURL:(id)arg1 ;
-(id)initCaptionTrackDataRequest:(id)arg1 withDelegate:(id)arg2 ;
-(id)captionTrack;
@end

