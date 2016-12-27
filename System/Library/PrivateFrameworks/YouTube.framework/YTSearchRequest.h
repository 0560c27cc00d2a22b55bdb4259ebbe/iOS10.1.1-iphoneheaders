/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTFeedRequest.h>

@interface YTSearchRequest : YTFeedRequest
+(unsigned)videosPerRequest;
+(id)_formatFilter;
+(id)feedCountryCode;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)didParseData;
-(void)failWithError:(id)arg1 ;
-(void)searchForVideosWithFeedURLBase:(id)arg1 startingAtIndex:(unsigned)arg2 maxResults:(unsigned)arg3 withTimeQualifier:(id)arg4 withFormatFilter:(BOOL)arg5 authenticationRequired:(BOOL)arg6 withDelegate:(id)arg7 ;
-(void)searchForVideoWithID:(id)arg1 withDelegate:(id)arg2 ;
-(void)searchForVideosWithIDs:(id)arg1 withDelegate:(id)arg2 ;
-(void)searchForVideosMatchingString:(id)arg1 startingAtIndex:(unsigned)arg2 maxResults:(unsigned)arg3 withDelegate:(id)arg4 ;
-(void)searchForStandardFeedVideosOfType:(id)arg1 startIndex:(unsigned)arg2 maxResults:(unsigned)arg3 timeQualifier:(id)arg4 withDelegate:(id)arg5 ;
-(void)searchForRecentVideosStartingAtIndex:(unsigned)arg1 maxResults:(unsigned)arg2 withDelegate:(id)arg3 ;
-(void)searchForVideosRelatedToVideo:(id)arg1 startingAtIndex:(unsigned)arg2 maxResults:(unsigned)arg3 withDelegate:(id)arg4 ;
-(void)searchForVideosByAuthor:(id)arg1 startingAtIndex:(unsigned)arg2 maxResults:(unsigned)arg3 withDelegate:(id)arg4 ;
-(void)searchForFavoriteVideosStartingAtIndex:(unsigned)arg1 maxResults:(unsigned)arg2 withDelegate:(id)arg3 ;
-(void)searchForMyVideosStartingAtIndex:(unsigned)arg1 maxResults:(unsigned)arg2 withDelegate:(id)arg3 ;
-(void)searchForVideosFromWatchLaterPlaylistStartingAtIndex:(unsigned)arg1 maxResults:(unsigned)arg2 withDelegate:(id)arg3 ;
@end

