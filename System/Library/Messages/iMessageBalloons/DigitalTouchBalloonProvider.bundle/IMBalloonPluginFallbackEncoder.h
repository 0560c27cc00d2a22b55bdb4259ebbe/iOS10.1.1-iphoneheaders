/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMBalloonPluginFallbackEncoder <NSObject>
@optional
-(void)fallbackForData:(id)arg1 inFileURL:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)fallbackForData:(id)arg1 attachments:(id)arg2 inFileURL:(id)arg3 completionBlockWithText:(/*^block*/id)arg4;
-(void)fullQualityForData:(id)arg1 inFileURL:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)fullQualityForData:(id)arg1 attachments:(id)arg2 inFileURL:(id)arg3 completionBlock:(/*^block*/id)arg4;

@end

