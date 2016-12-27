/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject {

	int _message;
	long long _progress;
	long long _currentPrimaryComponentID;
	NSDictionary* _captureImage;
	NSDictionary* _renderedImage;
	NSDictionary* _messageDetails;

}

@property (assign,nonatomic) long long progress;                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long currentPrimaryComponentID;              //@synthesize currentPrimaryComponentID=_currentPrimaryComponentID - In the implementation block
@property (nonatomic,retain) NSDictionary * captureImage;                      //@synthesize captureImage=_captureImage - In the implementation block
@property (nonatomic,retain) NSDictionary * renderedImage;                     //@synthesize renderedImage=_renderedImage - In the implementation block
@property (assign,nonatomic) int message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * messageDetails;                    //@synthesize messageDetails=_messageDetails - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setProgress:(long long)arg1 ;
-(void)setMessage:(int)arg1 ;
-(int)message;
-(long long)progress;
-(NSDictionary *)renderedImage;
-(NSDictionary *)captureImage;
-(NSDictionary *)messageDetails;
-(long long)currentPrimaryComponentID;
-(void)setMessageDetails:(NSDictionary *)arg1 ;
-(void)setCaptureImage:(NSDictionary *)arg1 ;
-(void)setRenderedImage:(NSDictionary *)arg1 ;
-(void)setCurrentPrimaryComponentID:(long long)arg1 ;
@end

