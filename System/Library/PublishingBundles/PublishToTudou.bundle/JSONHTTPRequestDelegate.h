/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PublishingBundles/PublishToTudou.bundle/PublishToTudou
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JSONHTTPRequestDelegate <NSObject>
@optional
-(void)request:(id)arg1 hasWrittenBytes:(long long)arg2 expectsToWrite:(long long)arg3;

@required
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)request:(id)arg1 didReceiveObject:(id)arg2;

@end

