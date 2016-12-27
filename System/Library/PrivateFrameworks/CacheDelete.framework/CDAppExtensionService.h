/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CacheDelete/CDXPCService.h>

@protocol NSCopying;
@class NSExtension;

@interface CDAppExtensionService : CDXPCService {

	NSExtension* _extension;
	id<NSCopying> _requestId;

}

@property (nonatomic,retain) id<NSCopying> requestId;                //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
-(void)resumeConnection;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)setInvalidationBlock:(/*^block*/id)arg1 ;
-(NSExtension *)extension;
-(id)initWithInfo:(id)arg1 extension:(id)arg2 ;
-(void)obtainXPCConnection:(/*^block*/id)arg1 ;
-(void)setInterruptionBlock:(/*^block*/id)arg1 ;
-(id<NSCopying>)requestId;
-(void)setRequestId:(id<NSCopying>)arg1 ;
-(void)invalidateConnection;
@end

