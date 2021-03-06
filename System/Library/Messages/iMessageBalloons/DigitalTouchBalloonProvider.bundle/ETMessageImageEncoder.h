/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <DigitalTouchBalloonProvider/IMBalloonPluginFallbackEncoder.h>

@class NSString;

@interface ETMessageImageEncoder : NSObject <IMBalloonPluginFallbackEncoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)createVideoForMessage:(id)arg1 atURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)_drawImageFromPath:(id)arg1 intoContext:(CGContextRef)arg2 ;
+(BOOL)createVideoWithIntroMessage:(id)arg1 playingMessagesArray:(id)arg2 sourceVideoURL:(id)arg3 destinationURL:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)createSingleFrameVideoFromPhotoURL:(id)arg1 atTempURL:(id)arg2 videoSize:(CGSize)arg3 forMessage:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
+(void)_finishedWritingAtURL:(id)arg1 withSuccess:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CGImageRef)_createImageForMessage:(id)arg1 ;
-(void)fallbackForData:(id)arg1 inFileURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fallbackForData:(id)arg1 attachments:(id)arg2 inFileURL:(id)arg3 completionBlockWithText:(/*^block*/id)arg4 ;
@end

