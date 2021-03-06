/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSFailable;

@interface VSFileReadOperation : VSAsyncOperation {

	NSURL* _source;
	VSFailable* _result;

}

@property (nonatomic,retain) VSFailable * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSURL * source;                     //@synthesize source=_source - In the implementation block
-(void)setSource:(NSURL *)arg1 ;
-(NSURL *)source;
-(VSFailable *)result;
-(void)setResult:(VSFailable *)arg1 ;
-(void)executionDidBegin;
@end

