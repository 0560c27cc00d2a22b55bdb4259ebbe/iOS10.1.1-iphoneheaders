/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>
#import <libobjc.A.dylib/FCOperationPrioritizing.h>

@class NSString;

@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing> {

	long long _relativePriority;
	/*^block*/id _cancelHandler;
	/*^block*/id _priorityHandler;

}

@property (nonatomic,copy) id cancelHandler;                          //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,copy) id priorityHandler;                        //@synthesize priorityHandler=_priorityHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long relativePriority;              //@synthesize relativePriority=_relativePriority - In the implementation block
-(void)cancel;
-(void)setCancelHandler:(id)arg1 ;
-(id)cancelHandler;
-(long long)relativePriority;
-(void)setRelativePriority:(long long)arg1 ;
-(void)setPriorityHandler:(id)arg1 ;
-(id)priorityHandler;
@end

