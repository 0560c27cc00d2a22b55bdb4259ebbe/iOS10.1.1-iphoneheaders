/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString;

@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate> {

	/*^block*/id _onDataReceived;
	/*^block*/id _onCompletion;

}

@property (copy) id onDataReceived;                                 //@synthesize onDataReceived=_onDataReceived - In the implementation block
@property (copy) id onCompletion;                                   //@synthesize onCompletion=_onCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setOnDataReceived:(id)arg1 ;
-(void)setOnCompletion:(id)arg1 ;
-(id)onDataReceived;
-(id)onCompletion;
@end

