/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroMovieDisplayContainerViewControllerDelegate <NSObject>
@optional
-(void)airPlayDidStart;
-(void)playerDidGenerateNewPosters;
-(void)playerRateChanged;
-(void)playerDidPlayToEnd;
-(void)playerContentChangeFailed;
-(void)playerWillRefreshMovie;
-(void)playerDidDoContentChange;
-(void)playerContentChangeRemainingAssetsToDownload:(long long)arg1;
-(void)playerContentChangeDownloadProgress:(float)arg1;
-(void)playerWillDoContentChange;
-(void)playerContentChangeProgress:(float)arg1;

@required
-(void)airPlayDidEnd;

@end

